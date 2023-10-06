parser grammar GuavaParser;

@parser::members {
}


options {
	tokenVocab = CommonLexer;
}

import StatementParser;

script_: programDeclarations_* EOF;

programDeclarations_: fnDeclaration;

fnDeclaration: Identifier (openParen_ parameters? closeParen_)?  Nl* (Colon expression_)? Nl* scope;
