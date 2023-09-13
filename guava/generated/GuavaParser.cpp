
// Generated from C:/Users/Patrick/Documents/Code/Guava/Guava/guava/GuavaParser.g4 by ANTLR 4.12.0


#include "GuavaParserListener.h"
#include "GuavaParserVisitor.h"

#include "GuavaParser.h"


using namespace antlrcpp;
using namespace GParser;

using namespace antlr4;

namespace {

struct GuavaParserStaticData final {
  GuavaParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GuavaParserStaticData(const GuavaParserStaticData&) = delete;
  GuavaParserStaticData(GuavaParserStaticData&&) = delete;
  GuavaParserStaticData& operator=(const GuavaParserStaticData&) = delete;
  GuavaParserStaticData& operator=(GuavaParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag guavaparserParserOnceFlag;
GuavaParserStaticData *guavaparserParserStaticData = nullptr;

void guavaparserParserInitialize() {
  assert(guavaparserParserStaticData == nullptr);
  auto staticData = std::make_unique<GuavaParserStaticData>(
    std::vector<std::string>{
      "script_", "declaration_", "action_", "scope", "statement_", "keywordStatement_", 
      "body_", "controlFlow_", "loop_", "loopOnScope_", "loopOnBody_", "doWhileLoop", 
      "compoundStatement", "compoundAction_", "ifStatement_", "ifScope", 
      "ifBody", "conditionalKeywords_", "loopKeywords_", "conditionalLoopKeywords_", 
      "fnDeclaration", "lambda", "parameters_", "args", "argument_", "matchRegex", 
      "matchOptions_", "value_", "expression_", "identifyer_", "identifyerChain_", 
      "fnCall", "literal_", "pair_", "keywordLiteral_", "assign_", "varDeclare_", 
      "prefix_", "highPrioritySuffix_", "op1_", "op2_", "op3_", "op4_", 
      "op5_", "op6_", "lowPrioritySuffix_"
    },
    std::vector<std::string>{
      "", "'fn'", "'let'", "'if'", "'unless'", "'else'", "'do'", "'while'", 
      "'until'", "'for'", "'loop'", "'return'", "'break'", "'next'", "'last'", 
      "'once'", "'true'", "'false'", "'null'", "", "", "", "", "", "", "", 
      "", "", "", "'\\\\'", "'->'", "'=>'", "'>>'", "'<<'", "'..'", "'...'", 
      "'as'", "'+='", "'-='", "'*='", "'/='", "'%='", "'^='", "'++'", "'--'", 
      "'['", "']'", "'{'", "'}'", "'('", "')'", "'^'", "'*'", "'**'", "'/'", 
      "'%'", "'+'", "'-'", "'='", "'=='", "'==='", "'!='", "'!=='", "'>'", 
      "'>='", "'<'", "'<='", "'&&'", "'||'", "'_'", "'&'", "'$'", "'\\$'", 
      "'#'", "'@'", "'!'", "'\\u003F'", "':'", "'::'", "';'", "'\\'", "'|'", 
      "'\"'", "'''", "','", "'.'", "'~'", "'`'"
    },
    std::vector<std::string>{
      "", "Fn", "Decl", "If", "Unless", "Else", "Do", "While", "Until", 
      "For", "Loop", "Return", "Break", "Next", "Last", "Once", "True", 
      "False", "Null", "DefId", "Number", "Id", "String", "StringLit", "Digit", 
      "Word", "Letter", "UcLetter", "LcLetter", "DefOr", "Sarrow", "Darrow", 
      "LRarrow", "RLarrow", "Dot2", "Dot3", "As", "PlusEq", "MinEq", "MultEq", 
      "DivEq", "ModEq", "PowEq", "Increm", "Decrem", "Lbrack", "Rbrack", 
      "Lbrace", "Rbrace", "Lpar", "Rpar", "Pow", "Star", "StarStar", "Bslash", 
      "Mod", "Plus", "Min", "Eq", "BoolEq", "BoolDeepEq", "BoolNeq", "BoolDeepNeq", 
      "Gt", "GtEq", "Lt", "LtEq", "And", "Or", "Uscore", "AndSign", "Doll", 
      "DollLit", "Hash", "At", "ExPoint", "Qmark", "Colon", "ColonColon", 
      "Semi", "Fslash", "Bar", "Dquote", "Squote", "Com", "Dot", "Squig", 
      "Btick", "Ignore", "WS", "RETURN"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,90,644,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,1,0,4,0,94,8,0,11,0,12,0,95,1,0,1,0,
  	1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,3,2,108,8,2,1,3,1,3,5,3,112,8,3,10,3,
  	12,3,115,9,3,1,3,1,3,1,4,1,4,1,4,1,4,3,4,123,8,4,1,5,1,5,3,5,127,8,5,
  	1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,136,8,5,1,5,1,5,1,5,1,5,1,5,3,5,143,8,
  	5,1,6,1,6,1,6,1,6,3,6,149,8,6,1,7,1,7,1,7,1,7,1,7,3,7,156,8,7,1,8,1,8,
  	1,8,3,8,161,8,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,3,9,171,8,9,1,10,1,10,
  	1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,3,10,185,8,10,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,200,
  	8,12,5,12,202,8,12,10,12,12,12,205,9,12,1,13,1,13,1,13,1,13,3,13,211,
  	8,13,1,13,1,13,1,13,1,13,1,13,3,13,218,8,13,5,13,220,8,13,10,13,12,13,
  	223,9,13,1,14,1,14,3,14,227,8,14,1,15,1,15,1,15,1,15,1,15,1,15,3,15,235,
  	8,15,3,15,237,8,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,3,16,247,8,
  	16,3,16,249,8,16,1,17,1,17,3,17,253,8,17,1,18,1,18,1,18,3,18,258,8,18,
  	1,19,1,19,3,19,262,8,19,1,20,1,20,1,20,1,20,3,20,268,8,20,1,20,1,20,1,
  	20,1,21,1,21,3,21,275,8,21,1,21,3,21,278,8,21,1,21,1,21,1,21,1,21,1,21,
  	3,21,285,8,21,1,21,1,21,3,21,289,8,21,1,22,1,22,5,22,293,8,22,10,22,12,
  	22,296,9,22,1,22,1,22,1,22,5,22,301,8,22,10,22,12,22,304,9,22,1,22,1,
  	22,3,22,308,8,22,1,23,1,23,1,23,5,23,313,8,23,10,23,12,23,316,9,23,1,
  	24,1,24,1,24,1,24,1,24,1,24,1,24,3,24,325,8,24,1,25,1,25,1,25,5,25,330,
  	8,25,10,25,12,25,333,9,25,1,25,3,25,336,8,25,1,25,1,25,1,25,1,26,1,26,
  	1,27,1,27,3,27,345,8,27,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,
  	1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,3,28,366,8,28,1,28,
  	1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,
  	1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,5,28,
  	396,8,28,10,28,12,28,399,9,28,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,
  	1,29,1,29,1,29,3,29,412,8,29,1,29,1,29,1,29,1,29,1,29,3,29,419,8,29,1,
  	29,1,29,5,29,423,8,29,10,29,12,29,426,9,29,1,30,1,30,1,30,1,30,1,30,1,
  	30,1,30,1,30,1,30,1,30,3,30,438,8,30,1,31,1,31,1,31,1,31,1,31,1,31,3,
  	31,446,8,31,1,31,1,31,3,31,450,8,31,1,32,1,32,1,32,1,32,1,32,1,32,1,32,
  	5,32,459,8,32,10,32,12,32,462,9,32,1,32,3,32,465,8,32,1,32,1,32,1,32,
  	1,32,1,32,1,32,5,32,473,8,32,10,32,12,32,476,9,32,1,32,3,32,479,8,32,
  	3,32,481,8,32,1,32,1,32,1,32,1,32,1,32,5,32,488,8,32,10,32,12,32,491,
  	9,32,1,32,3,32,494,8,32,1,32,1,32,1,32,3,32,499,8,32,1,33,1,33,3,33,503,
  	8,33,1,33,1,33,1,33,1,33,3,33,509,8,33,1,33,1,33,3,33,513,8,33,1,34,1,
  	34,1,34,3,34,518,8,34,1,35,1,35,1,35,1,35,5,35,524,8,35,10,35,12,35,527,
  	9,35,1,35,1,35,1,35,4,35,532,8,35,11,35,12,35,533,1,35,1,35,1,35,1,35,
  	1,35,4,35,541,8,35,11,35,12,35,542,1,35,1,35,1,35,1,35,1,35,1,35,1,35,
  	1,35,1,35,1,35,1,35,1,35,1,35,3,35,558,8,35,1,35,1,35,1,35,3,35,563,8,
  	35,1,35,1,35,1,35,3,35,568,8,35,1,35,1,35,1,35,3,35,573,8,35,1,35,1,35,
  	1,35,3,35,578,8,35,1,35,1,35,1,35,3,35,583,8,35,1,35,1,35,1,35,3,35,588,
  	8,35,1,35,1,35,3,35,592,8,35,1,35,3,35,595,8,35,1,36,1,36,1,36,1,36,1,
  	36,1,36,1,36,3,36,604,8,36,1,37,1,37,3,37,608,8,37,1,38,1,38,1,39,1,39,
  	1,40,1,40,1,40,1,40,1,40,1,40,3,40,620,8,40,1,41,1,41,3,41,624,8,41,1,
  	42,1,42,1,43,1,43,1,43,1,43,1,43,1,43,1,43,1,43,3,43,636,8,43,1,44,1,
  	44,3,44,640,8,44,1,45,1,45,1,45,0,3,26,56,58,46,0,2,4,6,8,10,12,14,16,
  	18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,
  	64,66,68,70,72,74,76,78,80,82,84,86,88,90,0,1,1,0,22,23,733,0,93,1,0,
  	0,0,2,99,1,0,0,0,4,107,1,0,0,0,6,109,1,0,0,0,8,122,1,0,0,0,10,142,1,0,
  	0,0,12,148,1,0,0,0,14,155,1,0,0,0,16,160,1,0,0,0,18,170,1,0,0,0,20,184,
  	1,0,0,0,22,186,1,0,0,0,24,192,1,0,0,0,26,210,1,0,0,0,28,226,1,0,0,0,30,
  	228,1,0,0,0,32,238,1,0,0,0,34,252,1,0,0,0,36,257,1,0,0,0,38,261,1,0,0,
  	0,40,263,1,0,0,0,42,288,1,0,0,0,44,307,1,0,0,0,46,309,1,0,0,0,48,324,
  	1,0,0,0,50,326,1,0,0,0,52,340,1,0,0,0,54,344,1,0,0,0,56,365,1,0,0,0,58,
  	411,1,0,0,0,60,437,1,0,0,0,62,449,1,0,0,0,64,498,1,0,0,0,66,512,1,0,0,
  	0,68,517,1,0,0,0,70,594,1,0,0,0,72,603,1,0,0,0,74,607,1,0,0,0,76,609,
  	1,0,0,0,78,611,1,0,0,0,80,619,1,0,0,0,82,623,1,0,0,0,84,625,1,0,0,0,86,
  	635,1,0,0,0,88,639,1,0,0,0,90,641,1,0,0,0,92,94,3,4,2,0,93,92,1,0,0,0,
  	94,95,1,0,0,0,95,93,1,0,0,0,95,96,1,0,0,0,96,97,1,0,0,0,97,98,5,0,0,1,
  	98,1,1,0,0,0,99,100,3,40,20,0,100,3,1,0,0,0,101,102,3,8,4,0,102,103,5,
  	79,0,0,103,108,1,0,0,0,104,108,3,6,3,0,105,108,3,14,7,0,106,108,3,2,1,
  	0,107,101,1,0,0,0,107,104,1,0,0,0,107,105,1,0,0,0,107,106,1,0,0,0,108,
  	5,1,0,0,0,109,113,5,47,0,0,110,112,3,4,2,0,111,110,1,0,0,0,112,115,1,
  	0,0,0,113,111,1,0,0,0,113,114,1,0,0,0,114,116,1,0,0,0,115,113,1,0,0,0,
  	116,117,5,48,0,0,117,7,1,0,0,0,118,123,3,10,5,0,119,123,3,70,35,0,120,
  	123,3,56,28,0,121,123,3,6,3,0,122,118,1,0,0,0,122,119,1,0,0,0,122,120,
  	1,0,0,0,122,121,1,0,0,0,123,9,1,0,0,0,124,126,5,11,0,0,125,127,3,54,27,
  	0,126,125,1,0,0,0,126,127,1,0,0,0,127,128,1,0,0,0,128,143,4,5,0,0,129,
  	130,5,15,0,0,130,131,3,8,4,0,131,132,4,5,1,0,132,143,1,0,0,0,133,135,
  	5,13,0,0,134,136,3,56,28,0,135,134,1,0,0,0,135,136,1,0,0,0,136,137,1,
  	0,0,0,137,143,4,5,2,0,138,139,5,14,0,0,139,143,4,5,3,0,140,141,5,12,0,
  	0,141,143,4,5,4,0,142,124,1,0,0,0,142,129,1,0,0,0,142,133,1,0,0,0,142,
  	138,1,0,0,0,142,140,1,0,0,0,143,11,1,0,0,0,144,149,3,6,3,0,145,146,3,
  	8,4,0,146,147,5,79,0,0,147,149,1,0,0,0,148,144,1,0,0,0,148,145,1,0,0,
  	0,149,13,1,0,0,0,150,151,3,24,12,0,151,152,5,79,0,0,152,156,1,0,0,0,153,
  	156,3,16,8,0,154,156,3,28,14,0,155,150,1,0,0,0,155,153,1,0,0,0,155,154,
  	1,0,0,0,156,15,1,0,0,0,157,161,3,18,9,0,158,161,3,20,10,0,159,161,3,22,
  	11,0,160,157,1,0,0,0,160,158,1,0,0,0,160,159,1,0,0,0,161,17,1,0,0,0,162,
  	163,3,36,18,0,163,164,3,56,28,0,164,165,3,6,3,0,165,171,1,0,0,0,166,167,
  	3,36,18,0,167,168,3,46,23,0,168,169,3,6,3,0,169,171,1,0,0,0,170,162,1,
  	0,0,0,170,166,1,0,0,0,171,19,1,0,0,0,172,173,3,36,18,0,173,174,5,49,0,
  	0,174,175,3,56,28,0,175,176,5,50,0,0,176,177,3,12,6,0,177,185,1,0,0,0,
  	178,179,3,36,18,0,179,180,5,49,0,0,180,181,3,46,23,0,181,182,5,50,0,0,
  	182,183,3,12,6,0,183,185,1,0,0,0,184,172,1,0,0,0,184,178,1,0,0,0,185,
  	21,1,0,0,0,186,187,5,6,0,0,187,188,3,6,3,0,188,189,3,38,19,0,189,190,
  	3,56,28,0,190,191,5,79,0,0,191,23,1,0,0,0,192,203,3,26,13,0,193,199,3,
  	36,18,0,194,200,3,56,28,0,195,196,5,49,0,0,196,197,3,46,23,0,197,198,
  	5,50,0,0,198,200,1,0,0,0,199,194,1,0,0,0,199,195,1,0,0,0,200,202,1,0,
  	0,0,201,193,1,0,0,0,202,205,1,0,0,0,203,201,1,0,0,0,203,204,1,0,0,0,204,
  	25,1,0,0,0,205,203,1,0,0,0,206,207,6,13,-1,0,207,211,3,30,15,0,208,211,
  	3,18,9,0,209,211,3,8,4,0,210,206,1,0,0,0,210,208,1,0,0,0,210,209,1,0,
  	0,0,211,221,1,0,0,0,212,213,10,4,0,0,213,214,3,34,17,0,214,217,3,56,28,
  	0,215,216,5,5,0,0,216,218,3,26,13,0,217,215,1,0,0,0,217,218,1,0,0,0,218,
  	220,1,0,0,0,219,212,1,0,0,0,220,223,1,0,0,0,221,219,1,0,0,0,221,222,1,
  	0,0,0,222,27,1,0,0,0,223,221,1,0,0,0,224,227,3,30,15,0,225,227,3,32,16,
  	0,226,224,1,0,0,0,226,225,1,0,0,0,227,29,1,0,0,0,228,229,3,34,17,0,229,
  	230,3,56,28,0,230,236,3,6,3,0,231,234,5,5,0,0,232,235,3,12,6,0,233,235,
  	3,28,14,0,234,232,1,0,0,0,234,233,1,0,0,0,235,237,1,0,0,0,236,231,1,0,
  	0,0,236,237,1,0,0,0,237,31,1,0,0,0,238,239,3,34,17,0,239,240,5,49,0,0,
  	240,241,3,56,28,0,241,242,5,50,0,0,242,248,3,12,6,0,243,246,5,5,0,0,244,
  	247,3,12,6,0,245,247,3,28,14,0,246,244,1,0,0,0,246,245,1,0,0,0,247,249,
  	1,0,0,0,248,243,1,0,0,0,248,249,1,0,0,0,249,33,1,0,0,0,250,253,5,3,0,
  	0,251,253,5,4,0,0,252,250,1,0,0,0,252,251,1,0,0,0,253,35,1,0,0,0,254,
  	258,5,9,0,0,255,258,5,10,0,0,256,258,3,38,19,0,257,254,1,0,0,0,257,255,
  	1,0,0,0,257,256,1,0,0,0,258,37,1,0,0,0,259,262,5,7,0,0,260,262,5,8,0,
  	0,261,259,1,0,0,0,261,260,1,0,0,0,262,39,1,0,0,0,263,264,5,1,0,0,264,
  	265,5,21,0,0,265,267,5,49,0,0,266,268,3,44,22,0,267,266,1,0,0,0,267,268,
  	1,0,0,0,268,269,1,0,0,0,269,270,5,50,0,0,270,271,3,6,3,0,271,41,1,0,0,
  	0,272,274,5,49,0,0,273,275,3,44,22,0,274,273,1,0,0,0,274,275,1,0,0,0,
  	275,276,1,0,0,0,276,278,5,50,0,0,277,272,1,0,0,0,277,278,1,0,0,0,278,
  	279,1,0,0,0,279,280,5,30,0,0,280,289,3,8,4,0,281,282,5,1,0,0,282,284,
  	5,49,0,0,283,285,3,44,22,0,284,283,1,0,0,0,284,285,1,0,0,0,285,286,1,
  	0,0,0,286,287,5,50,0,0,287,289,3,8,4,0,288,277,1,0,0,0,288,281,1,0,0,
  	0,289,43,1,0,0,0,290,291,5,21,0,0,291,293,5,84,0,0,292,290,1,0,0,0,293,
  	296,1,0,0,0,294,292,1,0,0,0,294,295,1,0,0,0,295,297,1,0,0,0,296,294,1,
  	0,0,0,297,308,5,21,0,0,298,299,5,21,0,0,299,301,5,84,0,0,300,298,1,0,
  	0,0,301,304,1,0,0,0,302,300,1,0,0,0,302,303,1,0,0,0,303,305,1,0,0,0,304,
  	302,1,0,0,0,305,306,5,21,0,0,306,308,5,35,0,0,307,294,1,0,0,0,307,302,
  	1,0,0,0,308,45,1,0,0,0,309,314,3,48,24,0,310,311,5,84,0,0,311,313,3,48,
  	24,0,312,310,1,0,0,0,313,316,1,0,0,0,314,312,1,0,0,0,314,315,1,0,0,0,
  	315,47,1,0,0,0,316,314,1,0,0,0,317,325,3,54,27,0,318,319,5,35,0,0,319,
  	325,3,54,27,0,320,321,3,56,28,0,321,322,5,34,0,0,322,323,3,56,28,0,323,
  	325,1,0,0,0,324,317,1,0,0,0,324,318,1,0,0,0,324,320,1,0,0,0,325,49,1,
  	0,0,0,326,335,5,86,0,0,327,331,5,47,0,0,328,330,3,52,26,0,329,328,1,0,
  	0,0,330,333,1,0,0,0,331,329,1,0,0,0,331,332,1,0,0,0,332,334,1,0,0,0,333,
  	331,1,0,0,0,334,336,5,48,0,0,335,327,1,0,0,0,335,336,1,0,0,0,336,337,
  	1,0,0,0,337,338,5,54,0,0,338,339,5,54,0,0,339,51,1,0,0,0,340,341,5,25,
  	0,0,341,53,1,0,0,0,342,345,3,56,28,0,343,345,3,42,21,0,344,342,1,0,0,
  	0,344,343,1,0,0,0,345,55,1,0,0,0,346,347,6,28,-1,0,347,366,3,64,32,0,
  	348,349,5,49,0,0,349,350,3,56,28,0,350,351,5,50,0,0,351,366,1,0,0,0,352,
  	353,5,49,0,0,353,354,3,70,35,0,354,355,5,50,0,0,355,366,1,0,0,0,356,357,
  	3,74,37,0,357,358,3,56,28,14,358,366,1,0,0,0,359,366,3,76,38,0,360,366,
  	3,90,45,0,361,362,5,80,0,0,362,366,3,58,29,0,363,366,3,58,29,0,364,366,
  	3,62,31,0,365,346,1,0,0,0,365,348,1,0,0,0,365,352,1,0,0,0,365,356,1,0,
  	0,0,365,359,1,0,0,0,365,360,1,0,0,0,365,361,1,0,0,0,365,363,1,0,0,0,365,
  	364,1,0,0,0,366,397,1,0,0,0,367,368,10,11,0,0,368,369,3,78,39,0,369,370,
  	3,56,28,12,370,396,1,0,0,0,371,372,10,10,0,0,372,373,3,80,40,0,373,374,
  	3,56,28,11,374,396,1,0,0,0,375,376,10,9,0,0,376,377,3,82,41,0,377,378,
  	3,56,28,10,378,396,1,0,0,0,379,380,10,8,0,0,380,381,3,84,42,0,381,382,
  	3,56,28,9,382,396,1,0,0,0,383,384,10,7,0,0,384,385,3,86,43,0,385,386,
  	3,56,28,8,386,396,1,0,0,0,387,388,10,6,0,0,388,389,3,88,44,0,389,390,
  	3,56,28,7,390,396,1,0,0,0,391,392,10,12,0,0,392,396,3,76,38,0,393,394,
  	10,4,0,0,394,396,3,90,45,0,395,367,1,0,0,0,395,371,1,0,0,0,395,375,1,
  	0,0,0,395,379,1,0,0,0,395,383,1,0,0,0,395,387,1,0,0,0,395,391,1,0,0,0,
  	395,393,1,0,0,0,396,399,1,0,0,0,397,395,1,0,0,0,397,398,1,0,0,0,398,57,
  	1,0,0,0,399,397,1,0,0,0,400,401,6,29,-1,0,401,402,3,64,32,0,402,403,3,
  	60,30,0,403,412,1,0,0,0,404,412,5,21,0,0,405,406,5,21,0,0,406,407,5,78,
  	0,0,407,412,3,58,29,3,408,412,5,19,0,0,409,410,5,70,0,0,410,412,3,58,
  	29,1,411,400,1,0,0,0,411,404,1,0,0,0,411,405,1,0,0,0,411,408,1,0,0,0,
  	411,409,1,0,0,0,412,424,1,0,0,0,413,414,10,7,0,0,414,423,3,60,30,0,415,
  	416,10,5,0,0,416,418,5,49,0,0,417,419,3,46,23,0,418,417,1,0,0,0,418,419,
  	1,0,0,0,419,420,1,0,0,0,420,421,5,50,0,0,421,423,3,60,30,0,422,413,1,
  	0,0,0,422,415,1,0,0,0,423,426,1,0,0,0,424,422,1,0,0,0,424,425,1,0,0,0,
  	425,59,1,0,0,0,426,424,1,0,0,0,427,428,5,85,0,0,428,438,5,21,0,0,429,
  	430,5,45,0,0,430,431,3,56,28,0,431,432,5,46,0,0,432,438,1,0,0,0,433,434,
  	5,45,0,0,434,435,3,46,23,0,435,436,5,46,0,0,436,438,1,0,0,0,437,427,1,
  	0,0,0,437,429,1,0,0,0,437,433,1,0,0,0,438,61,1,0,0,0,439,440,3,58,29,
  	0,440,441,3,46,23,0,441,450,1,0,0,0,442,443,3,58,29,0,443,445,5,49,0,
  	0,444,446,3,46,23,0,445,444,1,0,0,0,445,446,1,0,0,0,446,447,1,0,0,0,447,
  	448,5,50,0,0,448,450,1,0,0,0,449,439,1,0,0,0,449,442,1,0,0,0,450,63,1,
  	0,0,0,451,499,3,68,34,0,452,499,5,22,0,0,453,499,5,23,0,0,454,455,5,45,
  	0,0,455,460,3,46,23,0,456,457,5,79,0,0,457,459,3,46,23,0,458,456,1,0,
  	0,0,459,462,1,0,0,0,460,458,1,0,0,0,460,461,1,0,0,0,461,464,1,0,0,0,462,
  	460,1,0,0,0,463,465,5,79,0,0,464,463,1,0,0,0,464,465,1,0,0,0,465,466,
  	1,0,0,0,466,467,5,46,0,0,467,499,1,0,0,0,468,480,5,47,0,0,469,474,3,66,
  	33,0,470,471,5,84,0,0,471,473,3,66,33,0,472,470,1,0,0,0,473,476,1,0,0,
  	0,474,472,1,0,0,0,474,475,1,0,0,0,475,478,1,0,0,0,476,474,1,0,0,0,477,
  	479,5,84,0,0,478,477,1,0,0,0,478,479,1,0,0,0,479,481,1,0,0,0,480,469,
  	1,0,0,0,480,481,1,0,0,0,481,482,1,0,0,0,482,499,5,48,0,0,483,484,5,47,
  	0,0,484,489,3,46,23,0,485,486,5,79,0,0,486,488,3,46,23,0,487,485,1,0,
  	0,0,488,491,1,0,0,0,489,487,1,0,0,0,489,490,1,0,0,0,490,493,1,0,0,0,491,
  	489,1,0,0,0,492,494,5,79,0,0,493,492,1,0,0,0,493,494,1,0,0,0,494,495,
  	1,0,0,0,495,496,5,48,0,0,496,499,1,0,0,0,497,499,5,20,0,0,498,451,1,0,
  	0,0,498,452,1,0,0,0,498,453,1,0,0,0,498,454,1,0,0,0,498,468,1,0,0,0,498,
  	483,1,0,0,0,498,497,1,0,0,0,499,65,1,0,0,0,500,503,5,21,0,0,501,503,7,
  	0,0,0,502,500,1,0,0,0,502,501,1,0,0,0,503,504,1,0,0,0,504,505,5,77,0,
  	0,505,513,3,54,27,0,506,509,5,21,0,0,507,509,7,0,0,0,508,506,1,0,0,0,
  	508,507,1,0,0,0,509,510,1,0,0,0,510,511,5,77,0,0,511,513,3,46,23,0,512,
  	502,1,0,0,0,512,508,1,0,0,0,513,67,1,0,0,0,514,518,5,16,0,0,515,518,5,
  	17,0,0,516,518,5,18,0,0,517,514,1,0,0,0,517,515,1,0,0,0,517,516,1,0,0,
  	0,518,69,1,0,0,0,519,520,5,2,0,0,520,525,3,72,36,0,521,522,5,84,0,0,522,
  	524,3,72,36,0,523,521,1,0,0,0,524,527,1,0,0,0,525,523,1,0,0,0,525,526,
  	1,0,0,0,526,595,1,0,0,0,527,525,1,0,0,0,528,529,3,58,29,0,529,530,5,58,
  	0,0,530,532,1,0,0,0,531,528,1,0,0,0,532,533,1,0,0,0,533,531,1,0,0,0,533,
  	534,1,0,0,0,534,535,1,0,0,0,535,536,3,54,27,0,536,595,1,0,0,0,537,538,
  	3,58,29,0,538,539,5,58,0,0,539,541,1,0,0,0,540,537,1,0,0,0,541,542,1,
  	0,0,0,542,540,1,0,0,0,542,543,1,0,0,0,543,544,1,0,0,0,544,545,3,46,23,
  	0,545,595,1,0,0,0,546,547,3,58,29,0,547,548,5,33,0,0,548,549,3,54,27,
  	0,549,595,1,0,0,0,550,551,3,58,29,0,551,552,5,33,0,0,552,553,3,46,23,
  	0,553,595,1,0,0,0,554,555,5,58,0,0,555,595,3,54,27,0,556,558,3,58,29,
  	0,557,556,1,0,0,0,557,558,1,0,0,0,558,559,1,0,0,0,559,560,5,42,0,0,560,
  	595,3,56,28,0,561,563,3,58,29,0,562,561,1,0,0,0,562,563,1,0,0,0,563,564,
  	1,0,0,0,564,565,5,39,0,0,565,595,3,56,28,0,566,568,3,58,29,0,567,566,
  	1,0,0,0,567,568,1,0,0,0,568,569,1,0,0,0,569,570,5,40,0,0,570,595,3,56,
  	28,0,571,573,3,58,29,0,572,571,1,0,0,0,572,573,1,0,0,0,573,574,1,0,0,
  	0,574,575,5,41,0,0,575,595,3,56,28,0,576,578,3,58,29,0,577,576,1,0,0,
  	0,577,578,1,0,0,0,578,579,1,0,0,0,579,580,5,37,0,0,580,595,3,56,28,0,
  	581,583,3,58,29,0,582,581,1,0,0,0,582,583,1,0,0,0,583,584,1,0,0,0,584,
  	585,5,38,0,0,585,595,3,56,28,0,586,588,3,58,29,0,587,586,1,0,0,0,587,
  	588,1,0,0,0,588,589,1,0,0,0,589,595,5,43,0,0,590,592,3,58,29,0,591,590,
  	1,0,0,0,591,592,1,0,0,0,592,593,1,0,0,0,593,595,5,44,0,0,594,519,1,0,
  	0,0,594,531,1,0,0,0,594,540,1,0,0,0,594,546,1,0,0,0,594,550,1,0,0,0,594,
  	554,1,0,0,0,594,557,1,0,0,0,594,562,1,0,0,0,594,567,1,0,0,0,594,572,1,
  	0,0,0,594,577,1,0,0,0,594,582,1,0,0,0,594,587,1,0,0,0,594,591,1,0,0,0,
  	595,71,1,0,0,0,596,604,5,21,0,0,597,598,5,21,0,0,598,599,5,58,0,0,599,
  	604,3,54,27,0,600,601,5,21,0,0,601,602,5,58,0,0,602,604,3,46,23,0,603,
  	596,1,0,0,0,603,597,1,0,0,0,603,600,1,0,0,0,604,73,1,0,0,0,605,608,5,
  	75,0,0,606,608,5,57,0,0,607,605,1,0,0,0,607,606,1,0,0,0,608,75,1,0,0,
  	0,609,610,5,75,0,0,610,77,1,0,0,0,611,612,5,51,0,0,612,79,1,0,0,0,613,
  	620,5,52,0,0,614,620,5,53,0,0,615,620,5,54,0,0,616,620,5,55,0,0,617,620,
  	5,81,0,0,618,620,5,70,0,0,619,613,1,0,0,0,619,614,1,0,0,0,619,615,1,0,
  	0,0,619,616,1,0,0,0,619,617,1,0,0,0,619,618,1,0,0,0,620,81,1,0,0,0,621,
  	624,5,56,0,0,622,624,5,57,0,0,623,621,1,0,0,0,623,622,1,0,0,0,624,83,
  	1,0,0,0,625,626,5,29,0,0,626,85,1,0,0,0,627,636,5,59,0,0,628,636,5,60,
  	0,0,629,636,5,61,0,0,630,636,5,62,0,0,631,636,5,63,0,0,632,636,5,64,0,
  	0,633,636,5,65,0,0,634,636,5,66,0,0,635,627,1,0,0,0,635,628,1,0,0,0,635,
  	629,1,0,0,0,635,630,1,0,0,0,635,631,1,0,0,0,635,632,1,0,0,0,635,633,1,
  	0,0,0,635,634,1,0,0,0,636,87,1,0,0,0,637,640,5,68,0,0,638,640,5,67,0,
  	0,639,637,1,0,0,0,639,638,1,0,0,0,640,89,1,0,0,0,641,642,3,50,25,0,642,
  	91,1,0,0,0,78,95,107,113,122,126,135,142,148,155,160,170,184,199,203,
  	210,217,221,226,234,236,246,248,252,257,261,267,274,277,284,288,294,302,
  	307,314,324,331,335,344,365,395,397,411,418,422,424,437,445,449,460,464,
  	474,478,480,489,493,498,502,508,512,517,525,533,542,557,562,567,572,577,
  	582,587,591,594,603,607,619,623,635,639
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  guavaparserParserStaticData = staticData.release();
}

}

GuavaParser::GuavaParser(TokenStream *input) : GuavaParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

GuavaParser::GuavaParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  GuavaParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *guavaparserParserStaticData->atn, guavaparserParserStaticData->decisionToDFA, guavaparserParserStaticData->sharedContextCache, options);
}

GuavaParser::~GuavaParser() {
  delete _interpreter;
}

const atn::ATN& GuavaParser::getATN() const {
  return *guavaparserParserStaticData->atn;
}

std::string GuavaParser::getGrammarFileName() const {
  return "GuavaParser.g4";
}

const std::vector<std::string>& GuavaParser::getRuleNames() const {
  return guavaparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& GuavaParser::getVocabulary() const {
  return guavaparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView GuavaParser::getSerializedATN() const {
  return guavaparserParserStaticData->serializedATN;
}


//----------------- Script_Context ------------------------------------------------------------------

GuavaParser::Script_Context::Script_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GuavaParser::Script_Context::EOF() {
  return getToken(GuavaParser::EOF, 0);
}

std::vector<GuavaParser::Action_Context *> GuavaParser::Script_Context::action_() {
  return getRuleContexts<GuavaParser::Action_Context>();
}

GuavaParser::Action_Context* GuavaParser::Script_Context::action_(size_t i) {
  return getRuleContext<GuavaParser::Action_Context>(i);
}


size_t GuavaParser::Script_Context::getRuleIndex() const {
  return GuavaParser::RuleScript_;
}

void GuavaParser::Script_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScript_(this);
}

void GuavaParser::Script_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScript_(this);
}


std::any GuavaParser::Script_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitScript_(this);
  else
    return visitor->visitChildren(this);
}

GuavaParser::Script_Context* GuavaParser::script_() {
  Script_Context *_localctx = _tracker.createInstance<Script_Context>(_ctx, getState());
  enterRule(_localctx, 0, GuavaParser::RuleScript_);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(93); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(92);
      action_();
      setState(95); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 433119482991345630) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 66593) != 0));
    setState(97);
    match(GuavaParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Declaration_Context ------------------------------------------------------------------

GuavaParser::Declaration_Context::Declaration_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GuavaParser::FnDeclarationContext* GuavaParser::Declaration_Context::fnDeclaration() {
  return getRuleContext<GuavaParser::FnDeclarationContext>(0);
}


size_t GuavaParser::Declaration_Context::getRuleIndex() const {
  return GuavaParser::RuleDeclaration_;
}

void GuavaParser::Declaration_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration_(this);
}

