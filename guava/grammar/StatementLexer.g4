lexer grammar StatementLexer;

fragment LineComment: '/' Identifier? ':' .*?;
fragment BlockComment: '/*' .*? '*/';
fragment Space: [ \t]+;

Nl: LineComment? ([\r\n] | EOF);

SkipCommon
: (BlockComment
| Space) -> skip
;

IgnoredNl: '...' SkipCommon* Nl -> skip;

fragment MathOps
: '+'
| '/' | '//' // Double op for vector counter parts
| '^' | '^^'
| '*' | '**'
| '%' | '%%'
| '&' | '&&'
| '|' | '||'
;

LessThan: '<';
GreaterThan: '>';

fragment Operators
: MathOps
| '=='
| '!='
| '<='
| '>='
| 'and'
| 'or'
| '.'
;

AssignOp
: '='
| MathOps '='
;

BinaryOrUniaryOp
: '-'
;

BinaryOp
: Operators
;

UnaryPreOp
: '!'
;

UnaryPostOp
: '++'
| '--'
;

LParen: '(';
RParen: ')';
LBrace: '{';
RBrace: '}';
LBracket: '[';
RBracket: ']';
Comma: ',';
DoubleColon: '::';
Colon: ':';
Semicolon: ';';
String
: '"' .*? '"'
| '\'' .*? '\''
;
CustomLiteral: '`' .*? '`';

BodyKeyword
: 'for'
| 'while'
| 'if'
| 'unless'
| 'loop'
;

BodyFollowUpKeyword
: 'else'
;

Keyword
: 'return'
| 'break'
| 'next'
| 'last'
;

Fn: 'fn';

MatchKeyword: 'match';

fragment Letter : [a-zA-Z];
fragment Digit : [0-9];
fragment Underscore : '_';
fragment Int : Digit+;
fragment Float : Digit+ '.' Digit+;

Number
: (Int | Float) ('e' | 'E') ('+' | '-')? Int
| Int
| Float
;

Identifier : Letter (Letter | Digit | Underscore)*;
