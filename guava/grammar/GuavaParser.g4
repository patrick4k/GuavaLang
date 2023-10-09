parser grammar GuavaParser;

@parser::members {
}


options {
	tokenVocab = CommonLexer;
}

import StatementParser;

script: (fnDeclaration)* EOF;

fnDeclaration: Identifier (openParen_ parameters? closeParen_)?  Nl* (Colon expression_)? Nl* scope;
