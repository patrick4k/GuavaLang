parser grammar GuavaParser;

@parser::members {
}

options {
	tokenVocab = GuavaLexer;
}

script: FnDelcaration EOF;
