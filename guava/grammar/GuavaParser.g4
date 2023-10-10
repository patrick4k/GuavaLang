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

fnDeclaration: Identifier (openParen_ parameters? closeParen_)?  Nl* (Colon expression_)? Nl* scope;
