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

/* Sentences ------------------------------------------------------------------------------------------------------- */
scope: openBrace_ sentenceln* sentence_? closeBrace_;

sentenceln : sentence_ end_;

sentence_
: sentence_ BodyKeyword parenOptStatementMatrix (BodyFollowUpKeyword statement_)? #compoundSentence
| statement_ #statementSentence_
;

/* Statements ------------------------------------------------------------------------------------------------------- */
followUpStatement_
: end_* BodyFollowUpKeyword Nl* scope #scopeFollowUp
| end_* BodyFollowUpKeyword statement_ #statementFollowUp
;

// TODO: Needs review
matchStatement: Match parenOptStatementMatrix Nl* openBrace_ (expression_ Colon statement_ end_)* closeBrace_;

statement_
: BodyKeyword parenOptStatementMatrix Nl* scope followUpStatement_? #scopeEnsuredBody
| BodyKeyword parenStatementMatrix statement_ followUpStatement_? #scopeOrStatementBody
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
| Identifier #simpleIdentifier
| DefaultIdentifier #defaultIdentifier
;

declaration_ : Let Identifier*;

parameter: identifier_ (Colon expression_)?;
parameters: parameter (Comma parameter)*;

assignment_
: Identifier openParen_ parameters closeParen_ AssignOp statement_ #inlineFunctionAssignment
| expression_ AssignOp statement_ #reassignment
| declaration_ parameter (AssignOp statement_)? #declarativeAssignment
;

specialAssignment_: declaration_ openBrace_ assignment_ (end_ assignment_)* closeBrace_ #multiAssignment;

/* Matrix / Tuple --------------------------------------------------------------------------------------------------- */
// Expression
unwrappedTuple: expression_ (Comma? expression_)*;
unwrappedMatrix: unwrappedTuple (end_ unwrappedTuple)*;
parenWrappedMatrix: openParen_ unwrappedMatrix? closeParen_;
bracketWrappedMatrix: openBracket_ unwrappedMatrix? closeBracket_;
braceWrappedMatrix: openBrace_ unwrappedMatrix? closeBrace_;

// Statement
statementTuple: statement_ (Comma statement_)*;
statementMatrix: statementTuple (Semicolon statementTuple)*;
parenStatementMatrix: openParen_ statementMatrix? closeParen_;
bracketStatementMatrix: openBracket_ statementMatrix? closeBracket_;
braceStatementMatrix: openBrace_ statementMatrix? closeBrace_;
parenOptStatementMatrix: openParen_ statementMatrix? closeParen_ | statementMatrix;

lambda: Fn (openParen_ parameters? closeParen_) (Arrow expression_)? statement_;

/* Expressions ------------------------------------------------------------------------------------------------------ */
expression_
// Terms
: identifier_ #identifierExpression_
| IndexKeyword {isWithinIndexAccess()}? #indexKeywordExpression
| LParen assignment_ RParen #parenAssignmentExpression_
| expression_ Dot expression_ #dotAccessExpression
| expression_ parenWrappedMatrix #functionCallExpression
| expression_ DotDot expression_ (Colon expression_)? #rangeExpression
| expression_ bracketWrappedMatrix #indexExpression
| expression_ braceStatementMatrix #typeInstantiationExpression
| parenWrappedMatrix #tupleExpression_
| bracketWrappedMatrix #matrixExpression_
| lambda #lambdaExpression_
| Number #literalExpression
| String #literalExpression
| CustomLiteral #literalExpression

// Arithmetic
| op=(Not | Min | PlusMin) expression_ #unaryExpression
| expression_ op=(PlusPlus | MinMin | Question) #unaryExpression
| expression_ op=(Pow | PowPow) expression_ #binaryExpression
| expression_ op=(Mult | Div | Mod | BitOr | BitAnd) expression_ #binaryExpression
| expression_ op=(Plus | Min) expression_ #binaryExpression
| expression_ op=(OptionalOr | OptionalOrOr) expression_ #binaryExpression
| expression_ op=(Equal | NotEqual | LessThan | GreaterThan | LessThanEqual | GreaterThanEqual) expression_ #binaryExpression
| expression_ op=(And | Or | Is) expression_ #binaryExpression
| expression_ op=(StreamIn | StreamOut) expression_ #binaryExpression
;
