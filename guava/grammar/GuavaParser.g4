parser grammar GuavaParser;

@parser::header {
#include "../cpp/generated-include.h"
}

@parser::members {
}


options {
	tokenVocab = CommonLexer;
}

import StatementParser;

script: (fnDeclaration)* EOF;

fnDeclaration
: expression_? identifier_ (openParen_ parameters? closeParen_)? Nl? statement_ Nl*
;