void GuavaParser::Declaration_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration_(this);
}


std::any GuavaParser::Declaration_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitDeclaration_(this);
  else
    return visitor->visitChildren(this);
}

GuavaParser::Declaration_Context* GuavaParser::declaration_() {
  Declaration_Context *_localctx = _tracker.createInstance<Declaration_Context>(_ctx, getState());
  enterRule(_localctx, 2, GuavaParser::RuleDeclaration_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    fnDeclaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Action_Context ------------------------------------------------------------------

GuavaParser::Action_Context::Action_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GuavaParser::Statement_Context* GuavaParser::Action_Context::statement_() {
  return getRuleContext<GuavaParser::Statement_Context>(0);
}

tree::TerminalNode* GuavaParser::Action_Context::Semi() {
  return getToken(GuavaParser::Semi, 0);
}

GuavaParser::ScopeContext* GuavaParser::Action_Context::scope() {
  return getRuleContext<GuavaParser::ScopeContext>(0);
}

GuavaParser::ControlFlow_Context* GuavaParser::Action_Context::controlFlow_() {
  return getRuleContext<GuavaParser::ControlFlow_Context>(0);
}

GuavaParser::Declaration_Context* GuavaParser::Action_Context::declaration_() {
  return getRuleContext<GuavaParser::Declaration_Context>(0);
}


size_t GuavaParser::Action_Context::getRuleIndex() const {
  return GuavaParser::RuleAction_;
}

void GuavaParser::Action_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAction_(this);
}

void GuavaParser::Action_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAction_(this);
}


std::any GuavaParser::Action_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitAction_(this);
  else
    return visitor->visitChildren(this);
}

GuavaParser::Action_Context* GuavaParser::action_() {
  Action_Context *_localctx = _tracker.createInstance<Action_Context>(_ctx, getState());
  enterRule(_localctx, 4, GuavaParser::RuleAction_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(107);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(101);
      statement_();
      setState(102);
      match(GuavaParser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(104);
      scope();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(105);
      controlFlow_();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(106);
      declaration_();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScopeContext ------------------------------------------------------------------

GuavaParser::ScopeContext::ScopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GuavaParser::ScopeContext::Lbrace() {
  return getToken(GuavaParser::Lbrace, 0);
}

tree::TerminalNode* GuavaParser::ScopeContext::Rbrace() {
  return getToken(GuavaParser::Rbrace, 0);
}

std::vector<GuavaParser::Action_Context *> GuavaParser::ScopeContext::action_() {
  return getRuleContexts<GuavaParser::Action_Context>();
}

GuavaParser::Action_Context* GuavaParser::ScopeContext::action_(size_t i) {
  return getRuleContext<GuavaParser::Action_Context>(i);
}


size_t GuavaParser::ScopeContext::getRuleIndex() const {
  return GuavaParser::RuleScope;
}

void GuavaParser::ScopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScope(this);
}

void GuavaParser::ScopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScope(this);
}


std::any GuavaParser::ScopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitScope(this);
  else
    return visitor->visitChildren(this);
}

GuavaParser::ScopeContext* GuavaParser::scope() {
  ScopeContext *_localctx = _tracker.createInstance<ScopeContext>(_ctx, getState());
  enterRule(_localctx, 6, GuavaParser::RuleScope);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    match(GuavaParser::Lbrace);
    setState(113);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 433119482991345630) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 66593) != 0)) {
      setState(110);
      action_();
      setState(115);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(116);
    match(GuavaParser::Rbrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Statement_Context ------------------------------------------------------------------

GuavaParser::Statement_Context::Statement_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GuavaParser::KeywordStatement_Context* GuavaParser::Statement_Context::keywordStatement_() {
  return getRuleContext<GuavaParser::KeywordStatement_Context>(0);
}

GuavaParser::Assign_Context* GuavaParser::Statement_Context::assign_() {
  return getRuleContext<GuavaParser::Assign_Context>(0);
}

GuavaParser::Expression_Context* GuavaParser::Statement_Context::expression_() {
  return getRuleContext<GuavaParser::Expression_Context>(0);
}

GuavaParser::ScopeContext* GuavaParser::Statement_Context::scope() {
  return getRuleContext<GuavaParser::ScopeContext>(0);
}


size_t GuavaParser::Statement_Context::getRuleIndex() const {
  return GuavaParser::RuleStatement_;
}

void GuavaParser::Statement_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement_(this);
}

void GuavaParser::Statement_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement_(this);
}


std::any GuavaParser::Statement_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitStatement_(this);
  else
    return visitor->visitChildren(this);
}

GuavaParser::Statement_Context* GuavaParser::statement_() {
  Statement_Context *_localctx = _tracker.createInstance<Statement_Context>(_ctx, getState());
  enterRule(_localctx, 8, GuavaParser::RuleStatement_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(122);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(118);
      keywordStatement_();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(119);
      assign_();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(120);
      expression_(0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(121);
      scope();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeywordStatement_Context ------------------------------------------------------------------

GuavaParser::KeywordStatement_Context::KeywordStatement_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::KeywordStatement_Context::getRuleIndex() const {
  return GuavaParser::RuleKeywordStatement_;
}

void GuavaParser::KeywordStatement_Context::copyFrom(KeywordStatement_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NextStatContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::NextStatContext::Next() {
  return getToken(GuavaParser::Next, 0);
}

GuavaParser::Expression_Context* GuavaParser::NextStatContext::expression_() {
  return getRuleContext<GuavaParser::Expression_Context>(0);
}

GuavaParser::NextStatContext::NextStatContext(KeywordStatement_Context *ctx) { copyFrom(ctx); }

void GuavaParser::NextStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNextStat(this);
}
void GuavaParser::NextStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNextStat(this);
}

std::any GuavaParser::NextStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitNextStat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OnceStatContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::OnceStatContext::Once() {
  return getToken(GuavaParser::Once, 0);
}

GuavaParser::Statement_Context* GuavaParser::OnceStatContext::statement_() {
  return getRuleContext<GuavaParser::Statement_Context>(0);
}

GuavaParser::OnceStatContext::OnceStatContext(KeywordStatement_Context *ctx) { copyFrom(ctx); }

void GuavaParser::OnceStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOnceStat(this);
}
void GuavaParser::OnceStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOnceStat(this);
}

std::any GuavaParser::OnceStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitOnceStat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReturnStatContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::ReturnStatContext::Return() {
  return getToken(GuavaParser::Return, 0);
}

GuavaParser::Value_Context* GuavaParser::ReturnStatContext::value_() {
  return getRuleContext<GuavaParser::Value_Context>(0);
}

GuavaParser::ReturnStatContext::ReturnStatContext(KeywordStatement_Context *ctx) { copyFrom(ctx); }

void GuavaParser::ReturnStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStat(this);
}
void GuavaParser::ReturnStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStat(this);
}

std::any GuavaParser::ReturnStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitReturnStat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LastStatContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::LastStatContext::Last() {
  return getToken(GuavaParser::Last, 0);
}

GuavaParser::LastStatContext::LastStatContext(KeywordStatement_Context *ctx) { copyFrom(ctx); }

void GuavaParser::LastStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLastStat(this);
}
void GuavaParser::LastStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLastStat(this);
}

std::any GuavaParser::LastStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitLastStat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BreakStatContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::BreakStatContext::Break() {
  return getToken(GuavaParser::Break, 0);
}

GuavaParser::BreakStatContext::BreakStatContext(KeywordStatement_Context *ctx) { copyFrom(ctx); }

void GuavaParser::BreakStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreakStat(this);
}
void GuavaParser::BreakStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreakStat(this);
}

