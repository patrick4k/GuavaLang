
// Generated from C:/Users/Patrick/Documents/Code/Guava/Guava/guava/GuavaLexer.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace GParser {


class  GuavaLexer : public antlr4::Lexer {
public:
  enum {
    Fn = 1, Decl = 2, If = 3, Unless = 4, Else = 5, Do = 6, While = 7, Until = 8, 
    For = 9, Loop = 10, Return = 11, Break = 12, Next = 13, Last = 14, Once = 15, 
    True = 16, False = 17, Null = 18, DefId = 19, Number = 20, Id = 21, 
    String = 22, StringLit = 23, Digit = 24, Word = 25, Letter = 26, UcLetter = 27, 
    LcLetter = 28, DefOr = 29, Sarrow = 30, Darrow = 31, LRarrow = 32, RLarrow = 33, 
    Dot2 = 34, Dot3 = 35, As = 36, PlusEq = 37, MinEq = 38, MultEq = 39, 
    DivEq = 40, ModEq = 41, PowEq = 42, Increm = 43, Decrem = 44, Lbrack = 45, 
    Rbrack = 46, Lbrace = 47, Rbrace = 48, Lpar = 49, Rpar = 50, Pow = 51, 
    Star = 52, StarStar = 53, Bslash = 54, Mod = 55, Plus = 56, Min = 57, 
    Eq = 58, BoolEq = 59, BoolDeepEq = 60, BoolNeq = 61, BoolDeepNeq = 62, 
    Gt = 63, GtEq = 64, Lt = 65, LtEq = 66, And = 67, Or = 68, Uscore = 69, 
    AndSign = 70, Doll = 71, DollLit = 72, Hash = 73, At = 74, ExPoint = 75, 
    Qmark = 76, Colon = 77, ColonColon = 78, Semi = 79, Fslash = 80, Bar = 81, 
    Dquote = 82, Squote = 83, Com = 84, Dot = 85, Squig = 86, Btick = 87, 
    Ignore = 88, WS = 89, RETURN = 90
  };

  explicit GuavaLexer(antlr4::CharStream *input);

  ~GuavaLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

}  // namespace GParser
