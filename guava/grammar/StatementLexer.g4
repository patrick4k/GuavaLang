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

Dot: '.';

Pow: '^';
PowPow: '^^';

Mult: '*' | '**';
Div: '/' | '//';
Mod: '%' | '%%';

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

CustomLiteral
: '`' .*? '`'
| Number Underscore? Identifier
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
DefaultIdentifier: Underscore (Letter | Digit | Underscore)*;