std::any GuavaParser::BreakStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitBreakStat(this);
  else
    return visitor->visitChildren(this);
}
GuavaParser::KeywordStatement_Context* GuavaParser::keywordStatement_() {
  KeywordStatement_Context *_localctx = _tracker.createInstance<KeywordStatement_Context>(_ctx, getState());
  enterRule(_localctx, 10, GuavaParser::RuleKeywordStatement_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(142);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GuavaParser::Return: {
        _localctx = _tracker.createInstance<GuavaParser::ReturnStatContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(124);
        match(GuavaParser::Return);
        setState(126);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          setState(125);
          value_();
          break;
        }

        default:
          break;
        }
        setState(128);

        if (!(isWithinFn())) throw FailedPredicateException(this, "isWithinFn()");
        break;
      }

      case GuavaParser::Once: {
        _localctx = _tracker.createInstance<GuavaParser::OnceStatContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(129);
        match(GuavaParser::Once);
        setState(130);
        statement_();
        setState(131);

        if (!(isWithinLoop())) throw FailedPredicateException(this, "isWithinLoop()");
        break;
      }

      case GuavaParser::Next: {
        _localctx = _tracker.createInstance<GuavaParser::NextStatContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(133);
        match(GuavaParser::Next);
        setState(135);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          setState(134);
          expression_(0);
          break;
        }

        default:
          break;
        }
        setState(137);

        if (!(isWithinLoop())) throw FailedPredicateException(this, "isWithinLoop()");
        break;
      }

      case GuavaParser::Last: {
        _localctx = _tracker.createInstance<GuavaParser::LastStatContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(138);
        match(GuavaParser::Last);
        setState(139);

        if (!(isWithinLoop())) throw FailedPredicateException(this, "isWithinLoop()");
        break;
      }

      case GuavaParser::Break: {
        _localctx = _tracker.createInstance<GuavaParser::BreakStatContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(140);
        match(GuavaParser::Break);
        setState(141);

        if (!(isWithinLoop())) throw FailedPredicateException(this, "isWithinLoop()");
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Body_Context ------------------------------------------------------------------

GuavaParser::Body_Context::Body_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GuavaParser::ScopeContext* GuavaParser::Body_Context::scope() {
  return getRuleContext<GuavaParser::ScopeContext>(0);
}

GuavaParser::Statement_Context* GuavaParser::Body_Context::statement_() {
  return getRuleContext<GuavaParser::Statement_Context>(0);
}

tree::TerminalNode* GuavaParser::Body_Context::Semi() {
  return getToken(GuavaParser::Semi, 0);
}


size_t GuavaParser::Body_Context::getRuleIndex() const {
  return GuavaParser::RuleBody_;
}

void GuavaParser::Body_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBody_(this);
}

void GuavaParser::Body_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBody_(this);
}


std::any GuavaParser::Body_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitBody_(this);
  else
    return visitor->visitChildren(this);
}

GuavaParser::Body_Context* GuavaParser::body_() {
  Body_Context *_localctx = _tracker.createInstance<Body_Context>(_ctx, getState());
  enterRule(_localctx, 12, GuavaParser::RuleBody_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(144);
      scope();
      break;
    }

    case 2: {
      setState(145);
      statement_();
      setState(146);
      match(GuavaParser::Semi);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ControlFlow_Context ------------------------------------------------------------------

GuavaParser::ControlFlow_Context::ControlFlow_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GuavaParser::CompoundStatementContext* GuavaParser::ControlFlow_Context::compoundStatement() {
  return getRuleContext<GuavaParser::CompoundStatementContext>(0);
}

tree::TerminalNode* GuavaParser::ControlFlow_Context::Semi() {
  return getToken(GuavaParser::Semi, 0);
}

GuavaParser::Loop_Context* GuavaParser::ControlFlow_Context::loop_() {
  return getRuleContext<GuavaParser::Loop_Context>(0);
}

GuavaParser::IfStatement_Context* GuavaParser::ControlFlow_Context::ifStatement_() {
  return getRuleContext<GuavaParser::IfStatement_Context>(0);
}


size_t GuavaParser::ControlFlow_Context::getRuleIndex() const {
  return GuavaParser::RuleControlFlow_;
}

void GuavaParser::ControlFlow_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterControlFlow_(this);
}

void GuavaParser::ControlFlow_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitControlFlow_(this);
}


std::any GuavaParser::ControlFlow_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitControlFlow_(this);
  else
    return visitor->visitChildren(this);
}

GuavaParser::ControlFlow_Context* GuavaParser::controlFlow_() {
  ControlFlow_Context *_localctx = _tracker.createInstance<ControlFlow_Context>(_ctx, getState());
  enterRule(_localctx, 14, GuavaParser::RuleControlFlow_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(155);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(150);
      compoundStatement();
      setState(151);
      match(GuavaParser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(153);
      loop_();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(154);
      ifStatement_();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Loop_Context ------------------------------------------------------------------

GuavaParser::Loop_Context::Loop_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GuavaParser::LoopOnScope_Context* GuavaParser::Loop_Context::loopOnScope_() {
  return getRuleContext<GuavaParser::LoopOnScope_Context>(0);
}

GuavaParser::LoopOnBody_Context* GuavaParser::Loop_Context::loopOnBody_() {
  return getRuleContext<GuavaParser::LoopOnBody_Context>(0);
}

GuavaParser::DoWhileLoopContext* GuavaParser::Loop_Context::doWhileLoop() {
  return getRuleContext<GuavaParser::DoWhileLoopContext>(0);
}


size_t GuavaParser::Loop_Context::getRuleIndex() const {
  return GuavaParser::RuleLoop_;
}

void GuavaParser::Loop_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoop_(this);
}

void GuavaParser::Loop_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoop_(this);
}


std::any GuavaParser::Loop_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitLoop_(this);
  else
    return visitor->visitChildren(this);
}

GuavaParser::Loop_Context* GuavaParser::loop_() {
  Loop_Context *_localctx = _tracker.createInstance<Loop_Context>(_ctx, getState());
  enterRule(_localctx, 16, GuavaParser::RuleLoop_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(160);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(157);
      loopOnScope_();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(158);
      loopOnBody_();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(159);
      doWhileLoop();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopOnScope_Context ------------------------------------------------------------------

GuavaParser::LoopOnScope_Context::LoopOnScope_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::LoopOnScope_Context::getRuleIndex() const {
  return GuavaParser::RuleLoopOnScope_;
}

void GuavaParser::LoopOnScope_Context::copyFrom(LoopOnScope_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LoopOnScopeOnArgsContext ------------------------------------------------------------------

GuavaParser::LoopKeywords_Context* GuavaParser::LoopOnScopeOnArgsContext::loopKeywords_() {
  return getRuleContext<GuavaParser::LoopKeywords_Context>(0);
}

GuavaParser::ArgsContext* GuavaParser::LoopOnScopeOnArgsContext::args() {
  return getRuleContext<GuavaParser::ArgsContext>(0);
}

GuavaParser::ScopeContext* GuavaParser::LoopOnScopeOnArgsContext::scope() {
  return getRuleContext<GuavaParser::ScopeContext>(0);
}

GuavaParser::LoopOnScopeOnArgsContext::LoopOnScopeOnArgsContext(LoopOnScope_Context *ctx) { copyFrom(ctx); }

void GuavaParser::LoopOnScopeOnArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopOnScopeOnArgs(this);
}
void GuavaParser::LoopOnScopeOnArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopOnScopeOnArgs(this);
}

std::any GuavaParser::LoopOnScopeOnArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitLoopOnScopeOnArgs(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LoopOnScopeOnExprContext ------------------------------------------------------------------

GuavaParser::LoopKeywords_Context* GuavaParser::LoopOnScopeOnExprContext::loopKeywords_() {
  return getRuleContext<GuavaParser::LoopKeywords_Context>(0);
}

GuavaParser::Expression_Context* GuavaParser::LoopOnScopeOnExprContext::expression_() {
  return getRuleContext<GuavaParser::Expression_Context>(0);
}

GuavaParser::ScopeContext* GuavaParser::LoopOnScopeOnExprContext::scope() {
  return getRuleContext<GuavaParser::ScopeContext>(0);
}

GuavaParser::LoopOnScopeOnExprContext::LoopOnScopeOnExprContext(LoopOnScope_Context *ctx) { copyFrom(ctx); }

void GuavaParser::LoopOnScopeOnExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopOnScopeOnExpr(this);
}
void GuavaParser::LoopOnScopeOnExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopOnScopeOnExpr(this);
}

std::any GuavaParser::LoopOnScopeOnExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitLoopOnScopeOnExpr(this);
  else
    return visitor->visitChildren(this);
}
GuavaParser::LoopOnScope_Context* GuavaParser::loopOnScope_() {
  LoopOnScope_Context *_localctx = _tracker.createInstance<LoopOnScope_Context>(_ctx, getState());
  enterRule(_localctx, 18, GuavaParser::RuleLoopOnScope_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(170);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<GuavaParser::LoopOnScopeOnExprContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(162);
      loopKeywords_();
      setState(163);
      expression_(0);
      setState(164);
      scope();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<GuavaParser::LoopOnScopeOnArgsContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(166);
      loopKeywords_();
      setState(167);
      args();
      setState(168);
      scope();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopOnBody_Context ------------------------------------------------------------------

GuavaParser::LoopOnBody_Context::LoopOnBody_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::LoopOnBody_Context::getRuleIndex() const {
  return GuavaParser::RuleLoopOnBody_;
}

void GuavaParser::LoopOnBody_Context::copyFrom(LoopOnBody_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LoopOnBodyOnExprContext ------------------------------------------------------------------

GuavaParser::LoopKeywords_Context* GuavaParser::LoopOnBodyOnExprContext::loopKeywords_() {
  return getRuleContext<GuavaParser::LoopKeywords_Context>(0);
}

tree::TerminalNode* GuavaParser::LoopOnBodyOnExprContext::Lpar() {
  return getToken(GuavaParser::Lpar, 0);
}

GuavaParser::Expression_Context* GuavaParser::LoopOnBodyOnExprContext::expression_() {
  return getRuleContext<GuavaParser::Expression_Context>(0);
}

tree::TerminalNode* GuavaParser::LoopOnBodyOnExprContext::Rpar() {
  return getToken(GuavaParser::Rpar, 0);
}

GuavaParser::Body_Context* GuavaParser::LoopOnBodyOnExprContext::body_() {
  return getRuleContext<GuavaParser::Body_Context>(0);
}

GuavaParser::LoopOnBodyOnExprContext::LoopOnBodyOnExprContext(LoopOnBody_Context *ctx) { copyFrom(ctx); }

void GuavaParser::LoopOnBodyOnExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopOnBodyOnExpr(this);
}
void GuavaParser::LoopOnBodyOnExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopOnBodyOnExpr(this);
}

std::any GuavaParser::LoopOnBodyOnExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitLoopOnBodyOnExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LoopOnBodyOnArgsContext ------------------------------------------------------------------

GuavaParser::LoopKeywords_Context* GuavaParser::LoopOnBodyOnArgsContext::loopKeywords_() {
  return getRuleContext<GuavaParser::LoopKeywords_Context>(0);
}

tree::TerminalNode* GuavaParser::LoopOnBodyOnArgsContext::Lpar() {
  return getToken(GuavaParser::Lpar, 0);
}

GuavaParser::ArgsContext* GuavaParser::LoopOnBodyOnArgsContext::args() {
  return getRuleContext<GuavaParser::ArgsContext>(0);
}

tree::TerminalNode* GuavaParser::LoopOnBodyOnArgsContext::Rpar() {
  return getToken(GuavaParser::Rpar, 0);
}

GuavaParser::Body_Context* GuavaParser::LoopOnBodyOnArgsContext::body_() {
  return getRuleContext<GuavaParser::Body_Context>(0);
}

GuavaParser::LoopOnBodyOnArgsContext::LoopOnBodyOnArgsContext(LoopOnBody_Context *ctx) { copyFrom(ctx); }

void GuavaParser::LoopOnBodyOnArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopOnBodyOnArgs(this);
}
void GuavaParser::LoopOnBodyOnArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopOnBodyOnArgs(this);
}

std::any GuavaParser::LoopOnBodyOnArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitLoopOnBodyOnArgs(this);
  else
    return visitor->visitChildren(this);
}
GuavaParser::LoopOnBody_Context* GuavaParser::loopOnBody_() {
  LoopOnBody_Context *_localctx = _tracker.createInstance<LoopOnBody_Context>(_ctx, getState());
  enterRule(_localctx, 20, GuavaParser::RuleLoopOnBody_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(184);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<GuavaParser::LoopOnBodyOnExprContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(172);
      loopKeywords_();
      setState(173);
      match(GuavaParser::Lpar);
      setState(174);
      expression_(0);
      setState(175);
      match(GuavaParser::Rpar);
      setState(176);
      body_();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<GuavaParser::LoopOnBodyOnArgsContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(178);
      loopKeywords_();
      setState(179);
      match(GuavaParser::Lpar);
      setState(180);
      args();
      setState(181);
      match(GuavaParser::Rpar);
      setState(182);
      body_();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoWhileLoopContext ------------------------------------------------------------------

GuavaParser::DoWhileLoopContext::DoWhileLoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GuavaParser::DoWhileLoopContext::Do() {
  return getToken(GuavaParser::Do, 0);
}

GuavaParser::ScopeContext* GuavaParser::DoWhileLoopContext::scope() {
  return getRuleContext<GuavaParser::ScopeContext>(0);
}

GuavaParser::ConditionalLoopKeywords_Context* GuavaParser::DoWhileLoopContext::conditionalLoopKeywords_() {
  return getRuleContext<GuavaParser::ConditionalLoopKeywords_Context>(0);
}

GuavaParser::Expression_Context* GuavaParser::DoWhileLoopContext::expression_() {
  return getRuleContext<GuavaParser::Expression_Context>(0);
}

tree::TerminalNode* GuavaParser::DoWhileLoopContext::Semi() {
  return getToken(GuavaParser::Semi, 0);
}


size_t GuavaParser::DoWhileLoopContext::getRuleIndex() const {
  return GuavaParser::RuleDoWhileLoop;
}

void GuavaParser::DoWhileLoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoWhileLoop(this);
}

void GuavaParser::DoWhileLoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoWhileLoop(this);
}


std::any GuavaParser::DoWhileLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitDoWhileLoop(this);
  else
    return visitor->visitChildren(this);
}

GuavaParser::DoWhileLoopContext* GuavaParser::doWhileLoop() {
  DoWhileLoopContext *_localctx = _tracker.createInstance<DoWhileLoopContext>(_ctx, getState());
  enterRule(_localctx, 22, GuavaParser::RuleDoWhileLoop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(186);
    match(GuavaParser::Do);
    setState(187);
    scope();
    setState(188);
    conditionalLoopKeywords_();
    setState(189);
    expression_(0);
    setState(190);
    match(GuavaParser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStatementContext ------------------------------------------------------------------

GuavaParser::CompoundStatementContext::CompoundStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GuavaParser::CompoundAction_Context* GuavaParser::CompoundStatementContext::compoundAction_() {
  return getRuleContext<GuavaParser::CompoundAction_Context>(0);
}

std::vector<GuavaParser::LoopKeywords_Context *> GuavaParser::CompoundStatementContext::loopKeywords_() {
  return getRuleContexts<GuavaParser::LoopKeywords_Context>();
}

GuavaParser::LoopKeywords_Context* GuavaParser::CompoundStatementContext::loopKeywords_(size_t i) {
  return getRuleContext<GuavaParser::LoopKeywords_Context>(i);
}

std::vector<GuavaParser::Expression_Context *> GuavaParser::CompoundStatementContext::expression_() {
  return getRuleContexts<GuavaParser::Expression_Context>();
}

GuavaParser::Expression_Context* GuavaParser::CompoundStatementContext::expression_(size_t i) {
  return getRuleContext<GuavaParser::Expression_Context>(i);
}

std::vector<tree::TerminalNode *> GuavaParser::CompoundStatementContext::Lpar() {
  return getTokens(GuavaParser::Lpar);
}

tree::TerminalNode* GuavaParser::CompoundStatementContext::Lpar(size_t i) {
  return getToken(GuavaParser::Lpar, i);
}

std::vector<GuavaParser::ArgsContext *> GuavaParser::CompoundStatementContext::args() {
  return getRuleContexts<GuavaParser::ArgsContext>();
}

GuavaParser::ArgsContext* GuavaParser::CompoundStatementContext::args(size_t i) {
  return getRuleContext<GuavaParser::ArgsContext>(i);
}

std::vector<tree::TerminalNode *> GuavaParser::CompoundStatementContext::Rpar() {
  return getTokens(GuavaParser::Rpar);
}

tree::TerminalNode* GuavaParser::CompoundStatementContext::Rpar(size_t i) {
  return getToken(GuavaParser::Rpar, i);
}


size_t GuavaParser::CompoundStatementContext::getRuleIndex() const {
  return GuavaParser::RuleCompoundStatement;
}

void GuavaParser::CompoundStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundStatement(this);
}

void GuavaParser::CompoundStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundStatement(this);
}


std::any GuavaParser::CompoundStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitCompoundStatement(this);
  else
    return visitor->visitChildren(this);
}

GuavaParser::CompoundStatementContext* GuavaParser::compoundStatement() {
  CompoundStatementContext *_localctx = _tracker.createInstance<CompoundStatementContext>(_ctx, getState());
  enterRule(_localctx, 24, GuavaParser::RuleCompoundStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    compoundAction_(0);
    setState(203);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1920) != 0)) {
      setState(193);
      loopKeywords_();
      setState(199);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
      case 1: {
        setState(194);
        expression_(0);
        break;
      }

      case 2: {
        setState(195);
        match(GuavaParser::Lpar);
        setState(196);
        args();
        setState(197);
        match(GuavaParser::Rpar);
        break;
      }

      default:
        break;
      }
      setState(205);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundAction_Context ------------------------------------------------------------------

GuavaParser::CompoundAction_Context::CompoundAction_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::CompoundAction_Context::getRuleIndex() const {
  return GuavaParser::RuleCompoundAction_;
}

void GuavaParser::CompoundAction_Context::copyFrom(CompoundAction_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StatementCompoundContext ------------------------------------------------------------------

GuavaParser::Statement_Context* GuavaParser::StatementCompoundContext::statement_() {
  return getRuleContext<GuavaParser::Statement_Context>(0);
}

GuavaParser::StatementCompoundContext::StatementCompoundContext(CompoundAction_Context *ctx) { copyFrom(ctx); }

void GuavaParser::StatementCompoundContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatementCompound(this);
}
void GuavaParser::StatementCompoundContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatementCompound(this);
}

std::any GuavaParser::StatementCompoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitStatementCompound(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfScopeCompoundContext ------------------------------------------------------------------

GuavaParser::IfScopeContext* GuavaParser::IfScopeCompoundContext::ifScope() {
  return getRuleContext<GuavaParser::IfScopeContext>(0);
}

GuavaParser::IfScopeCompoundContext::IfScopeCompoundContext(CompoundAction_Context *ctx) { copyFrom(ctx); }

void GuavaParser::IfScopeCompoundContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfScopeCompound(this);
}
void GuavaParser::IfScopeCompoundContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfScopeCompound(this);
}

std::any GuavaParser::IfScopeCompoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitIfScopeCompound(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LoopScopeCompoundContext ------------------------------------------------------------------

GuavaParser::LoopOnScope_Context* GuavaParser::LoopScopeCompoundContext::loopOnScope_() {
  return getRuleContext<GuavaParser::LoopOnScope_Context>(0);
}

GuavaParser::LoopScopeCompoundContext::LoopScopeCompoundContext(CompoundAction_Context *ctx) { copyFrom(ctx); }

void GuavaParser::LoopScopeCompoundContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopScopeCompound(this);
}
void GuavaParser::LoopScopeCompoundContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopScopeCompound(this);
}

std::any GuavaParser::LoopScopeCompoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitLoopScopeCompound(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfCompoundContext ------------------------------------------------------------------

std::vector<GuavaParser::CompoundAction_Context *> GuavaParser::IfCompoundContext::compoundAction_() {
  return getRuleContexts<GuavaParser::CompoundAction_Context>();
}

GuavaParser::CompoundAction_Context* GuavaParser::IfCompoundContext::compoundAction_(size_t i) {
  return getRuleContext<GuavaParser::CompoundAction_Context>(i);
}

GuavaParser::ConditionalKeywords_Context* GuavaParser::IfCompoundContext::conditionalKeywords_() {
  return getRuleContext<GuavaParser::ConditionalKeywords_Context>(0);
}

GuavaParser::Expression_Context* GuavaParser::IfCompoundContext::expression_() {
  return getRuleContext<GuavaParser::Expression_Context>(0);
}

tree::TerminalNode* GuavaParser::IfCompoundContext::Else() {
  return getToken(GuavaParser::Else, 0);
}

GuavaParser::IfCompoundContext::IfCompoundContext(CompoundAction_Context *ctx) { copyFrom(ctx); }

void GuavaParser::IfCompoundContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfCompound(this);
}
void GuavaParser::IfCompoundContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfCompound(this);
}

std::any GuavaParser::IfCompoundContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitIfCompound(this);
  else
    return visitor->visitChildren(this);
}

GuavaParser::CompoundAction_Context* GuavaParser::compoundAction_() {
   return compoundAction_(0);
}

