parser grammar StatementParser;

@parser::members {
}

options {
	tokenVocab = StatementLexer;
}

body: Nl* statmentCollection;

statmentCollection: statementln* statement?;
scope: openBrace statmentCollection closeBrace;

end: (Nl | Semicolon)+;
openBrace: LBrace Nl*;
closeBrace: Nl* RBrace;
openParen: LParen Nl*;
closeParen: Nl* RParen;
openBracket: LBracket Nl*;
closeBracket: Nl* RBracket;

statementln : statement end;

statement
: bodyStatement #bodyStatement_
| statement BodyKeyword parenStatementMatrix (BodyFollowUpKeyword statement)? #compoundStatement
| multiAssignment #multiAssignmentStatement_
| assignment #assignmentStatement_
| expression #expressionStatement_
| Keyword expression? #keywordStatement
;

stateOrScope: statement | scope;

bodyStatement
: BodyKeyword parenStatementMatrix statement (Nl* BodyFollowUpKeyword statement)? #scopeOrStatmentBody
| BodyKeyword parenOptStatementMatrix scope (Nl* BodyFollowUpKeyword stateOrScope)? #scopeEnsuredBody
;

identifier
: identifier LessThan identifier (Comma identifier)* GreaterThan #templatedIdentifier
| identifier openBrace expression (Colon expression)* closeBrace #runtimeTemplatedIdentifier
| identifier DoubleColon identifier #nestedIdentifier
| Identifier #rawIdentifier
;

qualifiers : Identifier+;

assignment
: expression AssignOp expression #reassignment
| qualifiers? Identifier (Colon identifier)? AssignOp expression #declaritiveAssignment
;

multiAssignment: qualifiers openBrace assignment (end assignment)* closeBrace;

unwrappedTuple
: expression (Comma? expression)*
;

unwrappedMatrix: unwrappedTuple (end unwrappedTuple)*;
parenWrappedMatrix: openParen unwrappedMatrix? closeParen;
bracketWrappedMatrix: openBracket unwrappedMatrix? closeBracket;

statementTuple: statement (Comma statement)*;
statementMatrix: statementTuple (end statementTuple)*;
parenStatementMatrix: openParen statementMatrix? closeParen;
bracketStatementMatrix: openBracket statementMatrix? closeBracket;
parenOptStatementMatrix: openParen statementMatrix? closeParen | statementMatrix;

binaryOperator: (BinaryOp | BinaryOrUniaryOp | LessThan | GreaterThan);

parameter: Identifier (Colon identifier)?;
parameters: (parameter (Comma parameter)*)?;
lambda
: Fn (openParen parameters closeParen)? (statement | scope)
;

// TODO: add match expression

expression
: expression (binaryOperator expression)+ #binaryExpression
| identifier #identifierExpression
| LParen expression RParen #parenExpression
| LParen assignment RParen #parenAssignmentExpression
| (UnaryPreOp | BinaryOrUniaryOp) expression #uniaryPrefixExpression
| expression UnaryPostOp #uniaryPostfixExpression
| expression parenWrappedMatrix #functionCallExpression
| expression bracketWrappedMatrix #indexExpression
| bracketWrappedMatrix #matrixExpression
| lambda #lambdaExpression
| Number #numberExpression
| String #stringExpression
| CustomLiteral #customExpression
;
