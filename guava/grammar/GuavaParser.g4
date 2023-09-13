parser grammar GuavaParser;

@parser::members {
}

options {
	tokenVocab = GuavaLexer;
}

script: Fn EOF;
