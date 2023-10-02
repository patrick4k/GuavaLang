parser grammar GuavaParser;

@parser::members {
}


options {
	tokenVocab = CommonLexer;
}

import StatementParser;

script: scentence;