GuavaParser::CompoundAction_Context* GuavaParser::compoundAction_(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GuavaParser::CompoundAction_Context *_localctx = _tracker.createInstance<CompoundAction_Context>(_ctx, parentState);
  GuavaParser::CompoundAction_Context *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, GuavaParser::RuleCompoundAction_, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(210);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GuavaParser::If:
      case GuavaParser::Unless: {
        _localctx = _tracker.createInstance<IfScopeCompoundContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(207);
        ifScope();
        break;
      }

      case GuavaParser::While:
      case GuavaParser::Until:
      case GuavaParser::For:
      case GuavaParser::Loop: {
        _localctx = _tracker.createInstance<LoopScopeCompoundContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(208);
        loopOnScope_();
        break;
      }

      case GuavaParser::Decl:
      case GuavaParser::Return:
      case GuavaParser::Break:
      case GuavaParser::Next:
      case GuavaParser::Last:
      case GuavaParser::Once:
      case GuavaParser::True:
      case GuavaParser::False:
      case GuavaParser::Null:
      case GuavaParser::DefId:
      case GuavaParser::Number:
      case GuavaParser::Id:
      case GuavaParser::String:
      case GuavaParser::StringLit:
      case GuavaParser::PlusEq:
      case GuavaParser::MinEq:
      case GuavaParser::MultEq:
      case GuavaParser::DivEq:
      case GuavaParser::ModEq:
      case GuavaParser::PowEq:
      case GuavaParser::Increm:
      case GuavaParser::Decrem:
      case GuavaParser::Lbrack:
      case GuavaParser::Lbrace:
      case GuavaParser::Lpar:
      case GuavaParser::Min:
      case GuavaParser::Eq:
      case GuavaParser::AndSign:
      case GuavaParser::ExPoint:
      case GuavaParser::Fslash:
      case GuavaParser::Squig: {
        _localctx = _tracker.createInstance<StatementCompoundContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(209);
        statement_();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(221);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<IfCompoundContext>(_tracker.createInstance<CompoundAction_Context>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleCompoundAction_);
        setState(212);

        if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
        setState(213);
        conditionalKeywords_();
        setState(214);
        expression_(0);
        setState(217);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          setState(215);
          match(GuavaParser::Else);
          setState(216);
          compoundAction_(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(223);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- IfStatement_Context ------------------------------------------------------------------

GuavaParser::IfStatement_Context::IfStatement_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GuavaParser::IfScopeContext* GuavaParser::IfStatement_Context::ifScope() {
  return getRuleContext<GuavaParser::IfScopeContext>(0);
}

GuavaParser::IfBodyContext* GuavaParser::IfStatement_Context::ifBody() {
  return getRuleContext<GuavaParser::IfBodyContext>(0);
}


size_t GuavaParser::IfStatement_Context::getRuleIndex() const {
  return GuavaParser::RuleIfStatement_;
}

void GuavaParser::IfStatement_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement_(this);
}

void GuavaParser::IfStatement_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement_(this);
}


std::any GuavaParser::IfStatement_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitIfStatement_(this);
  else
    return visitor->visitChildren(this);
}

GuavaParser::IfStatement_Context* GuavaParser::ifStatement_() {
  IfStatement_Context *_localctx = _tracker.createInstance<IfStatement_Context>(_ctx, getState());
  enterRule(_localctx, 28, GuavaParser::RuleIfStatement_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(226);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(224);
      ifScope();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(225);
      ifBody();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfScopeContext ------------------------------------------------------------------

GuavaParser::IfScopeContext::IfScopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GuavaParser::ConditionalKeywords_Context* GuavaParser::IfScopeContext::conditionalKeywords_() {
  return getRuleContext<GuavaParser::ConditionalKeywords_Context>(0);
}

GuavaParser::Expression_Context* GuavaParser::IfScopeContext::expression_() {
  return getRuleContext<GuavaParser::Expression_Context>(0);
}

GuavaParser::ScopeContext* GuavaParser::IfScopeContext::scope() {
  return getRuleContext<GuavaParser::ScopeContext>(0);
}

tree::TerminalNode* GuavaParser::IfScopeContext::Else() {
  return getToken(GuavaParser::Else, 0);
}

GuavaParser::Body_Context* GuavaParser::IfScopeContext::body_() {
  return getRuleContext<GuavaParser::Body_Context>(0);
}

GuavaParser::IfStatement_Context* GuavaParser::IfScopeContext::ifStatement_() {
  return getRuleContext<GuavaParser::IfStatement_Context>(0);
}


size_t GuavaParser::IfScopeContext::getRuleIndex() const {
  return GuavaParser::RuleIfScope;
}

void GuavaParser::IfScopeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfScope(this);
}

void GuavaParser::IfScopeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfScope(this);
}


std::any GuavaParser::IfScopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitIfScope(this);
  else
    return visitor->visitChildren(this);
}

GuavaParser::IfScopeContext* GuavaParser::ifScope() {
  IfScopeContext *_localctx = _tracker.createInstance<IfScopeContext>(_ctx, getState());
  enterRule(_localctx, 30, GuavaParser::RuleIfScope);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(228);
    conditionalKeywords_();
    setState(229);
    expression_(0);
    setState(230);
    scope();
    setState(236);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      setState(231);
      match(GuavaParser::Else);
      setState(234);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case GuavaParser::Decl:
        case GuavaParser::Return:
        case GuavaParser::Break:
        case GuavaParser::Next:
        case GuavaParser::Last:
        case GuavaParser::Once:
        case GuavaParser::True:
        case GuavaParser::False:
        case GuavaParser::Null:
        case GuavaParser::DefId:
        case GuavaParser::Number:
        case GuavaParser::Id:
        case GuavaParser::String:
        case GuavaParser::StringLit:
        case GuavaParser::PlusEq:
        case GuavaParser::MinEq:
        case GuavaParser::MultEq:
        case GuavaParser::DivEq:
        case GuavaParser::ModEq:
        case GuavaParser::PowEq:
        case GuavaParser::Increm:
        case GuavaParser::Decrem:
        case GuavaParser::Lbrack:
        case GuavaParser::Lbrace:
        case GuavaParser::Lpar:
        case GuavaParser::Min:
        case GuavaParser::Eq:
        case GuavaParser::AndSign:
        case GuavaParser::ExPoint:
        case GuavaParser::Fslash:
        case GuavaParser::Squig: {
          setState(232);
          body_();
          break;
        }

        case GuavaParser::If:
        case GuavaParser::Unless: {
          setState(233);
          ifStatement_();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfBodyContext ------------------------------------------------------------------

GuavaParser::IfBodyContext::IfBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GuavaParser::ConditionalKeywords_Context* GuavaParser::IfBodyContext::conditionalKeywords_() {
  return getRuleContext<GuavaParser::ConditionalKeywords_Context>(0);
}

tree::TerminalNode* GuavaParser::IfBodyContext::Lpar() {
  return getToken(GuavaParser::Lpar, 0);
}

GuavaParser::Expression_Context* GuavaParser::IfBodyContext::expression_() {
  return getRuleContext<GuavaParser::Expression_Context>(0);
}

tree::TerminalNode* GuavaParser::IfBodyContext::Rpar() {
  return getToken(GuavaParser::Rpar, 0);
}

std::vector<GuavaParser::Body_Context *> GuavaParser::IfBodyContext::body_() {
  return getRuleContexts<GuavaParser::Body_Context>();
}

GuavaParser::Body_Context* GuavaParser::IfBodyContext::body_(size_t i) {
  return getRuleContext<GuavaParser::Body_Context>(i);
}

tree::TerminalNode* GuavaParser::IfBodyContext::Else() {
  return getToken(GuavaParser::Else, 0);
}

GuavaParser::IfStatement_Context* GuavaParser::IfBodyContext::ifStatement_() {
  return getRuleContext<GuavaParser::IfStatement_Context>(0);
}


size_t GuavaParser::IfBodyContext::getRuleIndex() const {
  return GuavaParser::RuleIfBody;
}

void GuavaParser::IfBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfBody(this);
}

void GuavaParser::IfBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfBody(this);
}


std::any GuavaParser::IfBodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitIfBody(this);
  else
    return visitor->visitChildren(this);
}

GuavaParser::IfBodyContext* GuavaParser::ifBody() {
  IfBodyContext *_localctx = _tracker.createInstance<IfBodyContext>(_ctx, getState());
  enterRule(_localctx, 32, GuavaParser::RuleIfBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    conditionalKeywords_();
    setState(239);
    match(GuavaParser::Lpar);
    setState(240);
    expression_(0);
    setState(241);
    match(GuavaParser::Rpar);
    setState(242);
    body_();
    setState(248);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      setState(243);
      match(GuavaParser::Else);
      setState(246);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case GuavaParser::Decl:
        case GuavaParser::Return:
        case GuavaParser::Break:
        case GuavaParser::Next:
        case GuavaParser::Last:
        case GuavaParser::Once:
        case GuavaParser::True:
        case GuavaParser::False:
        case GuavaParser::Null:
        case GuavaParser::DefId:
        case GuavaParser::Number:
        case GuavaParser::Id:
        case GuavaParser::String:
        case GuavaParser::StringLit:
        case GuavaParser::PlusEq:
        case GuavaParser::MinEq:
        case GuavaParser::MultEq:
        case GuavaParser::DivEq:
        case GuavaParser::ModEq:
        case GuavaParser::PowEq:
        case GuavaParser::Increm:
        case GuavaParser::Decrem:
        case GuavaParser::Lbrack:
        case GuavaParser::Lbrace:
        case GuavaParser::Lpar:
        case GuavaParser::Min:
        case GuavaParser::Eq:
        case GuavaParser::AndSign:
        case GuavaParser::ExPoint:
        case GuavaParser::Fslash:
        case GuavaParser::Squig: {
          setState(244);
          body_();
          break;
        }

        case GuavaParser::If:
        case GuavaParser::Unless: {
          setState(245);
          ifStatement_();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalKeywords_Context ------------------------------------------------------------------

GuavaParser::ConditionalKeywords_Context::ConditionalKeywords_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::ConditionalKeywords_Context::getRuleIndex() const {
  return GuavaParser::RuleConditionalKeywords_;
}

void GuavaParser::ConditionalKeywords_Context::copyFrom(ConditionalKeywords_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UnlessKeywordContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::UnlessKeywordContext::Unless() {
  return getToken(GuavaParser::Unless, 0);
}

GuavaParser::UnlessKeywordContext::UnlessKeywordContext(ConditionalKeywords_Context *ctx) { copyFrom(ctx); }

void GuavaParser::UnlessKeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnlessKeyword(this);
}
void GuavaParser::UnlessKeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnlessKeyword(this);
}

std::any GuavaParser::UnlessKeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitUnlessKeyword(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfKeywordContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::IfKeywordContext::If() {
  return getToken(GuavaParser::If, 0);
}

GuavaParser::IfKeywordContext::IfKeywordContext(ConditionalKeywords_Context *ctx) { copyFrom(ctx); }

void GuavaParser::IfKeywordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfKeyword(this);
}
void GuavaParser::IfKeywordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfKeyword(this);
}

std::any GuavaParser::IfKeywordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitIfKeyword(this);
  else
    return visitor->visitChildren(this);
}
GuavaParser::ConditionalKeywords_Context* GuavaParser::conditionalKeywords_() {
  ConditionalKeywords_Context *_localctx = _tracker.createInstance<ConditionalKeywords_Context>(_ctx, getState());
  enterRule(_localctx, 34, GuavaParser::RuleConditionalKeywords_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(252);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GuavaParser::If: {
        _localctx = _tracker.createInstance<GuavaParser::IfKeywordContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(250);
        match(GuavaParser::If);
        break;
      }

      case GuavaParser::Unless: {
        _localctx = _tracker.createInstance<GuavaParser::UnlessKeywordContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(251);
        match(GuavaParser::Unless);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopKeywords_Context ------------------------------------------------------------------

GuavaParser::LoopKeywords_Context::LoopKeywords_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::LoopKeywords_Context::getRuleIndex() const {
  return GuavaParser::RuleLoopKeywords_;
}

void GuavaParser::LoopKeywords_Context::copyFrom(LoopKeywords_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ConditionalLoopContext ------------------------------------------------------------------

GuavaParser::ConditionalLoopKeywords_Context* GuavaParser::ConditionalLoopContext::conditionalLoopKeywords_() {
  return getRuleContext<GuavaParser::ConditionalLoopKeywords_Context>(0);
}

GuavaParser::ConditionalLoopContext::ConditionalLoopContext(LoopKeywords_Context *ctx) { copyFrom(ctx); }

void GuavaParser::ConditionalLoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalLoop(this);
}
void GuavaParser::ConditionalLoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalLoop(this);
}

std::any GuavaParser::ConditionalLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitConditionalLoop(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LoopLoopContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::LoopLoopContext::Loop() {
  return getToken(GuavaParser::Loop, 0);
}

GuavaParser::LoopLoopContext::LoopLoopContext(LoopKeywords_Context *ctx) { copyFrom(ctx); }

void GuavaParser::LoopLoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopLoop(this);
}
void GuavaParser::LoopLoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopLoop(this);
}

std::any GuavaParser::LoopLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitLoopLoop(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ForLoopContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::ForLoopContext::For() {
  return getToken(GuavaParser::For, 0);
}

GuavaParser::ForLoopContext::ForLoopContext(LoopKeywords_Context *ctx) { copyFrom(ctx); }

void GuavaParser::ForLoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForLoop(this);
}
void GuavaParser::ForLoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForLoop(this);
}

std::any GuavaParser::ForLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitForLoop(this);
  else
    return visitor->visitChildren(this);
}
GuavaParser::LoopKeywords_Context* GuavaParser::loopKeywords_() {
  LoopKeywords_Context *_localctx = _tracker.createInstance<LoopKeywords_Context>(_ctx, getState());
  enterRule(_localctx, 36, GuavaParser::RuleLoopKeywords_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(257);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GuavaParser::For: {
        _localctx = _tracker.createInstance<GuavaParser::ForLoopContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(254);
        match(GuavaParser::For);
        break;
      }

      case GuavaParser::Loop: {
        _localctx = _tracker.createInstance<GuavaParser::LoopLoopContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(255);
        match(GuavaParser::Loop);
        break;
      }

      case GuavaParser::While:
      case GuavaParser::Until: {
        _localctx = _tracker.createInstance<GuavaParser::ConditionalLoopContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(256);
        conditionalLoopKeywords_();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalLoopKeywords_Context ------------------------------------------------------------------

GuavaParser::ConditionalLoopKeywords_Context::ConditionalLoopKeywords_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::ConditionalLoopKeywords_Context::getRuleIndex() const {
  return GuavaParser::RuleConditionalLoopKeywords_;
}

void GuavaParser::ConditionalLoopKeywords_Context::copyFrom(ConditionalLoopKeywords_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- WhileLoopContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::WhileLoopContext::While() {
  return getToken(GuavaParser::While, 0);
}

GuavaParser::WhileLoopContext::WhileLoopContext(ConditionalLoopKeywords_Context *ctx) { copyFrom(ctx); }

void GuavaParser::WhileLoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileLoop(this);
}
void GuavaParser::WhileLoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileLoop(this);
}

std::any GuavaParser::WhileLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitWhileLoop(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UntilLoopContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::UntilLoopContext::Until() {
  return getToken(GuavaParser::Until, 0);
}

GuavaParser::UntilLoopContext::UntilLoopContext(ConditionalLoopKeywords_Context *ctx) { copyFrom(ctx); }

void GuavaParser::UntilLoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUntilLoop(this);
}
void GuavaParser::UntilLoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUntilLoop(this);
}

std::any GuavaParser::UntilLoopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitUntilLoop(this);
  else
    return visitor->visitChildren(this);
}
GuavaParser::ConditionalLoopKeywords_Context* GuavaParser::conditionalLoopKeywords_() {
  ConditionalLoopKeywords_Context *_localctx = _tracker.createInstance<ConditionalLoopKeywords_Context>(_ctx, getState());
  enterRule(_localctx, 38, GuavaParser::RuleConditionalLoopKeywords_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(261);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GuavaParser::While: {
        _localctx = _tracker.createInstance<GuavaParser::WhileLoopContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(259);
        match(GuavaParser::While);
        break;
      }

      case GuavaParser::Until: {
        _localctx = _tracker.createInstance<GuavaParser::UntilLoopContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(260);
        match(GuavaParser::Until);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FnDeclarationContext ------------------------------------------------------------------

GuavaParser::FnDeclarationContext::FnDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GuavaParser::FnDeclarationContext::Fn() {
  return getToken(GuavaParser::Fn, 0);
}

tree::TerminalNode* GuavaParser::FnDeclarationContext::Id() {
  return getToken(GuavaParser::Id, 0);
}

tree::TerminalNode* GuavaParser::FnDeclarationContext::Lpar() {
  return getToken(GuavaParser::Lpar, 0);
}

tree::TerminalNode* GuavaParser::FnDeclarationContext::Rpar() {
  return getToken(GuavaParser::Rpar, 0);
}

GuavaParser::ScopeContext* GuavaParser::FnDeclarationContext::scope() {
  return getRuleContext<GuavaParser::ScopeContext>(0);
}

GuavaParser::Parameters_Context* GuavaParser::FnDeclarationContext::parameters_() {
  return getRuleContext<GuavaParser::Parameters_Context>(0);
}


size_t GuavaParser::FnDeclarationContext::getRuleIndex() const {
  return GuavaParser::RuleFnDeclaration;
}

void GuavaParser::FnDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFnDeclaration(this);
}

void GuavaParser::FnDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFnDeclaration(this);
}


std::any GuavaParser::FnDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitFnDeclaration(this);
  else
    return visitor->visitChildren(this);
}

GuavaParser::FnDeclarationContext* GuavaParser::fnDeclaration() {
  FnDeclarationContext *_localctx = _tracker.createInstance<FnDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 40, GuavaParser::RuleFnDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(263);
    match(GuavaParser::Fn);
    setState(264);
    match(GuavaParser::Id);
    setState(265);
    match(GuavaParser::Lpar);
    setState(267);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GuavaParser::Id) {
      setState(266);
      parameters_();
    }
    setState(269);
    match(GuavaParser::Rpar);
    setState(270);
    scope();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LambdaContext ------------------------------------------------------------------

GuavaParser::LambdaContext::LambdaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GuavaParser::LambdaContext::Sarrow() {
  return getToken(GuavaParser::Sarrow, 0);
}

GuavaParser::Statement_Context* GuavaParser::LambdaContext::statement_() {
  return getRuleContext<GuavaParser::Statement_Context>(0);
}

tree::TerminalNode* GuavaParser::LambdaContext::Lpar() {
  return getToken(GuavaParser::Lpar, 0);
}

tree::TerminalNode* GuavaParser::LambdaContext::Rpar() {
  return getToken(GuavaParser::Rpar, 0);
}

GuavaParser::Parameters_Context* GuavaParser::LambdaContext::parameters_() {
  return getRuleContext<GuavaParser::Parameters_Context>(0);
}

tree::TerminalNode* GuavaParser::LambdaContext::Fn() {
  return getToken(GuavaParser::Fn, 0);
}


size_t GuavaParser::LambdaContext::getRuleIndex() const {
  return GuavaParser::RuleLambda;
}

void GuavaParser::LambdaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLambda(this);
}

void GuavaParser::LambdaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLambda(this);
}


std::any GuavaParser::LambdaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitLambda(this);
  else
    return visitor->visitChildren(this);
}

GuavaParser::LambdaContext* GuavaParser::lambda() {
  LambdaContext *_localctx = _tracker.createInstance<LambdaContext>(_ctx, getState());
  enterRule(_localctx, 42, GuavaParser::RuleLambda);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(288);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GuavaParser::Sarrow:
      case GuavaParser::Lpar: {
        enterOuterAlt(_localctx, 1);
        setState(277);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == GuavaParser::Lpar) {
          setState(272);
          match(GuavaParser::Lpar);
          setState(274);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == GuavaParser::Id) {
            setState(273);
            parameters_();
          }
          setState(276);
          match(GuavaParser::Rpar);
        }
        setState(279);
        match(GuavaParser::Sarrow);
        setState(280);
        statement_();
        break;
      }

      case GuavaParser::Fn: {
        enterOuterAlt(_localctx, 2);
        setState(281);
        match(GuavaParser::Fn);
        setState(282);
        match(GuavaParser::Lpar);
        setState(284);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == GuavaParser::Id) {
          setState(283);
          parameters_();
        }
        setState(286);
        match(GuavaParser::Rpar);
        setState(287);
        statement_();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parameters_Context ------------------------------------------------------------------

GuavaParser::Parameters_Context::Parameters_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::Parameters_Context::getRuleIndex() const {
  return GuavaParser::RuleParameters_;
}

void GuavaParser::Parameters_Context::copyFrom(Parameters_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParamsContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> GuavaParser::ParamsContext::Id() {
  return getTokens(GuavaParser::Id);
}

tree::TerminalNode* GuavaParser::ParamsContext::Id(size_t i) {
  return getToken(GuavaParser::Id, i);
}

std::vector<tree::TerminalNode *> GuavaParser::ParamsContext::Com() {
  return getTokens(GuavaParser::Com);
}

tree::TerminalNode* GuavaParser::ParamsContext::Com(size_t i) {
  return getToken(GuavaParser::Com, i);
}

GuavaParser::ParamsContext::ParamsContext(Parameters_Context *ctx) { copyFrom(ctx); }

void GuavaParser::ParamsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParams(this);
}
void GuavaParser::ParamsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParams(this);
}

std::any GuavaParser::ParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitParams(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParamsExpandContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> GuavaParser::ParamsExpandContext::Id() {
  return getTokens(GuavaParser::Id);
}

tree::TerminalNode* GuavaParser::ParamsExpandContext::Id(size_t i) {
  return getToken(GuavaParser::Id, i);
}

tree::TerminalNode* GuavaParser::ParamsExpandContext::Dot3() {
  return getToken(GuavaParser::Dot3, 0);
}

std::vector<tree::TerminalNode *> GuavaParser::ParamsExpandContext::Com() {
  return getTokens(GuavaParser::Com);
}

tree::TerminalNode* GuavaParser::ParamsExpandContext::Com(size_t i) {
  return getToken(GuavaParser::Com, i);
}

GuavaParser::ParamsExpandContext::ParamsExpandContext(Parameters_Context *ctx) { copyFrom(ctx); }

void GuavaParser::ParamsExpandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParamsExpand(this);
}
void GuavaParser::ParamsExpandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParamsExpand(this);
}

std::any GuavaParser::ParamsExpandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitParamsExpand(this);
  else
    return visitor->visitChildren(this);
}
GuavaParser::Parameters_Context* GuavaParser::parameters_() {
  Parameters_Context *_localctx = _tracker.createInstance<Parameters_Context>(_ctx, getState());
  enterRule(_localctx, 44, GuavaParser::RuleParameters_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(307);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<GuavaParser::ParamsContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(294);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(290);
          match(GuavaParser::Id);
          setState(291);
          match(GuavaParser::Com); 
        }
        setState(296);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
      }
      setState(297);
      match(GuavaParser::Id);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<GuavaParser::ParamsExpandContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(302);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(298);
          match(GuavaParser::Id);
          setState(299);
          match(GuavaParser::Com); 
        }
        setState(304);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
      }
      setState(305);
      match(GuavaParser::Id);
      setState(306);
      match(GuavaParser::Dot3);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgsContext ------------------------------------------------------------------

