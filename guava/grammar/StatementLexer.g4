lexer grammar StatementLexer;

fragment Letter : [a-zA-Z];
fragment Digit : [0-9];
fragment Underscore : '_';
fragment Int : Digit+;
fragment Float : Digit+ '.' Digit+;

fragment LineComment: '/.' .*?;
BlockComment: LineComment './' -> skip;

Nl: LineComment? ([\r\n] | EOF);

Space: [ \t]+ -> skip;
IgnoredNl: '...' Nl -> skip;

Number
: (Int | Float) ('e' | 'E') ('+' | '-')? Int
| Int
| Float
;

Identifier : Letter (Letter | Digit | Underscore)*;

fragment MathOps
: '+'
| '/' | '//' // Vector counter parts
| '^' | '^^'
| '*' | '**'
| '%' | '%%'
| '&' | '&&'
| '|' | '||'
;

fragment Operators
: MathOps
| '=='
| '!='
| '<'
| '>'
| '<='
| '>='
| 'and'
| 'or'
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
| '++'
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

Dot: '.';

Unknown: '\'' .+? '\'';
