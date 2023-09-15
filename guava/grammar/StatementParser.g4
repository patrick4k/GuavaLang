parser grammar StatementParser;

@parser::members {
}

options {
	tokenVocab = StatementLexer;
}

body: Nl* statementln* statement?;
end: (Nl | Semicolon)+;
statementln : statement end;

statement
: expression
| assignment
;

typename
: Identifier
| Identifier DoubleColon Identifier
;

assignment
: expression AssignOp expression
| typename assignment
;

expression
: LParen expression RParen
| LParen assignment RParen
| expression (BinaryOp | BinaryOrUniaryOp) expression
| (UnaryPreOp | BinaryOrUniaryOp) expression
| expression LParen (expression (Comma expression)*)? RParen
| expression (Dot expression)+
| Identifier
| Number
| Unknown
;