GuavaParser::ArgsContext::ArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GuavaParser::Argument_Context *> GuavaParser::ArgsContext::argument_() {
  return getRuleContexts<GuavaParser::Argument_Context>();
}

GuavaParser::Argument_Context* GuavaParser::ArgsContext::argument_(size_t i) {
  return getRuleContext<GuavaParser::Argument_Context>(i);
}

std::vector<tree::TerminalNode *> GuavaParser::ArgsContext::Com() {
  return getTokens(GuavaParser::Com);
}

tree::TerminalNode* GuavaParser::ArgsContext::Com(size_t i) {
  return getToken(GuavaParser::Com, i);
}


size_t GuavaParser::ArgsContext::getRuleIndex() const {
  return GuavaParser::RuleArgs;
}

void GuavaParser::ArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgs(this);
}

void GuavaParser::ArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgs(this);
}


std::any GuavaParser::ArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitArgs(this);
  else
    return visitor->visitChildren(this);
}

GuavaParser::ArgsContext* GuavaParser::args() {
  ArgsContext *_localctx = _tracker.createInstance<ArgsContext>(_ctx, getState());
  enterRule(_localctx, 46, GuavaParser::RuleArgs);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(309);
    argument_();
    setState(314);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(310);
        match(GuavaParser::Com);
        setState(311);
        argument_(); 
      }
      setState(316);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Argument_Context ------------------------------------------------------------------

GuavaParser::Argument_Context::Argument_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::Argument_Context::getRuleIndex() const {
  return GuavaParser::RuleArgument_;
}

void GuavaParser::Argument_Context::copyFrom(Argument_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ArgExpandContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::ArgExpandContext::Dot3() {
  return getToken(GuavaParser::Dot3, 0);
}

GuavaParser::Value_Context* GuavaParser::ArgExpandContext::value_() {
  return getRuleContext<GuavaParser::Value_Context>(0);
}

GuavaParser::ArgExpandContext::ArgExpandContext(Argument_Context *ctx) { copyFrom(ctx); }

void GuavaParser::ArgExpandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgExpand(this);
}
void GuavaParser::ArgExpandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgExpand(this);
}

std::any GuavaParser::ArgExpandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitArgExpand(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArgContext ------------------------------------------------------------------

GuavaParser::Value_Context* GuavaParser::ArgContext::value_() {
  return getRuleContext<GuavaParser::Value_Context>(0);
}

GuavaParser::ArgContext::ArgContext(Argument_Context *ctx) { copyFrom(ctx); }

void GuavaParser::ArgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArg(this);
}
void GuavaParser::ArgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArg(this);
}

std::any GuavaParser::ArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitArg(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RangeArgContext ------------------------------------------------------------------

std::vector<GuavaParser::Expression_Context *> GuavaParser::RangeArgContext::expression_() {
  return getRuleContexts<GuavaParser::Expression_Context>();
}

GuavaParser::Expression_Context* GuavaParser::RangeArgContext::expression_(size_t i) {
  return getRuleContext<GuavaParser::Expression_Context>(i);
}

tree::TerminalNode* GuavaParser::RangeArgContext::Dot2() {
  return getToken(GuavaParser::Dot2, 0);
}

GuavaParser::RangeArgContext::RangeArgContext(Argument_Context *ctx) { copyFrom(ctx); }

void GuavaParser::RangeArgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRangeArg(this);
}
void GuavaParser::RangeArgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRangeArg(this);
}

std::any GuavaParser::RangeArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitRangeArg(this);
  else
    return visitor->visitChildren(this);
}
GuavaParser::Argument_Context* GuavaParser::argument_() {
  Argument_Context *_localctx = _tracker.createInstance<Argument_Context>(_ctx, getState());
  enterRule(_localctx, 48, GuavaParser::RuleArgument_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(324);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<GuavaParser::ArgContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(317);
      value_();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<GuavaParser::ArgExpandContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(318);
      match(GuavaParser::Dot3);
      setState(319);
      value_();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<GuavaParser::RangeArgContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(320);
      expression_(0);
      setState(321);
      match(GuavaParser::Dot2);
      setState(322);
      expression_(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MatchRegexContext ------------------------------------------------------------------

GuavaParser::MatchRegexContext::MatchRegexContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GuavaParser::MatchRegexContext::Squig() {
  return getToken(GuavaParser::Squig, 0);
}

std::vector<tree::TerminalNode *> GuavaParser::MatchRegexContext::Bslash() {
  return getTokens(GuavaParser::Bslash);
}

tree::TerminalNode* GuavaParser::MatchRegexContext::Bslash(size_t i) {
  return getToken(GuavaParser::Bslash, i);
}

tree::TerminalNode* GuavaParser::MatchRegexContext::Lbrace() {
  return getToken(GuavaParser::Lbrace, 0);
}

tree::TerminalNode* GuavaParser::MatchRegexContext::Rbrace() {
  return getToken(GuavaParser::Rbrace, 0);
}

std::vector<GuavaParser::MatchOptions_Context *> GuavaParser::MatchRegexContext::matchOptions_() {
  return getRuleContexts<GuavaParser::MatchOptions_Context>();
}

GuavaParser::MatchOptions_Context* GuavaParser::MatchRegexContext::matchOptions_(size_t i) {
  return getRuleContext<GuavaParser::MatchOptions_Context>(i);
}


size_t GuavaParser::MatchRegexContext::getRuleIndex() const {
  return GuavaParser::RuleMatchRegex;
}

void GuavaParser::MatchRegexContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatchRegex(this);
}

void GuavaParser::MatchRegexContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatchRegex(this);
}


std::any GuavaParser::MatchRegexContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitMatchRegex(this);
  else
    return visitor->visitChildren(this);
}

GuavaParser::MatchRegexContext* GuavaParser::matchRegex() {
  MatchRegexContext *_localctx = _tracker.createInstance<MatchRegexContext>(_ctx, getState());
  enterRule(_localctx, 50, GuavaParser::RuleMatchRegex);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(326);
    match(GuavaParser::Squig);
    setState(335);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GuavaParser::Lbrace) {
      setState(327);
      match(GuavaParser::Lbrace);
      setState(331);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == GuavaParser::Word) {
        setState(328);
        matchOptions_();
        setState(333);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(334);
      match(GuavaParser::Rbrace);
    }
    setState(337);
    match(GuavaParser::Bslash);
    setState(338);
    match(GuavaParser::Bslash);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MatchOptions_Context ------------------------------------------------------------------

GuavaParser::MatchOptions_Context::MatchOptions_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::MatchOptions_Context::getRuleIndex() const {
  return GuavaParser::RuleMatchOptions_;
}

void GuavaParser::MatchOptions_Context::copyFrom(MatchOptions_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ReturnAllMatchOptionContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::ReturnAllMatchOptionContext::Word() {
  return getToken(GuavaParser::Word, 0);
}

GuavaParser::ReturnAllMatchOptionContext::ReturnAllMatchOptionContext(MatchOptions_Context *ctx) { copyFrom(ctx); }

void GuavaParser::ReturnAllMatchOptionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnAllMatchOption(this);
}
void GuavaParser::ReturnAllMatchOptionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnAllMatchOption(this);
}

std::any GuavaParser::ReturnAllMatchOptionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitReturnAllMatchOption(this);
  else
    return visitor->visitChildren(this);
}
GuavaParser::MatchOptions_Context* GuavaParser::matchOptions_() {
  MatchOptions_Context *_localctx = _tracker.createInstance<MatchOptions_Context>(_ctx, getState());
  enterRule(_localctx, 52, GuavaParser::RuleMatchOptions_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<GuavaParser::ReturnAllMatchOptionContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(340);
    match(GuavaParser::Word);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Value_Context ------------------------------------------------------------------

GuavaParser::Value_Context::Value_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GuavaParser::Expression_Context* GuavaParser::Value_Context::expression_() {
  return getRuleContext<GuavaParser::Expression_Context>(0);
}

GuavaParser::LambdaContext* GuavaParser::Value_Context::lambda() {
  return getRuleContext<GuavaParser::LambdaContext>(0);
}


size_t GuavaParser::Value_Context::getRuleIndex() const {
  return GuavaParser::RuleValue_;
}

void GuavaParser::Value_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue_(this);
}

void GuavaParser::Value_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue_(this);
}


std::any GuavaParser::Value_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitValue_(this);
  else
    return visitor->visitChildren(this);
}

GuavaParser::Value_Context* GuavaParser::value_() {
  Value_Context *_localctx = _tracker.createInstance<Value_Context>(_ctx, getState());
  enterRule(_localctx, 54, GuavaParser::RuleValue_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(344);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(342);
      expression_(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(343);
      lambda();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expression_Context ------------------------------------------------------------------

GuavaParser::Expression_Context::Expression_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::Expression_Context::getRuleIndex() const {
  return GuavaParser::RuleExpression_;
}

void GuavaParser::Expression_Context::copyFrom(Expression_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DefaultSuffixExprContext ------------------------------------------------------------------

GuavaParser::HighPrioritySuffix_Context* GuavaParser::DefaultSuffixExprContext::highPrioritySuffix_() {
  return getRuleContext<GuavaParser::HighPrioritySuffix_Context>(0);
}

GuavaParser::LowPrioritySuffix_Context* GuavaParser::DefaultSuffixExprContext::lowPrioritySuffix_() {
  return getRuleContext<GuavaParser::LowPrioritySuffix_Context>(0);
}

GuavaParser::DefaultSuffixExprContext::DefaultSuffixExprContext(Expression_Context *ctx) { copyFrom(ctx); }

void GuavaParser::DefaultSuffixExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultSuffixExpr(this);
}
void GuavaParser::DefaultSuffixExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultSuffixExpr(this);
}

std::any GuavaParser::DefaultSuffixExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitDefaultSuffixExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SuffixExprContext ------------------------------------------------------------------

GuavaParser::Expression_Context* GuavaParser::SuffixExprContext::expression_() {
  return getRuleContext<GuavaParser::Expression_Context>(0);
}

GuavaParser::HighPrioritySuffix_Context* GuavaParser::SuffixExprContext::highPrioritySuffix_() {
  return getRuleContext<GuavaParser::HighPrioritySuffix_Context>(0);
}

GuavaParser::LowPrioritySuffix_Context* GuavaParser::SuffixExprContext::lowPrioritySuffix_() {
  return getRuleContext<GuavaParser::LowPrioritySuffix_Context>(0);
}

GuavaParser::SuffixExprContext::SuffixExprContext(Expression_Context *ctx) { copyFrom(ctx); }

void GuavaParser::SuffixExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSuffixExpr(this);
}
void GuavaParser::SuffixExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSuffixExpr(this);
}

std::any GuavaParser::SuffixExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitSuffixExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OpExpr5Context ------------------------------------------------------------------

std::vector<GuavaParser::Expression_Context *> GuavaParser::OpExpr5Context::expression_() {
  return getRuleContexts<GuavaParser::Expression_Context>();
}

GuavaParser::Expression_Context* GuavaParser::OpExpr5Context::expression_(size_t i) {
  return getRuleContext<GuavaParser::Expression_Context>(i);
}

GuavaParser::Op5_Context* GuavaParser::OpExpr5Context::op5_() {
  return getRuleContext<GuavaParser::Op5_Context>(0);
}

GuavaParser::OpExpr5Context::OpExpr5Context(Expression_Context *ctx) { copyFrom(ctx); }

void GuavaParser::OpExpr5Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpExpr5(this);
}
void GuavaParser::OpExpr5Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpExpr5(this);
}

std::any GuavaParser::OpExpr5Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitOpExpr5(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OpExpr4Context ------------------------------------------------------------------

std::vector<GuavaParser::Expression_Context *> GuavaParser::OpExpr4Context::expression_() {
  return getRuleContexts<GuavaParser::Expression_Context>();
}

GuavaParser::Expression_Context* GuavaParser::OpExpr4Context::expression_(size_t i) {
  return getRuleContext<GuavaParser::Expression_Context>(i);
}

GuavaParser::Op4_Context* GuavaParser::OpExpr4Context::op4_() {
  return getRuleContext<GuavaParser::Op4_Context>(0);
}

GuavaParser::OpExpr4Context::OpExpr4Context(Expression_Context *ctx) { copyFrom(ctx); }

void GuavaParser::OpExpr4Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpExpr4(this);
}
void GuavaParser::OpExpr4Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpExpr4(this);
}

std::any GuavaParser::OpExpr4Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitOpExpr4(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OpExpr3Context ------------------------------------------------------------------

std::vector<GuavaParser::Expression_Context *> GuavaParser::OpExpr3Context::expression_() {
  return getRuleContexts<GuavaParser::Expression_Context>();
}

GuavaParser::Expression_Context* GuavaParser::OpExpr3Context::expression_(size_t i) {
  return getRuleContext<GuavaParser::Expression_Context>(i);
}

GuavaParser::Op3_Context* GuavaParser::OpExpr3Context::op3_() {
  return getRuleContext<GuavaParser::Op3_Context>(0);
}

GuavaParser::OpExpr3Context::OpExpr3Context(Expression_Context *ctx) { copyFrom(ctx); }

void GuavaParser::OpExpr3Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpExpr3(this);
}
void GuavaParser::OpExpr3Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpExpr3(this);
}

std::any GuavaParser::OpExpr3Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitOpExpr3(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OpExpr2Context ------------------------------------------------------------------

std::vector<GuavaParser::Expression_Context *> GuavaParser::OpExpr2Context::expression_() {
  return getRuleContexts<GuavaParser::Expression_Context>();
}

GuavaParser::Expression_Context* GuavaParser::OpExpr2Context::expression_(size_t i) {
  return getRuleContext<GuavaParser::Expression_Context>(i);
}

GuavaParser::Op2_Context* GuavaParser::OpExpr2Context::op2_() {
  return getRuleContext<GuavaParser::Op2_Context>(0);
}

GuavaParser::OpExpr2Context::OpExpr2Context(Expression_Context *ctx) { copyFrom(ctx); }

void GuavaParser::OpExpr2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpExpr2(this);
}
void GuavaParser::OpExpr2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpExpr2(this);
}

std::any GuavaParser::OpExpr2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitOpExpr2(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AccessExpr_Context ------------------------------------------------------------------

GuavaParser::Identifyer_Context* GuavaParser::AccessExpr_Context::identifyer_() {
  return getRuleContext<GuavaParser::Identifyer_Context>(0);
}

GuavaParser::AccessExpr_Context::AccessExpr_Context(Expression_Context *ctx) { copyFrom(ctx); }

void GuavaParser::AccessExpr_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessExpr_(this);
}
void GuavaParser::AccessExpr_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessExpr_(this);
}

std::any GuavaParser::AccessExpr_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitAccessExpr_(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OpExpr1Context ------------------------------------------------------------------

std::vector<GuavaParser::Expression_Context *> GuavaParser::OpExpr1Context::expression_() {
  return getRuleContexts<GuavaParser::Expression_Context>();
}

GuavaParser::Expression_Context* GuavaParser::OpExpr1Context::expression_(size_t i) {
  return getRuleContext<GuavaParser::Expression_Context>(i);
}

GuavaParser::Op1_Context* GuavaParser::OpExpr1Context::op1_() {
  return getRuleContext<GuavaParser::Op1_Context>(0);
}

GuavaParser::OpExpr1Context::OpExpr1Context(Expression_Context *ctx) { copyFrom(ctx); }

void GuavaParser::OpExpr1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpExpr1(this);
}
void GuavaParser::OpExpr1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpExpr1(this);
}

std::any GuavaParser::OpExpr1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitOpExpr1(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExprContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::ParenExprContext::Lpar() {
  return getToken(GuavaParser::Lpar, 0);
}

GuavaParser::Expression_Context* GuavaParser::ParenExprContext::expression_() {
  return getRuleContext<GuavaParser::Expression_Context>(0);
}

tree::TerminalNode* GuavaParser::ParenExprContext::Rpar() {
  return getToken(GuavaParser::Rpar, 0);
}

GuavaParser::ParenExprContext::ParenExprContext(Expression_Context *ctx) { copyFrom(ctx); }

void GuavaParser::ParenExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenExpr(this);
}
void GuavaParser::ParenExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenExpr(this);
}

std::any GuavaParser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LitExpr_Context ------------------------------------------------------------------

GuavaParser::Literal_Context* GuavaParser::LitExpr_Context::literal_() {
  return getRuleContext<GuavaParser::Literal_Context>(0);
}

GuavaParser::LitExpr_Context::LitExpr_Context(Expression_Context *ctx) { copyFrom(ctx); }

void GuavaParser::LitExpr_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLitExpr_(this);
}
void GuavaParser::LitExpr_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLitExpr_(this);
}

std::any GuavaParser::LitExpr_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitLitExpr_(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrefixExprContext ------------------------------------------------------------------

GuavaParser::Prefix_Context* GuavaParser::PrefixExprContext::prefix_() {
  return getRuleContext<GuavaParser::Prefix_Context>(0);
}

GuavaParser::Expression_Context* GuavaParser::PrefixExprContext::expression_() {
  return getRuleContext<GuavaParser::Expression_Context>(0);
}

GuavaParser::PrefixExprContext::PrefixExprContext(Expression_Context *ctx) { copyFrom(ctx); }

void GuavaParser::PrefixExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixExpr(this);
}
void GuavaParser::PrefixExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixExpr(this);
}

std::any GuavaParser::PrefixExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitPrefixExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DerefExprContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::DerefExprContext::Fslash() {
  return getToken(GuavaParser::Fslash, 0);
}

GuavaParser::Identifyer_Context* GuavaParser::DerefExprContext::identifyer_() {
  return getRuleContext<GuavaParser::Identifyer_Context>(0);
}

GuavaParser::DerefExprContext::DerefExprContext(Expression_Context *ctx) { copyFrom(ctx); }

void GuavaParser::DerefExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDerefExpr(this);
}
void GuavaParser::DerefExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDerefExpr(this);
}

std::any GuavaParser::DerefExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitDerefExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OpExpr6Context ------------------------------------------------------------------

std::vector<GuavaParser::Expression_Context *> GuavaParser::OpExpr6Context::expression_() {
  return getRuleContexts<GuavaParser::Expression_Context>();
}

GuavaParser::Expression_Context* GuavaParser::OpExpr6Context::expression_(size_t i) {
  return getRuleContext<GuavaParser::Expression_Context>(i);
}

GuavaParser::Op6_Context* GuavaParser::OpExpr6Context::op6_() {
  return getRuleContext<GuavaParser::Op6_Context>(0);
}

GuavaParser::OpExpr6Context::OpExpr6Context(Expression_Context *ctx) { copyFrom(ctx); }

void GuavaParser::OpExpr6Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpExpr6(this);
}
void GuavaParser::OpExpr6Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpExpr6(this);
}

std::any GuavaParser::OpExpr6Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitOpExpr6(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignExprContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::AssignExprContext::Lpar() {
  return getToken(GuavaParser::Lpar, 0);
}

GuavaParser::Assign_Context* GuavaParser::AssignExprContext::assign_() {
  return getRuleContext<GuavaParser::Assign_Context>(0);
}

tree::TerminalNode* GuavaParser::AssignExprContext::Rpar() {
  return getToken(GuavaParser::Rpar, 0);
}

GuavaParser::AssignExprContext::AssignExprContext(Expression_Context *ctx) { copyFrom(ctx); }

void GuavaParser::AssignExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignExpr(this);
}
void GuavaParser::AssignExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignExpr(this);
}

std::any GuavaParser::AssignExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitAssignExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FnCallExpr_Context ------------------------------------------------------------------

GuavaParser::FnCallContext* GuavaParser::FnCallExpr_Context::fnCall() {
  return getRuleContext<GuavaParser::FnCallContext>(0);
}

GuavaParser::FnCallExpr_Context::FnCallExpr_Context(Expression_Context *ctx) { copyFrom(ctx); }

void GuavaParser::FnCallExpr_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFnCallExpr_(this);
}
void GuavaParser::FnCallExpr_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFnCallExpr_(this);
}

std::any GuavaParser::FnCallExpr_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitFnCallExpr_(this);
  else
    return visitor->visitChildren(this);
}

GuavaParser::Expression_Context* GuavaParser::expression_() {
   return expression_(0);
}

GuavaParser::Expression_Context* GuavaParser::expression_(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GuavaParser::Expression_Context *_localctx = _tracker.createInstance<Expression_Context>(_ctx, parentState);
  GuavaParser::Expression_Context *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 56;
  enterRecursionRule(_localctx, 56, GuavaParser::RuleExpression_, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(365);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<LitExpr_Context>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(347);
      literal_();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(348);
      match(GuavaParser::Lpar);
      setState(349);
      expression_(0);
      setState(350);
      match(GuavaParser::Rpar);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<AssignExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(352);
      match(GuavaParser::Lpar);
      setState(353);
      assign_();
      setState(354);
      match(GuavaParser::Rpar);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<PrefixExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(356);
      prefix_();
      setState(357);
      expression_(14);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<DefaultSuffixExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(359);
      highPrioritySuffix_();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<DefaultSuffixExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(360);
      lowPrioritySuffix_();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<DerefExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(361);
      match(GuavaParser::Fslash);
      setState(362);
      identifyer_(0);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<AccessExpr_Context>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(363);
      identifyer_(0);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<FnCallExpr_Context>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(364);
      fnCall();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(397);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(395);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<OpExpr1Context>(_tracker.createInstance<Expression_Context>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression_);
          setState(367);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(368);
          op1_();
          setState(369);
          expression_(12);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<OpExpr2Context>(_tracker.createInstance<Expression_Context>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression_);
          setState(371);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(372);
          op2_();
          setState(373);
          expression_(11);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<OpExpr3Context>(_tracker.createInstance<Expression_Context>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression_);
          setState(375);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(376);
          op3_();
          setState(377);
          expression_(10);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<OpExpr4Context>(_tracker.createInstance<Expression_Context>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression_);
          setState(379);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(380);
          op4_();
          setState(381);
          expression_(9);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<OpExpr5Context>(_tracker.createInstance<Expression_Context>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression_);
          setState(383);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(384);
          op5_();
          setState(385);
          expression_(8);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<OpExpr6Context>(_tracker.createInstance<Expression_Context>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression_);
          setState(387);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(388);
          op6_();
          setState(389);
          expression_(7);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<SuffixExprContext>(_tracker.createInstance<Expression_Context>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression_);
          setState(391);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(392);
          highPrioritySuffix_();
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<SuffixExprContext>(_tracker.createInstance<Expression_Context>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression_);
          setState(393);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(394);
          lowPrioritySuffix_();
          break;
        }

        default:
          break;
        } 
      }
      setState(399);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Identifyer_Context ------------------------------------------------------------------

