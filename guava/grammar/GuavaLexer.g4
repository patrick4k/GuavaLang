lexer grammar GuavaLexer;

import StatementLexer;

fragment Ws: [ \t]+;
fragment Nl: [\r\n]+;
fragment Na: Ws | Nl;
fragment Nas: Na+;

fragment Unknown: ~(' '|'\t'|'\r'|'\n')+?;
fragment UnknownRHS: Nas? Unknown Nas;
fragment UnknownLHS: Nas Unknown Nas?;

fragment Scope: '{' Unknown? '}';

FnDelcaration: 'fn' UnknownLHS Scope;
