parser grammar StatementParser;

@parser::members {
virtual bool isWithinIndexAccess() = 0;
}

options {
	tokenVocab = CommonLexer;
}

/* Utility ---------------------------------------------------------------------------------------------------------- */
end_: (Nl | Semicolon)+;
openBrace_: LBrace Nl*;
closeBrace_: Nl* RBrace;
openParen_: LParen Nl*;
closeParen_: Nl* RParen;
openBracket_: LBracket Nl*;
closeBracket_: Nl* RBracket;


/* Scentences ------------------------------------------------------------------------------------------------------- */

scope: openBrace_ scentenceCollection closeBrace_;
scentenceCollection: scentenceln* scentence_?;

scentenceln : scentence_ end_;

scentence_
: scentence_ BodyKeyword parenOptStatementMatrix (BodyFollowUpKeyword statement_)? #compoundStatement
| statement_ #statementScentence_
;


/* Statements ------------------------------------------------------------------------------------------------------- */

followUpStatement_
: end_* BodyFollowUpKeyword Nl* scope #scopeEnsuredFollowUp
| end_* BodyFollowUpKeyword statement_ #scopeOrBodyFollowUp
;

matchStatement: Match parenOptStatementMatrix Nl* openBrace_ (expression_ Colon statement_ end_)* closeBrace_;

statement_
: BodyKeyword parenOptStatementMatrix Nl* scope followUpStatement_? #scopeEnsuredBody
| BodyKeyword parenStatementMatrix statement_ followUpStatement_? #scopeOrStatmentBody
| matchStatement #matchStatement_
| specialAssignment_ #multiAssignmentStatement_
| assignment_ #assignmentStatement_
| expression_ #expressionStatement_
| Keyword expression_? #keywordStatement
| scope #scopeStatement_
;


/* Identifiers / Assignments ---------------------------------------------------------------------------------------- */
identifier_
: identifier_ LessThan identifier_ (Comma identifier_)* GreaterThan #templatedIdentifier
| identifier_ openBrace_ expression_ (Comma expression_)* closeBrace_ #runtimeTemplatedIdentifier
| identifier_ DoubleColon identifier_ #nestedIdentifier
| openParen_ (identifier_ (Comma identifier_)*)? closeParen_ #tupleIdentifier
| Identifier #rawIdentifier
| DefaultIdentifier #defaultIdentifier
;

declaration : Let Identifier?;

parameter: expression_ (Colon expression_)?;
parameters: parameter (Comma parameter)*;

assignment_
: expression_ AssignOp statement_ #reassignment
| Fn Identifier openParen_ parameters closeParen_ AssignOp statement_ #inlineFunctionAssignment
| declaration parameter AssignOp statement_ #declaritiveAssignment
;

specialAssignment_: declaration openBrace_ assignment_ (end_ assignment_)* closeBrace_ #multiAssignment;


/* Matrix / Tuple --------------------------------------------------------------------------------------------------- */
// Expression
unwrappedTuple: expression_ (Comma? expression_)*;
unwrappedMatrix: unwrappedTuple (end_ unwrappedTuple)*;
parenWrappedMatrix: openParen_ unwrappedMatrix? closeParen_;
bracketWrappedMatrix: openBracket_ unwrappedMatrix? closeBracket_;

// Statement
statementTuple: statement_ (Comma statement_)*;
statementMatrix: statementTuple (Semicolon statementTuple)*;
parenStatementMatrix: openParen_ statementMatrix? closeParen_;
bracketStatementMatrix: openBracket_ statementMatrix? closeBracket_;
parenOptStatementMatrix: openParen_ statementMatrix? closeParen_ | statementMatrix;

lambda: Fn (openParen_ parameters? closeParen_) (Arrow expression_)? (statement_ | scope);

/* Expressions ------------------------------------------------------------------------------------------------------ */
expression_
// Terms
: identifier_ #identifierExpression
| LParen assignment_ RParen #parenAssignmentExpression
| parenWrappedMatrix #tupleExpression
| bracketWrappedMatrix #matrixExpression
| lambda #lambdaExpression_
| expression_ Dot expression_ #dotAccessExpression
| expression_ bracketWrappedMatrix #indexExpression
| IndexKeyword {isWithinIndexAccess()}? #indexKeywordExpression
| expression_ parenWrappedMatrix #functionCallExpression
| expression_ DotDot expression_ (Colon expression_)? #rangeExpression
| Number #numberExpression
| String #stringExpression
| CustomLiteral #customExpression

// Arithmetic
| op=(Not | Min | Tilda) expression_ #unaryPrefixExpression
| expression_ op=(PlusPlus | MinMin | Question) #unaryPostfixExpression
| expression_ op=(Pow | PowPow) expression_ #binaryExpression
| expression_ op=(Mult | Div | Mod | BitOr | BitAnd) expression_ #binaryExpression
| expression_ op=(Plus | Min) expression_ #binaryExpression
| expression_ op=(OptionalOr | OptionalOrOr) expression_ #binaryExpression
| expression_ op=(Equal | NotEqual | LessThan | GreaterThan | LessThanEqual | GreaterThanEqual) expression_ #binaryExpression
| expression_ op=(And | Or | Is) expression_ #binaryExpression
| expression_ op=(StreamIn | StreamOut) expression_ #binaryExpression
;