GuavaParser::Identifyer_Context::Identifyer_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::Identifyer_Context::getRuleIndex() const {
  return GuavaParser::RuleIdentifyer_;
}

void GuavaParser::Identifyer_Context::copyFrom(Identifyer_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FnCallChainAccessContext ------------------------------------------------------------------

GuavaParser::Identifyer_Context* GuavaParser::FnCallChainAccessContext::identifyer_() {
  return getRuleContext<GuavaParser::Identifyer_Context>(0);
}

tree::TerminalNode* GuavaParser::FnCallChainAccessContext::Lpar() {
  return getToken(GuavaParser::Lpar, 0);
}

tree::TerminalNode* GuavaParser::FnCallChainAccessContext::Rpar() {
  return getToken(GuavaParser::Rpar, 0);
}

GuavaParser::IdentifyerChain_Context* GuavaParser::FnCallChainAccessContext::identifyerChain_() {
  return getRuleContext<GuavaParser::IdentifyerChain_Context>(0);
}

GuavaParser::ArgsContext* GuavaParser::FnCallChainAccessContext::args() {
  return getRuleContext<GuavaParser::ArgsContext>(0);
}

GuavaParser::FnCallChainAccessContext::FnCallChainAccessContext(Identifyer_Context *ctx) { copyFrom(ctx); }

void GuavaParser::FnCallChainAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFnCallChainAccess(this);
}
void GuavaParser::FnCallChainAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFnCallChainAccess(this);
}

std::any GuavaParser::FnCallChainAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitFnCallChainAccess(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdAccessContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::IdAccessContext::Id() {
  return getToken(GuavaParser::Id, 0);
}

GuavaParser::IdAccessContext::IdAccessContext(Identifyer_Context *ctx) { copyFrom(ctx); }

void GuavaParser::IdAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdAccess(this);
}
void GuavaParser::IdAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdAccess(this);
}

std::any GuavaParser::IdAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitIdAccess(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IncludeIdAccessContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::IncludeIdAccessContext::Id() {
  return getToken(GuavaParser::Id, 0);
}

tree::TerminalNode* GuavaParser::IncludeIdAccessContext::ColonColon() {
  return getToken(GuavaParser::ColonColon, 0);
}

GuavaParser::Identifyer_Context* GuavaParser::IncludeIdAccessContext::identifyer_() {
  return getRuleContext<GuavaParser::Identifyer_Context>(0);
}

GuavaParser::IncludeIdAccessContext::IncludeIdAccessContext(Identifyer_Context *ctx) { copyFrom(ctx); }

void GuavaParser::IncludeIdAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncludeIdAccess(this);
}
void GuavaParser::IncludeIdAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncludeIdAccess(this);
}

std::any GuavaParser::IncludeIdAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitIncludeIdAccess(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DefaultAccessContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::DefaultAccessContext::DefId() {
  return getToken(GuavaParser::DefId, 0);
}

GuavaParser::DefaultAccessContext::DefaultAccessContext(Identifyer_Context *ctx) { copyFrom(ctx); }

void GuavaParser::DefaultAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultAccess(this);
}
void GuavaParser::DefaultAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultAccess(this);
}

std::any GuavaParser::DefaultAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitDefaultAccess(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdReferenceContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::IdReferenceContext::AndSign() {
  return getToken(GuavaParser::AndSign, 0);
}

GuavaParser::Identifyer_Context* GuavaParser::IdReferenceContext::identifyer_() {
  return getRuleContext<GuavaParser::Identifyer_Context>(0);
}

GuavaParser::IdReferenceContext::IdReferenceContext(Identifyer_Context *ctx) { copyFrom(ctx); }

void GuavaParser::IdReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdReference(this);
}
void GuavaParser::IdReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdReference(this);
}

std::any GuavaParser::IdReferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitIdReference(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ChainAccessContext ------------------------------------------------------------------

GuavaParser::Literal_Context* GuavaParser::ChainAccessContext::literal_() {
  return getRuleContext<GuavaParser::Literal_Context>(0);
}

GuavaParser::IdentifyerChain_Context* GuavaParser::ChainAccessContext::identifyerChain_() {
  return getRuleContext<GuavaParser::IdentifyerChain_Context>(0);
}

GuavaParser::Identifyer_Context* GuavaParser::ChainAccessContext::identifyer_() {
  return getRuleContext<GuavaParser::Identifyer_Context>(0);
}

GuavaParser::ChainAccessContext::ChainAccessContext(Identifyer_Context *ctx) { copyFrom(ctx); }

void GuavaParser::ChainAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChainAccess(this);
}
void GuavaParser::ChainAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChainAccess(this);
}

std::any GuavaParser::ChainAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitChainAccess(this);
  else
    return visitor->visitChildren(this);
}

GuavaParser::Identifyer_Context* GuavaParser::identifyer_() {
   return identifyer_(0);
}

GuavaParser::Identifyer_Context* GuavaParser::identifyer_(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GuavaParser::Identifyer_Context *_localctx = _tracker.createInstance<Identifyer_Context>(_ctx, parentState);
  GuavaParser::Identifyer_Context *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 58;
  enterRecursionRule(_localctx, 58, GuavaParser::RuleIdentifyer_, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(411);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ChainAccessContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(401);
      literal_();
      setState(402);
      identifyerChain_();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<IdAccessContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(404);
      match(GuavaParser::Id);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<IncludeIdAccessContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(405);
      match(GuavaParser::Id);
      setState(406);
      match(GuavaParser::ColonColon);
      setState(407);
      identifyer_(3);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<DefaultAccessContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(408);
      match(GuavaParser::DefId);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<IdReferenceContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(409);
      match(GuavaParser::AndSign);
      setState(410);
      identifyer_(1);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(424);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(422);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ChainAccessContext>(_tracker.createInstance<Identifyer_Context>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleIdentifyer_);
          setState(413);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(414);
          identifyerChain_();
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<FnCallChainAccessContext>(_tracker.createInstance<Identifyer_Context>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleIdentifyer_);
          setState(415);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(416);
          match(GuavaParser::Lpar);
          setState(418);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 144854095339913218) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 70)) & 66593) != 0)) {
            setState(417);
            args();
          }
          setState(420);
          match(GuavaParser::Rpar);
          setState(421);
          identifyerChain_();
          break;
        }

        default:
          break;
        } 
      }
      setState(426);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- IdentifyerChain_Context ------------------------------------------------------------------

GuavaParser::IdentifyerChain_Context::IdentifyerChain_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::IdentifyerChain_Context::getRuleIndex() const {
  return GuavaParser::RuleIdentifyerChain_;
}

void GuavaParser::IdentifyerChain_Context::copyFrom(IdentifyerChain_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DotAccessContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::DotAccessContext::Dot() {
  return getToken(GuavaParser::Dot, 0);
}

tree::TerminalNode* GuavaParser::DotAccessContext::Id() {
  return getToken(GuavaParser::Id, 0);
}

GuavaParser::DotAccessContext::DotAccessContext(IdentifyerChain_Context *ctx) { copyFrom(ctx); }

void GuavaParser::DotAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDotAccess(this);
}
void GuavaParser::DotAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDotAccess(this);
}

std::any GuavaParser::DotAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitDotAccess(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrExprAccessContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::ArrExprAccessContext::Lbrack() {
  return getToken(GuavaParser::Lbrack, 0);
}

GuavaParser::Expression_Context* GuavaParser::ArrExprAccessContext::expression_() {
  return getRuleContext<GuavaParser::Expression_Context>(0);
}

tree::TerminalNode* GuavaParser::ArrExprAccessContext::Rbrack() {
  return getToken(GuavaParser::Rbrack, 0);
}

GuavaParser::ArrExprAccessContext::ArrExprAccessContext(IdentifyerChain_Context *ctx) { copyFrom(ctx); }

void GuavaParser::ArrExprAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrExprAccess(this);
}
void GuavaParser::ArrExprAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrExprAccess(this);
}

std::any GuavaParser::ArrExprAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitArrExprAccess(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrArgsAccessContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::ArrArgsAccessContext::Lbrack() {
  return getToken(GuavaParser::Lbrack, 0);
}

GuavaParser::ArgsContext* GuavaParser::ArrArgsAccessContext::args() {
  return getRuleContext<GuavaParser::ArgsContext>(0);
}

tree::TerminalNode* GuavaParser::ArrArgsAccessContext::Rbrack() {
  return getToken(GuavaParser::Rbrack, 0);
}

GuavaParser::ArrArgsAccessContext::ArrArgsAccessContext(IdentifyerChain_Context *ctx) { copyFrom(ctx); }

void GuavaParser::ArrArgsAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrArgsAccess(this);
}
void GuavaParser::ArrArgsAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrArgsAccess(this);
}

std::any GuavaParser::ArrArgsAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitArrArgsAccess(this);
  else
    return visitor->visitChildren(this);
}
GuavaParser::IdentifyerChain_Context* GuavaParser::identifyerChain_() {
  IdentifyerChain_Context *_localctx = _tracker.createInstance<IdentifyerChain_Context>(_ctx, getState());
  enterRule(_localctx, 60, GuavaParser::RuleIdentifyerChain_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(437);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<GuavaParser::DotAccessContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(427);
      match(GuavaParser::Dot);
      setState(428);
      match(GuavaParser::Id);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<GuavaParser::ArrExprAccessContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(429);
      match(GuavaParser::Lbrack);
      setState(430);
      expression_(0);
      setState(431);
      match(GuavaParser::Rbrack);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<GuavaParser::ArrArgsAccessContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(433);
      match(GuavaParser::Lbrack);
      setState(434);
      args();
      setState(435);
      match(GuavaParser::Rbrack);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FnCallContext ------------------------------------------------------------------

GuavaParser::FnCallContext::FnCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GuavaParser::Identifyer_Context* GuavaParser::FnCallContext::identifyer_() {
  return getRuleContext<GuavaParser::Identifyer_Context>(0);
}

GuavaParser::ArgsContext* GuavaParser::FnCallContext::args() {
  return getRuleContext<GuavaParser::ArgsContext>(0);
}

tree::TerminalNode* GuavaParser::FnCallContext::Lpar() {
  return getToken(GuavaParser::Lpar, 0);
}

tree::TerminalNode* GuavaParser::FnCallContext::Rpar() {
  return getToken(GuavaParser::Rpar, 0);
}


size_t GuavaParser::FnCallContext::getRuleIndex() const {
  return GuavaParser::RuleFnCall;
}

void GuavaParser::FnCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFnCall(this);
}

void GuavaParser::FnCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFnCall(this);
}


std::any GuavaParser::FnCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitFnCall(this);
  else
    return visitor->visitChildren(this);
}

GuavaParser::FnCallContext* GuavaParser::fnCall() {
  FnCallContext *_localctx = _tracker.createInstance<FnCallContext>(_ctx, getState());
  enterRule(_localctx, 62, GuavaParser::RuleFnCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(449);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(439);
      identifyer_(0);
      setState(440);
      args();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(442);
      identifyer_(0);
      setState(443);
      match(GuavaParser::Lpar);
      setState(445);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 144854095339913218) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 70)) & 66593) != 0)) {
        setState(444);
        args();
      }
      setState(447);
      match(GuavaParser::Rpar);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Literal_Context ------------------------------------------------------------------

GuavaParser::Literal_Context::Literal_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::Literal_Context::getRuleIndex() const {
  return GuavaParser::RuleLiteral_;
}

void GuavaParser::Literal_Context::copyFrom(Literal_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ArrayLitContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::ArrayLitContext::Lbrack() {
  return getToken(GuavaParser::Lbrack, 0);
}

std::vector<GuavaParser::ArgsContext *> GuavaParser::ArrayLitContext::args() {
  return getRuleContexts<GuavaParser::ArgsContext>();
}

GuavaParser::ArgsContext* GuavaParser::ArrayLitContext::args(size_t i) {
  return getRuleContext<GuavaParser::ArgsContext>(i);
}

tree::TerminalNode* GuavaParser::ArrayLitContext::Rbrack() {
  return getToken(GuavaParser::Rbrack, 0);
}

std::vector<tree::TerminalNode *> GuavaParser::ArrayLitContext::Semi() {
  return getTokens(GuavaParser::Semi);
}

tree::TerminalNode* GuavaParser::ArrayLitContext::Semi(size_t i) {
  return getToken(GuavaParser::Semi, i);
}

GuavaParser::ArrayLitContext::ArrayLitContext(Literal_Context *ctx) { copyFrom(ctx); }

void GuavaParser::ArrayLitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayLit(this);
}
void GuavaParser::ArrayLitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayLit(this);
}

std::any GuavaParser::ArrayLitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitArrayLit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SStringLitContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::SStringLitContext::StringLit() {
  return getToken(GuavaParser::StringLit, 0);
}

GuavaParser::SStringLitContext::SStringLitContext(Literal_Context *ctx) { copyFrom(ctx); }

void GuavaParser::SStringLitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSStringLit(this);
}
void GuavaParser::SStringLitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSStringLit(this);
}

std::any GuavaParser::SStringLitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitSStringLit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- KeywordLit_Context ------------------------------------------------------------------

GuavaParser::KeywordLiteral_Context* GuavaParser::KeywordLit_Context::keywordLiteral_() {
  return getRuleContext<GuavaParser::KeywordLiteral_Context>(0);
}

GuavaParser::KeywordLit_Context::KeywordLit_Context(Literal_Context *ctx) { copyFrom(ctx); }

void GuavaParser::KeywordLit_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeywordLit_(this);
}
void GuavaParser::KeywordLit_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeywordLit_(this);
}

std::any GuavaParser::KeywordLit_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitKeywordLit_(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MatrixLitContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::MatrixLitContext::Lbrace() {
  return getToken(GuavaParser::Lbrace, 0);
}

std::vector<GuavaParser::ArgsContext *> GuavaParser::MatrixLitContext::args() {
  return getRuleContexts<GuavaParser::ArgsContext>();
}

GuavaParser::ArgsContext* GuavaParser::MatrixLitContext::args(size_t i) {
  return getRuleContext<GuavaParser::ArgsContext>(i);
}

tree::TerminalNode* GuavaParser::MatrixLitContext::Rbrace() {
  return getToken(GuavaParser::Rbrace, 0);
}

std::vector<tree::TerminalNode *> GuavaParser::MatrixLitContext::Semi() {
  return getTokens(GuavaParser::Semi);
}

tree::TerminalNode* GuavaParser::MatrixLitContext::Semi(size_t i) {
  return getToken(GuavaParser::Semi, i);
}

GuavaParser::MatrixLitContext::MatrixLitContext(Literal_Context *ctx) { copyFrom(ctx); }

void GuavaParser::MatrixLitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatrixLit(this);
}
void GuavaParser::MatrixLitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatrixLit(this);
}

std::any GuavaParser::MatrixLitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitMatrixLit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumLitContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::NumLitContext::Number() {
  return getToken(GuavaParser::Number, 0);
}

GuavaParser::NumLitContext::NumLitContext(Literal_Context *ctx) { copyFrom(ctx); }

void GuavaParser::NumLitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumLit(this);
}
void GuavaParser::NumLitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumLit(this);
}

std::any GuavaParser::NumLitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitNumLit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- HashLitContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::HashLitContext::Lbrace() {
  return getToken(GuavaParser::Lbrace, 0);
}

tree::TerminalNode* GuavaParser::HashLitContext::Rbrace() {
  return getToken(GuavaParser::Rbrace, 0);
}

std::vector<GuavaParser::Pair_Context *> GuavaParser::HashLitContext::pair_() {
  return getRuleContexts<GuavaParser::Pair_Context>();
}

GuavaParser::Pair_Context* GuavaParser::HashLitContext::pair_(size_t i) {
  return getRuleContext<GuavaParser::Pair_Context>(i);
}

std::vector<tree::TerminalNode *> GuavaParser::HashLitContext::Com() {
  return getTokens(GuavaParser::Com);
}

tree::TerminalNode* GuavaParser::HashLitContext::Com(size_t i) {
  return getToken(GuavaParser::Com, i);
}

GuavaParser::HashLitContext::HashLitContext(Literal_Context *ctx) { copyFrom(ctx); }

void GuavaParser::HashLitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHashLit(this);
}
void GuavaParser::HashLitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHashLit(this);
}

std::any GuavaParser::HashLitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitHashLit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DStringLitContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::DStringLitContext::String() {
  return getToken(GuavaParser::String, 0);
}

GuavaParser::DStringLitContext::DStringLitContext(Literal_Context *ctx) { copyFrom(ctx); }

void GuavaParser::DStringLitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDStringLit(this);
}
void GuavaParser::DStringLitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDStringLit(this);
}

std::any GuavaParser::DStringLitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitDStringLit(this);
  else
    return visitor->visitChildren(this);
}
GuavaParser::Literal_Context* GuavaParser::literal_() {
  Literal_Context *_localctx = _tracker.createInstance<Literal_Context>(_ctx, getState());
  enterRule(_localctx, 64, GuavaParser::RuleLiteral_);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(498);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<GuavaParser::KeywordLit_Context>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(451);
      keywordLiteral_();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<GuavaParser::DStringLitContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(452);
      match(GuavaParser::String);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<GuavaParser::SStringLitContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(453);
      match(GuavaParser::StringLit);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<GuavaParser::ArrayLitContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(454);
      match(GuavaParser::Lbrack);
      setState(455);
      args();
      setState(460);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(456);
          match(GuavaParser::Semi);
          setState(457);
          args(); 
        }
        setState(462);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
      }
      setState(464);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == GuavaParser::Semi) {
        setState(463);
        match(GuavaParser::Semi);
      }
      setState(466);
      match(GuavaParser::Rbrack);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<GuavaParser::HashLitContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(468);
      match(GuavaParser::Lbrace);
      setState(480);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 14680064) != 0)) {
        setState(469);
        pair_();
        setState(474);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(470);
            match(GuavaParser::Com);
            setState(471);
            pair_(); 
          }
          setState(476);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
        }
        setState(478);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == GuavaParser::Com) {
          setState(477);
          match(GuavaParser::Com);
        }
      }
      setState(482);
      match(GuavaParser::Rbrace);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<GuavaParser::MatrixLitContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(483);
      match(GuavaParser::Lbrace);
      setState(484);
      args();
      setState(489);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(485);
          match(GuavaParser::Semi);
          setState(486);
          args(); 
        }
        setState(491);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx);
      }
      setState(493);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == GuavaParser::Semi) {
        setState(492);
        match(GuavaParser::Semi);
      }
      setState(495);
      match(GuavaParser::Rbrace);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<GuavaParser::NumLitContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(497);
      match(GuavaParser::Number);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Pair_Context ------------------------------------------------------------------

GuavaParser::Pair_Context::Pair_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::Pair_Context::getRuleIndex() const {
  return GuavaParser::RulePair_;
}

void GuavaParser::Pair_Context::copyFrom(Pair_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PairValueContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::PairValueContext::Colon() {
  return getToken(GuavaParser::Colon, 0);
}

GuavaParser::Value_Context* GuavaParser::PairValueContext::value_() {
  return getRuleContext<GuavaParser::Value_Context>(0);
}

tree::TerminalNode* GuavaParser::PairValueContext::Id() {
  return getToken(GuavaParser::Id, 0);
}

tree::TerminalNode* GuavaParser::PairValueContext::String() {
  return getToken(GuavaParser::String, 0);
}

tree::TerminalNode* GuavaParser::PairValueContext::StringLit() {
  return getToken(GuavaParser::StringLit, 0);
}

GuavaParser::PairValueContext::PairValueContext(Pair_Context *ctx) { copyFrom(ctx); }

void GuavaParser::PairValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPairValue(this);
}
void GuavaParser::PairValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPairValue(this);
}

std::any GuavaParser::PairValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitPairValue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PairArgsContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::PairArgsContext::Colon() {
  return getToken(GuavaParser::Colon, 0);
}

GuavaParser::ArgsContext* GuavaParser::PairArgsContext::args() {
  return getRuleContext<GuavaParser::ArgsContext>(0);
}

tree::TerminalNode* GuavaParser::PairArgsContext::Id() {
  return getToken(GuavaParser::Id, 0);
}

tree::TerminalNode* GuavaParser::PairArgsContext::String() {
  return getToken(GuavaParser::String, 0);
}

tree::TerminalNode* GuavaParser::PairArgsContext::StringLit() {
  return getToken(GuavaParser::StringLit, 0);
}

GuavaParser::PairArgsContext::PairArgsContext(Pair_Context *ctx) { copyFrom(ctx); }

void GuavaParser::PairArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPairArgs(this);
}
void GuavaParser::PairArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPairArgs(this);
}

