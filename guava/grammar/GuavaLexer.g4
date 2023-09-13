lexer grammar GuavaLexer;

fragment Ws: [ \t]+;
fragment Nl: [\r\n]+;
fragment Na: Ws | Nl;
fragment Nas: Na+;

fragment Unknown: ~(' '|'\t'|'\r'|'\n')+?;
fragment UnknownRHS: Nas? Unknown Nas;
fragment UnknownLHS: Nas Unknown Nas?;

Fn: 'fn' UnknownLHS '{'  '}';
