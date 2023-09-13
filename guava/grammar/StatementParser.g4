parser grammar StatementParser;

@parser::members {
}

options {
	tokenVocab = StatementLexer;
}

fn: Fn Word;