std::any GuavaParser::PairArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitPairArgs(this);
  else
    return visitor->visitChildren(this);
}
GuavaParser::Pair_Context* GuavaParser::pair_() {
  Pair_Context *_localctx = _tracker.createInstance<Pair_Context>(_ctx, getState());
  enterRule(_localctx, 66, GuavaParser::RulePair_);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(512);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<GuavaParser::PairValueContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(502);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case GuavaParser::Id: {
          setState(500);
          match(GuavaParser::Id);
          break;
        }

        case GuavaParser::String:
        case GuavaParser::StringLit: {
          setState(501);
          antlrcpp::downCast<PairValueContext *>(_localctx)->Key = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == GuavaParser::String

          || _la == GuavaParser::StringLit)) {
            antlrcpp::downCast<PairValueContext *>(_localctx)->Key = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(504);
      match(GuavaParser::Colon);
      setState(505);
      value_();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<GuavaParser::PairArgsContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(508);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case GuavaParser::Id: {
          setState(506);
          match(GuavaParser::Id);
          break;
        }

        case GuavaParser::String:
        case GuavaParser::StringLit: {
          setState(507);
          antlrcpp::downCast<PairArgsContext *>(_localctx)->Key = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == GuavaParser::String

          || _la == GuavaParser::StringLit)) {
            antlrcpp::downCast<PairArgsContext *>(_localctx)->Key = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(510);
      match(GuavaParser::Colon);
      setState(511);
      args();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeywordLiteral_Context ------------------------------------------------------------------

GuavaParser::KeywordLiteral_Context::KeywordLiteral_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::KeywordLiteral_Context::getRuleIndex() const {
  return GuavaParser::RuleKeywordLiteral_;
}

void GuavaParser::KeywordLiteral_Context::copyFrom(KeywordLiteral_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TrueLitContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::TrueLitContext::True() {
  return getToken(GuavaParser::True, 0);
}

GuavaParser::TrueLitContext::TrueLitContext(KeywordLiteral_Context *ctx) { copyFrom(ctx); }

void GuavaParser::TrueLitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTrueLit(this);
}
void GuavaParser::TrueLitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTrueLit(this);
}

std::any GuavaParser::TrueLitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitTrueLit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FalseLitContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::FalseLitContext::False() {
  return getToken(GuavaParser::False, 0);
}

GuavaParser::FalseLitContext::FalseLitContext(KeywordLiteral_Context *ctx) { copyFrom(ctx); }

void GuavaParser::FalseLitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFalseLit(this);
}
void GuavaParser::FalseLitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFalseLit(this);
}

std::any GuavaParser::FalseLitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitFalseLit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NullLitContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::NullLitContext::Null() {
  return getToken(GuavaParser::Null, 0);
}

GuavaParser::NullLitContext::NullLitContext(KeywordLiteral_Context *ctx) { copyFrom(ctx); }

void GuavaParser::NullLitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNullLit(this);
}
void GuavaParser::NullLitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNullLit(this);
}

std::any GuavaParser::NullLitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitNullLit(this);
  else
    return visitor->visitChildren(this);
}
GuavaParser::KeywordLiteral_Context* GuavaParser::keywordLiteral_() {
  KeywordLiteral_Context *_localctx = _tracker.createInstance<KeywordLiteral_Context>(_ctx, getState());
  enterRule(_localctx, 68, GuavaParser::RuleKeywordLiteral_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(517);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GuavaParser::True: {
        _localctx = _tracker.createInstance<GuavaParser::TrueLitContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(514);
        match(GuavaParser::True);
        break;
      }

      case GuavaParser::False: {
        _localctx = _tracker.createInstance<GuavaParser::FalseLitContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(515);
        match(GuavaParser::False);
        break;
      }

      case GuavaParser::Null: {
        _localctx = _tracker.createInstance<GuavaParser::NullLitContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(516);
        match(GuavaParser::Null);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assign_Context ------------------------------------------------------------------

GuavaParser::Assign_Context::Assign_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::Assign_Context::getRuleIndex() const {
  return GuavaParser::RuleAssign_;
}

void GuavaParser::Assign_Context::copyFrom(Assign_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MinAssignContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::MinAssignContext::MinEq() {
  return getToken(GuavaParser::MinEq, 0);
}

GuavaParser::Expression_Context* GuavaParser::MinAssignContext::expression_() {
  return getRuleContext<GuavaParser::Expression_Context>(0);
}

GuavaParser::Identifyer_Context* GuavaParser::MinAssignContext::identifyer_() {
  return getRuleContext<GuavaParser::Identifyer_Context>(0);
}

GuavaParser::MinAssignContext::MinAssignContext(Assign_Context *ctx) { copyFrom(ctx); }

void GuavaParser::MinAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMinAssign(this);
}
void GuavaParser::MinAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMinAssign(this);
}

std::any GuavaParser::MinAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitMinAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SetRefAssignContext ------------------------------------------------------------------

GuavaParser::Identifyer_Context* GuavaParser::SetRefAssignContext::identifyer_() {
  return getRuleContext<GuavaParser::Identifyer_Context>(0);
}

tree::TerminalNode* GuavaParser::SetRefAssignContext::RLarrow() {
  return getToken(GuavaParser::RLarrow, 0);
}

GuavaParser::Value_Context* GuavaParser::SetRefAssignContext::value_() {
  return getRuleContext<GuavaParser::Value_Context>(0);
}

GuavaParser::SetRefAssignContext::SetRefAssignContext(Assign_Context *ctx) { copyFrom(ctx); }

void GuavaParser::SetRefAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetRefAssign(this);
}
void GuavaParser::SetRefAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetRefAssign(this);
}

std::any GuavaParser::SetRefAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitSetRefAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclareAssignContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::DeclareAssignContext::Decl() {
  return getToken(GuavaParser::Decl, 0);
}

std::vector<GuavaParser::VarDeclare_Context *> GuavaParser::DeclareAssignContext::varDeclare_() {
  return getRuleContexts<GuavaParser::VarDeclare_Context>();
}

GuavaParser::VarDeclare_Context* GuavaParser::DeclareAssignContext::varDeclare_(size_t i) {
  return getRuleContext<GuavaParser::VarDeclare_Context>(i);
}

std::vector<tree::TerminalNode *> GuavaParser::DeclareAssignContext::Com() {
  return getTokens(GuavaParser::Com);
}

tree::TerminalNode* GuavaParser::DeclareAssignContext::Com(size_t i) {
  return getToken(GuavaParser::Com, i);
}

GuavaParser::DeclareAssignContext::DeclareAssignContext(Assign_Context *ctx) { copyFrom(ctx); }

void GuavaParser::DeclareAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclareAssign(this);
}
void GuavaParser::DeclareAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclareAssign(this);
}

std::any GuavaParser::DeclareAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitDeclareAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqAssignArgsContext ------------------------------------------------------------------

GuavaParser::ArgsContext* GuavaParser::EqAssignArgsContext::args() {
  return getRuleContext<GuavaParser::ArgsContext>(0);
}

std::vector<GuavaParser::Identifyer_Context *> GuavaParser::EqAssignArgsContext::identifyer_() {
  return getRuleContexts<GuavaParser::Identifyer_Context>();
}

GuavaParser::Identifyer_Context* GuavaParser::EqAssignArgsContext::identifyer_(size_t i) {
  return getRuleContext<GuavaParser::Identifyer_Context>(i);
}

std::vector<tree::TerminalNode *> GuavaParser::EqAssignArgsContext::Eq() {
  return getTokens(GuavaParser::Eq);
}

tree::TerminalNode* GuavaParser::EqAssignArgsContext::Eq(size_t i) {
  return getToken(GuavaParser::Eq, i);
}

GuavaParser::EqAssignArgsContext::EqAssignArgsContext(Assign_Context *ctx) { copyFrom(ctx); }

void GuavaParser::EqAssignArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqAssignArgs(this);
}
void GuavaParser::EqAssignArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqAssignArgs(this);
}

std::any GuavaParser::EqAssignArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitEqAssignArgs(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PowAssignContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::PowAssignContext::PowEq() {
  return getToken(GuavaParser::PowEq, 0);
}

GuavaParser::Expression_Context* GuavaParser::PowAssignContext::expression_() {
  return getRuleContext<GuavaParser::Expression_Context>(0);
}

GuavaParser::Identifyer_Context* GuavaParser::PowAssignContext::identifyer_() {
  return getRuleContext<GuavaParser::Identifyer_Context>(0);
}

GuavaParser::PowAssignContext::PowAssignContext(Assign_Context *ctx) { copyFrom(ctx); }

void GuavaParser::PowAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowAssign(this);
}
void GuavaParser::PowAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowAssign(this);
}

std::any GuavaParser::PowAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitPowAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DivAssignContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::DivAssignContext::DivEq() {
  return getToken(GuavaParser::DivEq, 0);
}

GuavaParser::Expression_Context* GuavaParser::DivAssignContext::expression_() {
  return getRuleContext<GuavaParser::Expression_Context>(0);
}

GuavaParser::Identifyer_Context* GuavaParser::DivAssignContext::identifyer_() {
  return getRuleContext<GuavaParser::Identifyer_Context>(0);
}

GuavaParser::DivAssignContext::DivAssignContext(Assign_Context *ctx) { copyFrom(ctx); }

void GuavaParser::DivAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDivAssign(this);
}
void GuavaParser::DivAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDivAssign(this);
}

std::any GuavaParser::DivAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitDivAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultAssignContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::MultAssignContext::MultEq() {
  return getToken(GuavaParser::MultEq, 0);
}

GuavaParser::Expression_Context* GuavaParser::MultAssignContext::expression_() {
  return getRuleContext<GuavaParser::Expression_Context>(0);
}

GuavaParser::Identifyer_Context* GuavaParser::MultAssignContext::identifyer_() {
  return getRuleContext<GuavaParser::Identifyer_Context>(0);
}

GuavaParser::MultAssignContext::MultAssignContext(Assign_Context *ctx) { copyFrom(ctx); }

void GuavaParser::MultAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultAssign(this);
}
void GuavaParser::MultAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultAssign(this);
}

std::any GuavaParser::MultAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitMultAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SetRefAssignArgsContext ------------------------------------------------------------------

GuavaParser::Identifyer_Context* GuavaParser::SetRefAssignArgsContext::identifyer_() {
  return getRuleContext<GuavaParser::Identifyer_Context>(0);
}

tree::TerminalNode* GuavaParser::SetRefAssignArgsContext::RLarrow() {
  return getToken(GuavaParser::RLarrow, 0);
}

GuavaParser::ArgsContext* GuavaParser::SetRefAssignArgsContext::args() {
  return getRuleContext<GuavaParser::ArgsContext>(0);
}

GuavaParser::SetRefAssignArgsContext::SetRefAssignArgsContext(Assign_Context *ctx) { copyFrom(ctx); }

void GuavaParser::SetRefAssignArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetRefAssignArgs(this);
}
void GuavaParser::SetRefAssignArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetRefAssignArgs(this);
}

std::any GuavaParser::SetRefAssignArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitSetRefAssignArgs(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IncremContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::IncremContext::Increm() {
  return getToken(GuavaParser::Increm, 0);
}

GuavaParser::Identifyer_Context* GuavaParser::IncremContext::identifyer_() {
  return getRuleContext<GuavaParser::Identifyer_Context>(0);
}

GuavaParser::IncremContext::IncremContext(Assign_Context *ctx) { copyFrom(ctx); }

void GuavaParser::IncremContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncrem(this);
}
void GuavaParser::IncremContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncrem(this);
}

std::any GuavaParser::IncremContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitIncrem(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqAssignContext ------------------------------------------------------------------

GuavaParser::Value_Context* GuavaParser::EqAssignContext::value_() {
  return getRuleContext<GuavaParser::Value_Context>(0);
}

std::vector<GuavaParser::Identifyer_Context *> GuavaParser::EqAssignContext::identifyer_() {
  return getRuleContexts<GuavaParser::Identifyer_Context>();
}

GuavaParser::Identifyer_Context* GuavaParser::EqAssignContext::identifyer_(size_t i) {
  return getRuleContext<GuavaParser::Identifyer_Context>(i);
}

std::vector<tree::TerminalNode *> GuavaParser::EqAssignContext::Eq() {
  return getTokens(GuavaParser::Eq);
}

tree::TerminalNode* GuavaParser::EqAssignContext::Eq(size_t i) {
  return getToken(GuavaParser::Eq, i);
}

GuavaParser::EqAssignContext::EqAssignContext(Assign_Context *ctx) { copyFrom(ctx); }

void GuavaParser::EqAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqAssign(this);
}
void GuavaParser::EqAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqAssign(this);
}

std::any GuavaParser::EqAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitEqAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DefaultEqAssignContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::DefaultEqAssignContext::Eq() {
  return getToken(GuavaParser::Eq, 0);
}

GuavaParser::Value_Context* GuavaParser::DefaultEqAssignContext::value_() {
  return getRuleContext<GuavaParser::Value_Context>(0);
}

GuavaParser::DefaultEqAssignContext::DefaultEqAssignContext(Assign_Context *ctx) { copyFrom(ctx); }

void GuavaParser::DefaultEqAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultEqAssign(this);
}
void GuavaParser::DefaultEqAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultEqAssign(this);
}

std::any GuavaParser::DefaultEqAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitDefaultEqAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddAssignContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::AddAssignContext::PlusEq() {
  return getToken(GuavaParser::PlusEq, 0);
}

GuavaParser::Expression_Context* GuavaParser::AddAssignContext::expression_() {
  return getRuleContext<GuavaParser::Expression_Context>(0);
}

GuavaParser::Identifyer_Context* GuavaParser::AddAssignContext::identifyer_() {
  return getRuleContext<GuavaParser::Identifyer_Context>(0);
}

GuavaParser::AddAssignContext::AddAssignContext(Assign_Context *ctx) { copyFrom(ctx); }

void GuavaParser::AddAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddAssign(this);
}
void GuavaParser::AddAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddAssign(this);
}

std::any GuavaParser::AddAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitAddAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DecremContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::DecremContext::Decrem() {
  return getToken(GuavaParser::Decrem, 0);
}

GuavaParser::Identifyer_Context* GuavaParser::DecremContext::identifyer_() {
  return getRuleContext<GuavaParser::Identifyer_Context>(0);
}

GuavaParser::DecremContext::DecremContext(Assign_Context *ctx) { copyFrom(ctx); }

void GuavaParser::DecremContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecrem(this);
}
void GuavaParser::DecremContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecrem(this);
}

std::any GuavaParser::DecremContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitDecrem(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModAssignContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::ModAssignContext::ModEq() {
  return getToken(GuavaParser::ModEq, 0);
}

GuavaParser::Expression_Context* GuavaParser::ModAssignContext::expression_() {
  return getRuleContext<GuavaParser::Expression_Context>(0);
}

GuavaParser::Identifyer_Context* GuavaParser::ModAssignContext::identifyer_() {
  return getRuleContext<GuavaParser::Identifyer_Context>(0);
}

GuavaParser::ModAssignContext::ModAssignContext(Assign_Context *ctx) { copyFrom(ctx); }

void GuavaParser::ModAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModAssign(this);
}
void GuavaParser::ModAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModAssign(this);
}

std::any GuavaParser::ModAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitModAssign(this);
  else
    return visitor->visitChildren(this);
}
GuavaParser::Assign_Context* GuavaParser::assign_() {
  Assign_Context *_localctx = _tracker.createInstance<Assign_Context>(_ctx, getState());
  enterRule(_localctx, 70, GuavaParser::RuleAssign_);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(594);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<GuavaParser::DeclareAssignContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(519);
      match(GuavaParser::Decl);
      setState(520);
      varDeclare_();
      setState(525);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(521);
          match(GuavaParser::Com);
          setState(522);
          varDeclare_(); 
        }
        setState(527);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<GuavaParser::EqAssignContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(531); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(528);
                identifyer_(0);
                setState(529);
                match(GuavaParser::Eq);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(533); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(535);
      value_();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<GuavaParser::EqAssignArgsContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(540); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(537);
                identifyer_(0);
                setState(538);
                match(GuavaParser::Eq);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(542); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(544);
      args();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<GuavaParser::SetRefAssignContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(546);
      identifyer_(0);
      setState(547);
      match(GuavaParser::RLarrow);
      setState(548);
      value_();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<GuavaParser::SetRefAssignArgsContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(550);
      identifyer_(0);
      setState(551);
      match(GuavaParser::RLarrow);
      setState(552);
      args();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<GuavaParser::DefaultEqAssignContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(554);
      match(GuavaParser::Eq);
      setState(555);
      value_();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<GuavaParser::PowAssignContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(557);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 16) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 16)) & 18014401193836799) != 0)) {
        setState(556);
        identifyer_(0);
      }
      setState(559);
      match(GuavaParser::PowEq);
      setState(560);
      expression_(0);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<GuavaParser::MultAssignContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(562);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 16) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 16)) & 18014401193836799) != 0)) {
        setState(561);
        identifyer_(0);
      }
      setState(564);
      match(GuavaParser::MultEq);
      setState(565);
      expression_(0);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<GuavaParser::DivAssignContext>(_localctx);
      enterOuterAlt(_localctx, 9);
      setState(567);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 16) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 16)) & 18014401193836799) != 0)) {
        setState(566);
        identifyer_(0);
      }
      setState(569);
      match(GuavaParser::DivEq);
      setState(570);
      expression_(0);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<GuavaParser::ModAssignContext>(_localctx);
      enterOuterAlt(_localctx, 10);
      setState(572);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 16) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 16)) & 18014401193836799) != 0)) {
        setState(571);
        identifyer_(0);
      }
      setState(574);
      match(GuavaParser::ModEq);
      setState(575);
      expression_(0);
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<GuavaParser::AddAssignContext>(_localctx);
      enterOuterAlt(_localctx, 11);
      setState(577);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 16) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 16)) & 18014401193836799) != 0)) {
        setState(576);
        identifyer_(0);
      }
      setState(579);
      match(GuavaParser::PlusEq);
      setState(580);
      expression_(0);
      break;
    }

    case 12: {
      _localctx = _tracker.createInstance<GuavaParser::MinAssignContext>(_localctx);
      enterOuterAlt(_localctx, 12);
      setState(582);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 16) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 16)) & 18014401193836799) != 0)) {
        setState(581);
        identifyer_(0);
      }
      setState(584);
      match(GuavaParser::MinEq);
      setState(585);
      expression_(0);
      break;
    }

    case 13: {
      _localctx = _tracker.createInstance<GuavaParser::IncremContext>(_localctx);
      enterOuterAlt(_localctx, 13);
      setState(587);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 16) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 16)) & 18014401193836799) != 0)) {
        setState(586);
        identifyer_(0);
      }
      setState(589);
      match(GuavaParser::Increm);
      break;
    }

    case 14: {
      _localctx = _tracker.createInstance<GuavaParser::DecremContext>(_localctx);
      enterOuterAlt(_localctx, 14);
      setState(591);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 16) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 16)) & 18014401193836799) != 0)) {
        setState(590);
        identifyer_(0);
      }
      setState(593);
      match(GuavaParser::Decrem);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclare_Context ------------------------------------------------------------------

GuavaParser::VarDeclare_Context::VarDeclare_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::VarDeclare_Context::getRuleIndex() const {
  return GuavaParser::RuleVarDeclare_;
}

void GuavaParser::VarDeclare_Context::copyFrom(VarDeclare_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NoInitVarDeclarContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::NoInitVarDeclarContext::Id() {
  return getToken(GuavaParser::Id, 0);
}

GuavaParser::NoInitVarDeclarContext::NoInitVarDeclarContext(VarDeclare_Context *ctx) { copyFrom(ctx); }

void GuavaParser::NoInitVarDeclarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoInitVarDeclar(this);
}
void GuavaParser::NoInitVarDeclarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoInitVarDeclar(this);
}

std::any GuavaParser::NoInitVarDeclarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitNoInitVarDeclar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InitVarDeclarContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::InitVarDeclarContext::Id() {
  return getToken(GuavaParser::Id, 0);
}

tree::TerminalNode* GuavaParser::InitVarDeclarContext::Eq() {
  return getToken(GuavaParser::Eq, 0);
}

GuavaParser::Value_Context* GuavaParser::InitVarDeclarContext::value_() {
  return getRuleContext<GuavaParser::Value_Context>(0);
}

GuavaParser::InitVarDeclarContext::InitVarDeclarContext(VarDeclare_Context *ctx) { copyFrom(ctx); }

void GuavaParser::InitVarDeclarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitVarDeclar(this);
}
void GuavaParser::InitVarDeclarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitVarDeclar(this);
}

std::any GuavaParser::InitVarDeclarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitInitVarDeclar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InitVarDeclarArgsContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::InitVarDeclarArgsContext::Id() {
  return getToken(GuavaParser::Id, 0);
}

tree::TerminalNode* GuavaParser::InitVarDeclarArgsContext::Eq() {
  return getToken(GuavaParser::Eq, 0);
}

GuavaParser::ArgsContext* GuavaParser::InitVarDeclarArgsContext::args() {
  return getRuleContext<GuavaParser::ArgsContext>(0);
}

GuavaParser::InitVarDeclarArgsContext::InitVarDeclarArgsContext(VarDeclare_Context *ctx) { copyFrom(ctx); }

void GuavaParser::InitVarDeclarArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitVarDeclarArgs(this);
}
void GuavaParser::InitVarDeclarArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitVarDeclarArgs(this);
}

