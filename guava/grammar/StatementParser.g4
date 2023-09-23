parser grammar StatementParser;

@parser::members {
}

options {
	tokenVocab = StatementLexer;
}

body: Nl* scentenceCollection;

scentenceCollection: scentenceln* scentence?;
scope: openBrace_ scentenceCollection closeBrace_;

// Util
end_: (Nl | Semicolon)+;
openBrace_: LBrace Nl*;
closeBrace_: Nl* RBrace;
openParen_: LParen Nl*;
closeParen_: Nl* RParen;
openBracket_: LBracket Nl*;
closeBracket_: Nl* RBracket;

scentenceln : scentence end_;

scentence
: scentence BodyKeyword parenStatementMatrix (BodyFollowUpKeyword statement_)? #compoundStatement
| statement_ #statementScentence_
;

statement_
: BodyKeyword parenOptStatementMatrix scope (end_* BodyFollowUpKeyword statement_)? #scopeEnsuredBody
| BodyKeyword parenStatementMatrix statement_ (end_* BodyFollowUpKeyword statement_)? #scopeOrStatmentBody
| specialAssignment_ #multiAssignmentStatement_
| assignment_ #assignmentStatement_
| expression_ #expressionStatement_
| Keyword expression_? #keywordStatement
| scope #scopeStatement
;

identifier_
: identifier_ LessThan identifier_ (Comma? identifier_)* GreaterThan #templatedIdentifier
| identifier_ openBrace_ expression_ (Comma? expression_)* closeBrace_ #runtimeTemplatedIdentifier
| identifier_ DoubleColon identifier_ #nestedIdentifier
| openParen_ (identifier_ (Comma? identifier_)*)? closeParen_ #tupleIdentifier
| Type identifier_ (Or identifier_)* #inlineAlisTypeIdentifier
| Identifier #rawIdentifier
| DefaultIdentifier #defaultIdentifier
;

qualifiers : Let Identifier?;

parameter: Identifier (Colon identifier_)?;
parameters: parameter (Comma? parameter)*;

assignment_
: Type Identifier AssignOp identifier_ (Or identifier_)* #alisTypeIdentifier
| expression_ AssignOp statement_ #reassignment
| Fn Identifier openParen_ parameters closeParen_ AssignOp statement_ #inlineFunctionAssignment
| qualifiers parameter AssignOp statement_ #declaritiveAssignment
;

specialAssignment_: qualifiers openBrace_ assignment_ (end_ assignment_)* closeBrace_ #multiAssignment;

unwrappedTuple: expression_ (Comma? expression_)*;
unwrappedMatrix: unwrappedTuple (end_ unwrappedTuple)*;
parenWrappedMatrix: openParen_ unwrappedMatrix? closeParen_;
bracketWrappedMatrix: openBracket_ unwrappedMatrix? closeBracket_;

statementTuple: statement_ (Comma? statement_)*;
statementMatrix: statementTuple (end_ statementTuple)*;
parenStatementMatrix: openParen_ statementMatrix? closeParen_;
bracketStatementMatrix: openBracket_ statementMatrix? closeBracket_;
parenOptStatementMatrix: openParen_ statementMatrix? closeParen_ | statementMatrix;

binaryOperator: (BinaryOp | BinaryOrUniaryOp | LessThan | GreaterThan);

lambda: Fn (openParen_ parameters? closeParen_)? (Arrow identifier_)? (statement_ | scope);

// TODO: add match expression

expression_

// Terms
: identifier_ #identifierExpression
| LParen expression_ RParen #parenExpression
| LParen assignment_ RParen #parenAssignmentExpression
| parenWrappedMatrix #tupleExpression
| bracketWrappedMatrix #matrixExpression
| lambda #lambdaExpression
| expression_ Dot expression_ #dotExpression
| expression_ bracketWrappedMatrix #indexExpression
| expression_ parenWrappedMatrix #functionCallExpression
| Number #numberExpression
| String #stringExpression
| CustomLiteral #customExpression


// Arithmetic
| op=(Not | Min) expression_ #unaryPrefixExpression
| expression_ op=(PlusPlus | MinMin | Question) #unaryPostfixExpression
| expression_ op=(Pow | PowPow) expression_ #binaryExpression
| expression_ op=(Mult | Div | Mod) expression_ #binaryExpression
| expression_ op=(Plus | Min) expression_ #binaryExpression
| expression_ op=(OptionalOr | OptionalOrOr) expression_ #binaryExpression
| expression_ op=(Equal | NotEqual | LessThan | GreaterThan | LessThanEqual | GreaterThanEqual) expression_ #binaryExpression
| expression_ op=(And | Or) expression_ #binaryExpression
| expression_ op=(StreamIn | StreamOut) expression_ #binaryExpression
;
