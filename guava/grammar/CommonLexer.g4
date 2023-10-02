lexer grammar CommonLexer;

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

Dot: '.';

Pow: '^';
PowPow: '^^';

Mult: '*' | '**';
Div: '/' | '//';
Mod: '%' | '%%';
BitOr: '|' | '||';
BitAnd: '&' | '&&';

Plus: '+';
PlusPlus: '++';
Min: '-';
MinMin: '--';

OptionalOr: '\\';
OptionalOrOr: '\\\\';

LessThan: '<';
GreaterThan: '>';
Equal: '==';
NotEqual: '!=';
LessThanEqual: '<=';
GreaterThanEqual: '>=';
And: 'and';
Or: 'or';
Is: 'is';

StreamIn: '<<';
StreamOut: '>>';

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


BinaryOp
: Operators
;

Not: '!';
Question: '?';

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

BodyKeyword
: 'for'
| 'while'
| 'until'
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

Let: 'let';
Fn: 'fn';
Arrow: '->';

Type: 'type';

Match: 'match';

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

CustomLiteral
: '`' .*? '`'
| Number Underscore? Identifier
;

Identifier : Letter (Letter | Digit | Underscore)*;
DefaultIdentifier: Underscore (Letter | Digit | Underscore)*;