std::any GuavaParser::InitVarDeclarArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitInitVarDeclarArgs(this);
  else
    return visitor->visitChildren(this);
}
GuavaParser::VarDeclare_Context* GuavaParser::varDeclare_() {
  VarDeclare_Context *_localctx = _tracker.createInstance<VarDeclare_Context>(_ctx, getState());
  enterRule(_localctx, 72, GuavaParser::RuleVarDeclare_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(603);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<GuavaParser::NoInitVarDeclarContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(596);
      match(GuavaParser::Id);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<GuavaParser::InitVarDeclarContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(597);
      match(GuavaParser::Id);
      setState(598);
      match(GuavaParser::Eq);
      setState(599);
      value_();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<GuavaParser::InitVarDeclarArgsContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(600);
      match(GuavaParser::Id);
      setState(601);
      match(GuavaParser::Eq);
      setState(602);
      args();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Prefix_Context ------------------------------------------------------------------

GuavaParser::Prefix_Context::Prefix_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::Prefix_Context::getRuleIndex() const {
  return GuavaParser::RulePrefix_;
}

void GuavaParser::Prefix_Context::copyFrom(Prefix_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NegatePrefixContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::NegatePrefixContext::ExPoint() {
  return getToken(GuavaParser::ExPoint, 0);
}

GuavaParser::NegatePrefixContext::NegatePrefixContext(Prefix_Context *ctx) { copyFrom(ctx); }

void GuavaParser::NegatePrefixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNegatePrefix(this);
}
void GuavaParser::NegatePrefixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNegatePrefix(this);
}

std::any GuavaParser::NegatePrefixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitNegatePrefix(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegativePrefixContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::NegativePrefixContext::Min() {
  return getToken(GuavaParser::Min, 0);
}

GuavaParser::NegativePrefixContext::NegativePrefixContext(Prefix_Context *ctx) { copyFrom(ctx); }

void GuavaParser::NegativePrefixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNegativePrefix(this);
}
void GuavaParser::NegativePrefixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNegativePrefix(this);
}

std::any GuavaParser::NegativePrefixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitNegativePrefix(this);
  else
    return visitor->visitChildren(this);
}
GuavaParser::Prefix_Context* GuavaParser::prefix_() {
  Prefix_Context *_localctx = _tracker.createInstance<Prefix_Context>(_ctx, getState());
  enterRule(_localctx, 74, GuavaParser::RulePrefix_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(607);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GuavaParser::ExPoint: {
        _localctx = _tracker.createInstance<GuavaParser::NegatePrefixContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(605);
        match(GuavaParser::ExPoint);
        break;
      }

      case GuavaParser::Min: {
        _localctx = _tracker.createInstance<GuavaParser::NegativePrefixContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(606);
        match(GuavaParser::Min);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HighPrioritySuffix_Context ------------------------------------------------------------------

GuavaParser::HighPrioritySuffix_Context::HighPrioritySuffix_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::HighPrioritySuffix_Context::getRuleIndex() const {
  return GuavaParser::RuleHighPrioritySuffix_;
}

void GuavaParser::HighPrioritySuffix_Context::copyFrom(HighPrioritySuffix_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExcitedSuffContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::ExcitedSuffContext::ExPoint() {
  return getToken(GuavaParser::ExPoint, 0);
}

GuavaParser::ExcitedSuffContext::ExcitedSuffContext(HighPrioritySuffix_Context *ctx) { copyFrom(ctx); }

void GuavaParser::ExcitedSuffContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExcitedSuff(this);
}
void GuavaParser::ExcitedSuffContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExcitedSuff(this);
}

std::any GuavaParser::ExcitedSuffContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitExcitedSuff(this);
  else
    return visitor->visitChildren(this);
}
GuavaParser::HighPrioritySuffix_Context* GuavaParser::highPrioritySuffix_() {
  HighPrioritySuffix_Context *_localctx = _tracker.createInstance<HighPrioritySuffix_Context>(_ctx, getState());
  enterRule(_localctx, 76, GuavaParser::RuleHighPrioritySuffix_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<GuavaParser::ExcitedSuffContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(609);
    match(GuavaParser::ExPoint);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op1_Context ------------------------------------------------------------------

GuavaParser::Op1_Context::Op1_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::Op1_Context::getRuleIndex() const {
  return GuavaParser::RuleOp1_;
}

void GuavaParser::Op1_Context::copyFrom(Op1_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PowOpContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::PowOpContext::Pow() {
  return getToken(GuavaParser::Pow, 0);
}

GuavaParser::PowOpContext::PowOpContext(Op1_Context *ctx) { copyFrom(ctx); }

void GuavaParser::PowOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowOp(this);
}
void GuavaParser::PowOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowOp(this);
}

std::any GuavaParser::PowOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitPowOp(this);
  else
    return visitor->visitChildren(this);
}
GuavaParser::Op1_Context* GuavaParser::op1_() {
  Op1_Context *_localctx = _tracker.createInstance<Op1_Context>(_ctx, getState());
  enterRule(_localctx, 78, GuavaParser::RuleOp1_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<GuavaParser::PowOpContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(611);
    match(GuavaParser::Pow);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op2_Context ------------------------------------------------------------------

GuavaParser::Op2_Context::Op2_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::Op2_Context::getRuleIndex() const {
  return GuavaParser::RuleOp2_;
}

void GuavaParser::Op2_Context::copyFrom(Op2_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DivOpContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::DivOpContext::Bslash() {
  return getToken(GuavaParser::Bslash, 0);
}

GuavaParser::DivOpContext::DivOpContext(Op2_Context *ctx) { copyFrom(ctx); }

void GuavaParser::DivOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDivOp(this);
}
void GuavaParser::DivOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDivOp(this);
}

std::any GuavaParser::DivOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitDivOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModOpContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::ModOpContext::Mod() {
  return getToken(GuavaParser::Mod, 0);
}

GuavaParser::ModOpContext::ModOpContext(Op2_Context *ctx) { copyFrom(ctx); }

void GuavaParser::ModOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModOp(this);
}
void GuavaParser::ModOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModOp(this);
}

std::any GuavaParser::ModOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitModOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitAndOpContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::BitAndOpContext::AndSign() {
  return getToken(GuavaParser::AndSign, 0);
}

GuavaParser::BitAndOpContext::BitAndOpContext(Op2_Context *ctx) { copyFrom(ctx); }

void GuavaParser::BitAndOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitAndOp(this);
}
void GuavaParser::BitAndOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitAndOp(this);
}

std::any GuavaParser::BitAndOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitBitAndOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultOpContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::MultOpContext::Star() {
  return getToken(GuavaParser::Star, 0);
}

GuavaParser::MultOpContext::MultOpContext(Op2_Context *ctx) { copyFrom(ctx); }

void GuavaParser::MultOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultOp(this);
}
void GuavaParser::MultOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultOp(this);
}

std::any GuavaParser::MultOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitMultOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BitOrOpContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::BitOrOpContext::Bar() {
  return getToken(GuavaParser::Bar, 0);
}

GuavaParser::BitOrOpContext::BitOrOpContext(Op2_Context *ctx) { copyFrom(ctx); }

void GuavaParser::BitOrOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitOrOp(this);
}
void GuavaParser::BitOrOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitOrOp(this);
}

std::any GuavaParser::BitOrOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitBitOrOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CrossMultOpContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::CrossMultOpContext::StarStar() {
  return getToken(GuavaParser::StarStar, 0);
}

GuavaParser::CrossMultOpContext::CrossMultOpContext(Op2_Context *ctx) { copyFrom(ctx); }

void GuavaParser::CrossMultOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCrossMultOp(this);
}
void GuavaParser::CrossMultOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCrossMultOp(this);
}

std::any GuavaParser::CrossMultOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitCrossMultOp(this);
  else
    return visitor->visitChildren(this);
}
GuavaParser::Op2_Context* GuavaParser::op2_() {
  Op2_Context *_localctx = _tracker.createInstance<Op2_Context>(_ctx, getState());
  enterRule(_localctx, 80, GuavaParser::RuleOp2_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(619);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GuavaParser::Star: {
        _localctx = _tracker.createInstance<GuavaParser::MultOpContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(613);
        match(GuavaParser::Star);
        break;
      }

      case GuavaParser::StarStar: {
        _localctx = _tracker.createInstance<GuavaParser::CrossMultOpContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(614);
        match(GuavaParser::StarStar);
        break;
      }

      case GuavaParser::Bslash: {
        _localctx = _tracker.createInstance<GuavaParser::DivOpContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(615);
        match(GuavaParser::Bslash);
        break;
      }

      case GuavaParser::Mod: {
        _localctx = _tracker.createInstance<GuavaParser::ModOpContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(616);
        match(GuavaParser::Mod);
        break;
      }

      case GuavaParser::Bar: {
        _localctx = _tracker.createInstance<GuavaParser::BitOrOpContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(617);
        match(GuavaParser::Bar);
        break;
      }

      case GuavaParser::AndSign: {
        _localctx = _tracker.createInstance<GuavaParser::BitAndOpContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(618);
        match(GuavaParser::AndSign);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op3_Context ------------------------------------------------------------------

GuavaParser::Op3_Context::Op3_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::Op3_Context::getRuleIndex() const {
  return GuavaParser::RuleOp3_;
}

void GuavaParser::Op3_Context::copyFrom(Op3_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MinOpContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::MinOpContext::Min() {
  return getToken(GuavaParser::Min, 0);
}

GuavaParser::MinOpContext::MinOpContext(Op3_Context *ctx) { copyFrom(ctx); }

void GuavaParser::MinOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMinOp(this);
}
void GuavaParser::MinOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMinOp(this);
}

std::any GuavaParser::MinOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitMinOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlusOpContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::PlusOpContext::Plus() {
  return getToken(GuavaParser::Plus, 0);
}

GuavaParser::PlusOpContext::PlusOpContext(Op3_Context *ctx) { copyFrom(ctx); }

void GuavaParser::PlusOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlusOp(this);
}
void GuavaParser::PlusOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlusOp(this);
}

std::any GuavaParser::PlusOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitPlusOp(this);
  else
    return visitor->visitChildren(this);
}
GuavaParser::Op3_Context* GuavaParser::op3_() {
  Op3_Context *_localctx = _tracker.createInstance<Op3_Context>(_ctx, getState());
  enterRule(_localctx, 82, GuavaParser::RuleOp3_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(623);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GuavaParser::Plus: {
        _localctx = _tracker.createInstance<GuavaParser::PlusOpContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(621);
        match(GuavaParser::Plus);
        break;
      }

      case GuavaParser::Min: {
        _localctx = _tracker.createInstance<GuavaParser::MinOpContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(622);
        match(GuavaParser::Min);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op4_Context ------------------------------------------------------------------

GuavaParser::Op4_Context::Op4_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::Op4_Context::getRuleIndex() const {
  return GuavaParser::RuleOp4_;
}

void GuavaParser::Op4_Context::copyFrom(Op4_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DefinedOrOpContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::DefinedOrOpContext::DefOr() {
  return getToken(GuavaParser::DefOr, 0);
}

GuavaParser::DefinedOrOpContext::DefinedOrOpContext(Op4_Context *ctx) { copyFrom(ctx); }

void GuavaParser::DefinedOrOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefinedOrOp(this);
}
void GuavaParser::DefinedOrOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefinedOrOp(this);
}

std::any GuavaParser::DefinedOrOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitDefinedOrOp(this);
  else
    return visitor->visitChildren(this);
}
GuavaParser::Op4_Context* GuavaParser::op4_() {
  Op4_Context *_localctx = _tracker.createInstance<Op4_Context>(_ctx, getState());
  enterRule(_localctx, 84, GuavaParser::RuleOp4_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<GuavaParser::DefinedOrOpContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(625);
    match(GuavaParser::DefOr);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op5_Context ------------------------------------------------------------------

GuavaParser::Op5_Context::Op5_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::Op5_Context::getRuleIndex() const {
  return GuavaParser::RuleOp5_;
}

void GuavaParser::Op5_Context::copyFrom(Op5_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BoolDeepNeqOpContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::BoolDeepNeqOpContext::BoolDeepNeq() {
  return getToken(GuavaParser::BoolDeepNeq, 0);
}

GuavaParser::BoolDeepNeqOpContext::BoolDeepNeqOpContext(Op5_Context *ctx) { copyFrom(ctx); }

void GuavaParser::BoolDeepNeqOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolDeepNeqOp(this);
}
void GuavaParser::BoolDeepNeqOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolDeepNeqOp(this);
}

std::any GuavaParser::BoolDeepNeqOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitBoolDeepNeqOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolEqOpContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::BoolEqOpContext::BoolEq() {
  return getToken(GuavaParser::BoolEq, 0);
}

GuavaParser::BoolEqOpContext::BoolEqOpContext(Op5_Context *ctx) { copyFrom(ctx); }

void GuavaParser::BoolEqOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolEqOp(this);
}
void GuavaParser::BoolEqOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolEqOp(this);
}

std::any GuavaParser::BoolEqOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitBoolEqOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolLtOpContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::BoolLtOpContext::Lt() {
  return getToken(GuavaParser::Lt, 0);
}

GuavaParser::BoolLtOpContext::BoolLtOpContext(Op5_Context *ctx) { copyFrom(ctx); }

void GuavaParser::BoolLtOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolLtOp(this);
}
void GuavaParser::BoolLtOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolLtOp(this);
}

std::any GuavaParser::BoolLtOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitBoolLtOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolDeepEqOpContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::BoolDeepEqOpContext::BoolDeepEq() {
  return getToken(GuavaParser::BoolDeepEq, 0);
}

GuavaParser::BoolDeepEqOpContext::BoolDeepEqOpContext(Op5_Context *ctx) { copyFrom(ctx); }

void GuavaParser::BoolDeepEqOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolDeepEqOp(this);
}
void GuavaParser::BoolDeepEqOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolDeepEqOp(this);
}

std::any GuavaParser::BoolDeepEqOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitBoolDeepEqOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolGtOpContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::BoolGtOpContext::Gt() {
  return getToken(GuavaParser::Gt, 0);
}

GuavaParser::BoolGtOpContext::BoolGtOpContext(Op5_Context *ctx) { copyFrom(ctx); }

void GuavaParser::BoolGtOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolGtOp(this);
}
void GuavaParser::BoolGtOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolGtOp(this);
}

std::any GuavaParser::BoolGtOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitBoolGtOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolGtEqOpContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::BoolGtEqOpContext::GtEq() {
  return getToken(GuavaParser::GtEq, 0);
}

GuavaParser::BoolGtEqOpContext::BoolGtEqOpContext(Op5_Context *ctx) { copyFrom(ctx); }

void GuavaParser::BoolGtEqOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolGtEqOp(this);
}
void GuavaParser::BoolGtEqOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolGtEqOp(this);
}

std::any GuavaParser::BoolGtEqOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitBoolGtEqOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolNeqOpContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::BoolNeqOpContext::BoolNeq() {
  return getToken(GuavaParser::BoolNeq, 0);
}

GuavaParser::BoolNeqOpContext::BoolNeqOpContext(Op5_Context *ctx) { copyFrom(ctx); }

void GuavaParser::BoolNeqOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolNeqOp(this);
}
void GuavaParser::BoolNeqOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolNeqOp(this);
}

std::any GuavaParser::BoolNeqOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitBoolNeqOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolLtEqOpContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::BoolLtEqOpContext::LtEq() {
  return getToken(GuavaParser::LtEq, 0);
}

GuavaParser::BoolLtEqOpContext::BoolLtEqOpContext(Op5_Context *ctx) { copyFrom(ctx); }

void GuavaParser::BoolLtEqOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolLtEqOp(this);
}
void GuavaParser::BoolLtEqOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolLtEqOp(this);
}

std::any GuavaParser::BoolLtEqOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitBoolLtEqOp(this);
  else
    return visitor->visitChildren(this);
}
GuavaParser::Op5_Context* GuavaParser::op5_() {
  Op5_Context *_localctx = _tracker.createInstance<Op5_Context>(_ctx, getState());
  enterRule(_localctx, 86, GuavaParser::RuleOp5_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(635);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GuavaParser::BoolEq: {
        _localctx = _tracker.createInstance<GuavaParser::BoolEqOpContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(627);
        match(GuavaParser::BoolEq);
        break;
      }

      case GuavaParser::BoolDeepEq: {
        _localctx = _tracker.createInstance<GuavaParser::BoolDeepEqOpContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(628);
        match(GuavaParser::BoolDeepEq);
        break;
      }

      case GuavaParser::BoolNeq: {
        _localctx = _tracker.createInstance<GuavaParser::BoolNeqOpContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(629);
        match(GuavaParser::BoolNeq);
        break;
      }

      case GuavaParser::BoolDeepNeq: {
        _localctx = _tracker.createInstance<GuavaParser::BoolDeepNeqOpContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(630);
        match(GuavaParser::BoolDeepNeq);
        break;
      }

      case GuavaParser::Gt: {
        _localctx = _tracker.createInstance<GuavaParser::BoolGtOpContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(631);
        match(GuavaParser::Gt);
        break;
      }

      case GuavaParser::GtEq: {
        _localctx = _tracker.createInstance<GuavaParser::BoolGtEqOpContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(632);
        match(GuavaParser::GtEq);
        break;
      }

      case GuavaParser::Lt: {
        _localctx = _tracker.createInstance<GuavaParser::BoolLtOpContext>(_localctx);
        enterOuterAlt(_localctx, 7);
        setState(633);
        match(GuavaParser::Lt);
        break;
      }

      case GuavaParser::LtEq: {
        _localctx = _tracker.createInstance<GuavaParser::BoolLtEqOpContext>(_localctx);
        enterOuterAlt(_localctx, 8);
        setState(634);
        match(GuavaParser::LtEq);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op6_Context ------------------------------------------------------------------

GuavaParser::Op6_Context::Op6_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::Op6_Context::getRuleIndex() const {
  return GuavaParser::RuleOp6_;
}

void GuavaParser::Op6_Context::copyFrom(Op6_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OrOpContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::OrOpContext::Or() {
  return getToken(GuavaParser::Or, 0);
}

GuavaParser::OrOpContext::OrOpContext(Op6_Context *ctx) { copyFrom(ctx); }

void GuavaParser::OrOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrOp(this);
}
void GuavaParser::OrOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrOp(this);
}

std::any GuavaParser::OrOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitOrOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndOpContext ------------------------------------------------------------------

tree::TerminalNode* GuavaParser::AndOpContext::And() {
  return getToken(GuavaParser::And, 0);
}

GuavaParser::AndOpContext::AndOpContext(Op6_Context *ctx) { copyFrom(ctx); }

void GuavaParser::AndOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndOp(this);
}
void GuavaParser::AndOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndOp(this);
}

std::any GuavaParser::AndOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitAndOp(this);
  else
    return visitor->visitChildren(this);
}
GuavaParser::Op6_Context* GuavaParser::op6_() {
  Op6_Context *_localctx = _tracker.createInstance<Op6_Context>(_ctx, getState());
  enterRule(_localctx, 88, GuavaParser::RuleOp6_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(639);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GuavaParser::Or: {
        _localctx = _tracker.createInstance<GuavaParser::OrOpContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(637);
        match(GuavaParser::Or);
        break;
      }

      case GuavaParser::And: {
        _localctx = _tracker.createInstance<GuavaParser::AndOpContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(638);
        match(GuavaParser::And);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LowPrioritySuffix_Context ------------------------------------------------------------------

GuavaParser::LowPrioritySuffix_Context::LowPrioritySuffix_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GuavaParser::LowPrioritySuffix_Context::getRuleIndex() const {
  return GuavaParser::RuleLowPrioritySuffix_;
}

void GuavaParser::LowPrioritySuffix_Context::copyFrom(LowPrioritySuffix_Context *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MatchSuffContext ------------------------------------------------------------------

GuavaParser::MatchRegexContext* GuavaParser::MatchSuffContext::matchRegex() {
  return getRuleContext<GuavaParser::MatchRegexContext>(0);
}

GuavaParser::MatchSuffContext::MatchSuffContext(LowPrioritySuffix_Context *ctx) { copyFrom(ctx); }

void GuavaParser::MatchSuffContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatchSuff(this);
}
void GuavaParser::MatchSuffContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GuavaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatchSuff(this);
}

std::any GuavaParser::MatchSuffContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GuavaParserVisitor*>(visitor))
    return parserVisitor->visitMatchSuff(this);
  else
    return visitor->visitChildren(this);
}
GuavaParser::LowPrioritySuffix_Context* GuavaParser::lowPrioritySuffix_() {
  LowPrioritySuffix_Context *_localctx = _tracker.createInstance<LowPrioritySuffix_Context>(_ctx, getState());
  enterRule(_localctx, 90, GuavaParser::RuleLowPrioritySuffix_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<GuavaParser::MatchSuffContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(641);
    matchRegex();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool GuavaParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 5: return keywordStatement_Sempred(antlrcpp::downCast<KeywordStatement_Context *>(context), predicateIndex);
    case 13: return compoundAction_Sempred(antlrcpp::downCast<CompoundAction_Context *>(context), predicateIndex);
    case 28: return expression_Sempred(antlrcpp::downCast<Expression_Context *>(context), predicateIndex);
    case 29: return identifyer_Sempred(antlrcpp::downCast<Identifyer_Context *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool GuavaParser::keywordStatement_Sempred(KeywordStatement_Context *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return isWithinFn();
    case 1: return isWithinLoop();
    case 2: return isWithinLoop();
    case 3: return isWithinLoop();
    case 4: return isWithinLoop();

  default:
    break;
  }
  return true;
}

bool GuavaParser::compoundAction_Sempred(CompoundAction_Context *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

bool GuavaParser::expression_Sempred(Expression_Context *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 11);
    case 7: return precpred(_ctx, 10);
    case 8: return precpred(_ctx, 9);
    case 9: return precpred(_ctx, 8);
    case 10: return precpred(_ctx, 7);
    case 11: return precpred(_ctx, 6);
    case 12: return precpred(_ctx, 12);
    case 13: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

bool GuavaParser::identifyer_Sempred(Identifyer_Context *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 14: return precpred(_ctx, 7);
    case 15: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

void GuavaParser::initialize() {
  ::antlr4::internal::call_once(guavaparserParserOnceFlag, guavaparserParserInitialize);
}
