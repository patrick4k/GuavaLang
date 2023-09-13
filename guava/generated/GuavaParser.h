
// Generated from C:/Users/Patrick/Documents/Code/Guava/Guava/guava/GuavaParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace GParser {


class  GuavaParser : public antlr4::Parser {
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

  enum {
    RuleScript_ = 0, RuleDeclaration_ = 1, RuleAction_ = 2, RuleScope = 3, 
    RuleStatement_ = 4, RuleKeywordStatement_ = 5, RuleBody_ = 6, RuleControlFlow_ = 7, 
    RuleLoop_ = 8, RuleLoopOnScope_ = 9, RuleLoopOnBody_ = 10, RuleDoWhileLoop = 11, 
    RuleCompoundStatement = 12, RuleCompoundAction_ = 13, RuleIfStatement_ = 14, 
    RuleIfScope = 15, RuleIfBody = 16, RuleConditionalKeywords_ = 17, RuleLoopKeywords_ = 18, 
    RuleConditionalLoopKeywords_ = 19, RuleFnDeclaration = 20, RuleLambda = 21, 
    RuleParameters_ = 22, RuleArgs = 23, RuleArgument_ = 24, RuleMatchRegex = 25, 
    RuleMatchOptions_ = 26, RuleValue_ = 27, RuleExpression_ = 28, RuleIdentifyer_ = 29, 
    RuleIdentifyerChain_ = 30, RuleFnCall = 31, RuleLiteral_ = 32, RulePair_ = 33, 
    RuleKeywordLiteral_ = 34, RuleAssign_ = 35, RuleVarDeclare_ = 36, RulePrefix_ = 37, 
    RuleHighPrioritySuffix_ = 38, RuleOp1_ = 39, RuleOp2_ = 40, RuleOp3_ = 41, 
    RuleOp4_ = 42, RuleOp5_ = 43, RuleOp6_ = 44, RuleLowPrioritySuffix_ = 45
  };

  explicit GuavaParser(antlr4::TokenStream *input);

  GuavaParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~GuavaParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  virtual bool isWithinFn() = 0;
  virtual bool isWithinLoop() = 0;


  class Script_Context;
  class Declaration_Context;
  class Action_Context;
  class ScopeContext;
  class Statement_Context;
  class KeywordStatement_Context;
  class Body_Context;
  class ControlFlow_Context;
  class Loop_Context;
  class LoopOnScope_Context;
  class LoopOnBody_Context;
  class DoWhileLoopContext;
  class CompoundStatementContext;
  class CompoundAction_Context;
  class IfStatement_Context;
  class IfScopeContext;
  class IfBodyContext;
  class ConditionalKeywords_Context;
  class LoopKeywords_Context;
  class ConditionalLoopKeywords_Context;
  class FnDeclarationContext;
  class LambdaContext;
  class Parameters_Context;
  class ArgsContext;
  class Argument_Context;
  class MatchRegexContext;
  class MatchOptions_Context;
  class Value_Context;
  class Expression_Context;
  class Identifyer_Context;
  class IdentifyerChain_Context;
  class FnCallContext;
  class Literal_Context;
  class Pair_Context;
  class KeywordLiteral_Context;
  class Assign_Context;
  class VarDeclare_Context;
  class Prefix_Context;
  class HighPrioritySuffix_Context;
  class Op1_Context;
  class Op2_Context;
  class Op3_Context;
  class Op4_Context;
  class Op5_Context;
  class Op6_Context;
  class LowPrioritySuffix_Context; 

  class  Script_Context : public antlr4::ParserRuleContext {
  public:
    Script_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<Action_Context *> action_();
    Action_Context* action_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Script_Context* script_();

  class  Declaration_Context : public antlr4::ParserRuleContext {
  public:
    Declaration_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FnDeclarationContext *fnDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declaration_Context* declaration_();

  class  Action_Context : public antlr4::ParserRuleContext {
  public:
    Action_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Statement_Context *statement_();
    antlr4::tree::TerminalNode *Semi();
    ScopeContext *scope();
    ControlFlow_Context *controlFlow_();
    Declaration_Context *declaration_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Action_Context* action_();

  class  ScopeContext : public antlr4::ParserRuleContext {
  public:
    ScopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Lbrace();
    antlr4::tree::TerminalNode *Rbrace();
    std::vector<Action_Context *> action_();
    Action_Context* action_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScopeContext* scope();

  class  Statement_Context : public antlr4::ParserRuleContext {
  public:
    Statement_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    KeywordStatement_Context *keywordStatement_();
    Assign_Context *assign_();
    Expression_Context *expression_();
    ScopeContext *scope();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_Context* statement_();

  class  KeywordStatement_Context : public antlr4::ParserRuleContext {
  public:
    KeywordStatement_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    KeywordStatement_Context() = default;
    void copyFrom(KeywordStatement_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NextStatContext : public KeywordStatement_Context {
  public:
    NextStatContext(KeywordStatement_Context *ctx);

    antlr4::tree::TerminalNode *Next();
    Expression_Context *expression_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OnceStatContext : public KeywordStatement_Context {
  public:
    OnceStatContext(KeywordStatement_Context *ctx);

    antlr4::tree::TerminalNode *Once();
    Statement_Context *statement_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ReturnStatContext : public KeywordStatement_Context {
  public:
    ReturnStatContext(KeywordStatement_Context *ctx);

    antlr4::tree::TerminalNode *Return();
    Value_Context *value_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LastStatContext : public KeywordStatement_Context {
  public:
    LastStatContext(KeywordStatement_Context *ctx);

    antlr4::tree::TerminalNode *Last();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BreakStatContext : public KeywordStatement_Context {
  public:
    BreakStatContext(KeywordStatement_Context *ctx);

    antlr4::tree::TerminalNode *Break();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  KeywordStatement_Context* keywordStatement_();

  class  Body_Context : public antlr4::ParserRuleContext {
  public:
    Body_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ScopeContext *scope();
    Statement_Context *statement_();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Body_Context* body_();

  class  ControlFlow_Context : public antlr4::ParserRuleContext {
  public:
    ControlFlow_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompoundStatementContext *compoundStatement();
    antlr4::tree::TerminalNode *Semi();
    Loop_Context *loop_();
    IfStatement_Context *ifStatement_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ControlFlow_Context* controlFlow_();

  class  Loop_Context : public antlr4::ParserRuleContext {
  public:
    Loop_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoopOnScope_Context *loopOnScope_();
    LoopOnBody_Context *loopOnBody_();
    DoWhileLoopContext *doWhileLoop();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loop_Context* loop_();

  class  LoopOnScope_Context : public antlr4::ParserRuleContext {
  public:
    LoopOnScope_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LoopOnScope_Context() = default;
    void copyFrom(LoopOnScope_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LoopOnScopeOnArgsContext : public LoopOnScope_Context {
  public:
    LoopOnScopeOnArgsContext(LoopOnScope_Context *ctx);

    LoopKeywords_Context *loopKeywords_();
    ArgsContext *args();
    ScopeContext *scope();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LoopOnScopeOnExprContext : public LoopOnScope_Context {
  public:
    LoopOnScopeOnExprContext(LoopOnScope_Context *ctx);

    LoopKeywords_Context *loopKeywords_();
    Expression_Context *expression_();
    ScopeContext *scope();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LoopOnScope_Context* loopOnScope_();

  class  LoopOnBody_Context : public antlr4::ParserRuleContext {
  public:
    LoopOnBody_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LoopOnBody_Context() = default;
    void copyFrom(LoopOnBody_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LoopOnBodyOnExprContext : public LoopOnBody_Context {
  public:
    LoopOnBodyOnExprContext(LoopOnBody_Context *ctx);

    LoopKeywords_Context *loopKeywords_();
    antlr4::tree::TerminalNode *Lpar();
    Expression_Context *expression_();
    antlr4::tree::TerminalNode *Rpar();
    Body_Context *body_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LoopOnBodyOnArgsContext : public LoopOnBody_Context {
  public:
    LoopOnBodyOnArgsContext(LoopOnBody_Context *ctx);

    LoopKeywords_Context *loopKeywords_();
    antlr4::tree::TerminalNode *Lpar();
    ArgsContext *args();
    antlr4::tree::TerminalNode *Rpar();
    Body_Context *body_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LoopOnBody_Context* loopOnBody_();

  class  DoWhileLoopContext : public antlr4::ParserRuleContext {
  public:
    DoWhileLoopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Do();
    ScopeContext *scope();
    ConditionalLoopKeywords_Context *conditionalLoopKeywords_();
    Expression_Context *expression_();
    antlr4::tree::TerminalNode *Semi();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DoWhileLoopContext* doWhileLoop();

  class  CompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompoundAction_Context *compoundAction_();
    std::vector<LoopKeywords_Context *> loopKeywords_();
    LoopKeywords_Context* loopKeywords_(size_t i);
    std::vector<Expression_Context *> expression_();
    Expression_Context* expression_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Lpar();
    antlr4::tree::TerminalNode* Lpar(size_t i);
    std::vector<ArgsContext *> args();
    ArgsContext* args(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Rpar();
    antlr4::tree::TerminalNode* Rpar(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundStatementContext* compoundStatement();

  class  CompoundAction_Context : public antlr4::ParserRuleContext {
  public:
    CompoundAction_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CompoundAction_Context() = default;
    void copyFrom(CompoundAction_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  StatementCompoundContext : public CompoundAction_Context {
  public:
    StatementCompoundContext(CompoundAction_Context *ctx);

    Statement_Context *statement_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfScopeCompoundContext : public CompoundAction_Context {
  public:
    IfScopeCompoundContext(CompoundAction_Context *ctx);

    IfScopeContext *ifScope();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LoopScopeCompoundContext : public CompoundAction_Context {
  public:
    LoopScopeCompoundContext(CompoundAction_Context *ctx);

    LoopOnScope_Context *loopOnScope_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfCompoundContext : public CompoundAction_Context {
  public:
    IfCompoundContext(CompoundAction_Context *ctx);

    std::vector<CompoundAction_Context *> compoundAction_();
    CompoundAction_Context* compoundAction_(size_t i);
    ConditionalKeywords_Context *conditionalKeywords_();
    Expression_Context *expression_();
    antlr4::tree::TerminalNode *Else();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  CompoundAction_Context* compoundAction_();
  CompoundAction_Context* compoundAction_(int precedence);
  class  IfStatement_Context : public antlr4::ParserRuleContext {
  public:
    IfStatement_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfScopeContext *ifScope();
    IfBodyContext *ifBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatement_Context* ifStatement_();

  class  IfScopeContext : public antlr4::ParserRuleContext {
  public:
    IfScopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalKeywords_Context *conditionalKeywords_();
    Expression_Context *expression_();
    ScopeContext *scope();
    antlr4::tree::TerminalNode *Else();
    Body_Context *body_();
    IfStatement_Context *ifStatement_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfScopeContext* ifScope();

  class  IfBodyContext : public antlr4::ParserRuleContext {
  public:
    IfBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalKeywords_Context *conditionalKeywords_();
    antlr4::tree::TerminalNode *Lpar();
    Expression_Context *expression_();
    antlr4::tree::TerminalNode *Rpar();
    std::vector<Body_Context *> body_();
    Body_Context* body_(size_t i);
    antlr4::tree::TerminalNode *Else();
    IfStatement_Context *ifStatement_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfBodyContext* ifBody();

  class  ConditionalKeywords_Context : public antlr4::ParserRuleContext {
  public:
    ConditionalKeywords_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ConditionalKeywords_Context() = default;
    void copyFrom(ConditionalKeywords_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  UnlessKeywordContext : public ConditionalKeywords_Context {
  public:
    UnlessKeywordContext(ConditionalKeywords_Context *ctx);

    antlr4::tree::TerminalNode *Unless();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfKeywordContext : public ConditionalKeywords_Context {
  public:
    IfKeywordContext(ConditionalKeywords_Context *ctx);

    antlr4::tree::TerminalNode *If();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ConditionalKeywords_Context* conditionalKeywords_();

  class  LoopKeywords_Context : public antlr4::ParserRuleContext {
  public:
    LoopKeywords_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LoopKeywords_Context() = default;
    void copyFrom(LoopKeywords_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ConditionalLoopContext : public LoopKeywords_Context {
  public:
    ConditionalLoopContext(LoopKeywords_Context *ctx);

    ConditionalLoopKeywords_Context *conditionalLoopKeywords_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LoopLoopContext : public LoopKeywords_Context {
  public:
    LoopLoopContext(LoopKeywords_Context *ctx);

    antlr4::tree::TerminalNode *Loop();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ForLoopContext : public LoopKeywords_Context {
  public:
    ForLoopContext(LoopKeywords_Context *ctx);

    antlr4::tree::TerminalNode *For();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LoopKeywords_Context* loopKeywords_();

  class  ConditionalLoopKeywords_Context : public antlr4::ParserRuleContext {
  public:
    ConditionalLoopKeywords_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ConditionalLoopKeywords_Context() = default;
    void copyFrom(ConditionalLoopKeywords_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  WhileLoopContext : public ConditionalLoopKeywords_Context {
  public:
    WhileLoopContext(ConditionalLoopKeywords_Context *ctx);

    antlr4::tree::TerminalNode *While();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UntilLoopContext : public ConditionalLoopKeywords_Context {
  public:
    UntilLoopContext(ConditionalLoopKeywords_Context *ctx);

    antlr4::tree::TerminalNode *Until();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ConditionalLoopKeywords_Context* conditionalLoopKeywords_();

  class  FnDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FnDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Fn();
    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *Lpar();
    antlr4::tree::TerminalNode *Rpar();
    ScopeContext *scope();
    Parameters_Context *parameters_();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FnDeclarationContext* fnDeclaration();

  class  LambdaContext : public antlr4::ParserRuleContext {
  public:
    LambdaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Sarrow();
    Statement_Context *statement_();
    antlr4::tree::TerminalNode *Lpar();
    antlr4::tree::TerminalNode *Rpar();
    Parameters_Context *parameters_();
    antlr4::tree::TerminalNode *Fn();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaContext* lambda();

  class  Parameters_Context : public antlr4::ParserRuleContext {
  public:
    Parameters_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Parameters_Context() = default;
    void copyFrom(Parameters_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ParamsContext : public Parameters_Context {
  public:
    ParamsContext(Parameters_Context *ctx);

    std::vector<antlr4::tree::TerminalNode *> Id();
    antlr4::tree::TerminalNode* Id(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Com();
    antlr4::tree::TerminalNode* Com(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParamsExpandContext : public Parameters_Context {
  public:
    ParamsExpandContext(Parameters_Context *ctx);

    std::vector<antlr4::tree::TerminalNode *> Id();
    antlr4::tree::TerminalNode* Id(size_t i);
    antlr4::tree::TerminalNode *Dot3();
    std::vector<antlr4::tree::TerminalNode *> Com();
    antlr4::tree::TerminalNode* Com(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Parameters_Context* parameters_();

  class  ArgsContext : public antlr4::ParserRuleContext {
  public:
    ArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Argument_Context *> argument_();
    Argument_Context* argument_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Com();
    antlr4::tree::TerminalNode* Com(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgsContext* args();

  class  Argument_Context : public antlr4::ParserRuleContext {
  public:
    Argument_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Argument_Context() = default;
    void copyFrom(Argument_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ArgExpandContext : public Argument_Context {
  public:
    ArgExpandContext(Argument_Context *ctx);

    antlr4::tree::TerminalNode *Dot3();
    Value_Context *value_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArgContext : public Argument_Context {
  public:
    ArgContext(Argument_Context *ctx);

    Value_Context *value_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RangeArgContext : public Argument_Context {
  public:
    RangeArgContext(Argument_Context *ctx);

    std::vector<Expression_Context *> expression_();
    Expression_Context* expression_(size_t i);
    antlr4::tree::TerminalNode *Dot2();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Argument_Context* argument_();

  class  MatchRegexContext : public antlr4::ParserRuleContext {
  public:
    MatchRegexContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Squig();
    std::vector<antlr4::tree::TerminalNode *> Bslash();
    antlr4::tree::TerminalNode* Bslash(size_t i);
    antlr4::tree::TerminalNode *Lbrace();
    antlr4::tree::TerminalNode *Rbrace();
    std::vector<MatchOptions_Context *> matchOptions_();
    MatchOptions_Context* matchOptions_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MatchRegexContext* matchRegex();

  class  MatchOptions_Context : public antlr4::ParserRuleContext {
  public:
    MatchOptions_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    MatchOptions_Context() = default;
    void copyFrom(MatchOptions_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ReturnAllMatchOptionContext : public MatchOptions_Context {
  public:
    ReturnAllMatchOptionContext(MatchOptions_Context *ctx);

    antlr4::tree::TerminalNode *Word();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  MatchOptions_Context* matchOptions_();

  class  Value_Context : public antlr4::ParserRuleContext {
  public:
    Value_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Expression_Context *expression_();
    LambdaContext *lambda();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_Context* value_();

  class  Expression_Context : public antlr4::ParserRuleContext {
  public:
    Expression_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Expression_Context() = default;
    void copyFrom(Expression_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DefaultSuffixExprContext : public Expression_Context {
  public:
    DefaultSuffixExprContext(Expression_Context *ctx);

    HighPrioritySuffix_Context *highPrioritySuffix_();
    LowPrioritySuffix_Context *lowPrioritySuffix_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SuffixExprContext : public Expression_Context {
  public:
    SuffixExprContext(Expression_Context *ctx);

    Expression_Context *expression_();
    HighPrioritySuffix_Context *highPrioritySuffix_();
    LowPrioritySuffix_Context *lowPrioritySuffix_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OpExpr5Context : public Expression_Context {
  public:
    OpExpr5Context(Expression_Context *ctx);

    std::vector<Expression_Context *> expression_();
    Expression_Context* expression_(size_t i);
    Op5_Context *op5_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OpExpr4Context : public Expression_Context {
  public:
    OpExpr4Context(Expression_Context *ctx);

    std::vector<Expression_Context *> expression_();
    Expression_Context* expression_(size_t i);
    Op4_Context *op4_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OpExpr3Context : public Expression_Context {
  public:
    OpExpr3Context(Expression_Context *ctx);

    std::vector<Expression_Context *> expression_();
    Expression_Context* expression_(size_t i);
    Op3_Context *op3_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OpExpr2Context : public Expression_Context {
  public:
    OpExpr2Context(Expression_Context *ctx);

    std::vector<Expression_Context *> expression_();
    Expression_Context* expression_(size_t i);
    Op2_Context *op2_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AccessExpr_Context : public Expression_Context {
  public:
    AccessExpr_Context(Expression_Context *ctx);

    Identifyer_Context *identifyer_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OpExpr1Context : public Expression_Context {
  public:
    OpExpr1Context(Expression_Context *ctx);

    std::vector<Expression_Context *> expression_();
    Expression_Context* expression_(size_t i);
    Op1_Context *op1_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenExprContext : public Expression_Context {
  public:
    ParenExprContext(Expression_Context *ctx);

    antlr4::tree::TerminalNode *Lpar();
    Expression_Context *expression_();
    antlr4::tree::TerminalNode *Rpar();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LitExpr_Context : public Expression_Context {
  public:
    LitExpr_Context(Expression_Context *ctx);

    Literal_Context *literal_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrefixExprContext : public Expression_Context {
  public:
    PrefixExprContext(Expression_Context *ctx);

    Prefix_Context *prefix_();
    Expression_Context *expression_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DerefExprContext : public Expression_Context {
  public:
    DerefExprContext(Expression_Context *ctx);

    antlr4::tree::TerminalNode *Fslash();
    Identifyer_Context *identifyer_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OpExpr6Context : public Expression_Context {
  public:
    OpExpr6Context(Expression_Context *ctx);

    std::vector<Expression_Context *> expression_();
    Expression_Context* expression_(size_t i);
    Op6_Context *op6_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignExprContext : public Expression_Context {
  public:
    AssignExprContext(Expression_Context *ctx);

    antlr4::tree::TerminalNode *Lpar();
    Assign_Context *assign_();
    antlr4::tree::TerminalNode *Rpar();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FnCallExpr_Context : public Expression_Context {
  public:
    FnCallExpr_Context(Expression_Context *ctx);

    FnCallContext *fnCall();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Expression_Context* expression_();
  Expression_Context* expression_(int precedence);
  class  Identifyer_Context : public antlr4::ParserRuleContext {
  public:
    Identifyer_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Identifyer_Context() = default;
    void copyFrom(Identifyer_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FnCallChainAccessContext : public Identifyer_Context {
  public:
    FnCallChainAccessContext(Identifyer_Context *ctx);

    Identifyer_Context *identifyer_();
    antlr4::tree::TerminalNode *Lpar();
    antlr4::tree::TerminalNode *Rpar();
    IdentifyerChain_Context *identifyerChain_();
    ArgsContext *args();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IdAccessContext : public Identifyer_Context {
  public:
    IdAccessContext(Identifyer_Context *ctx);

    antlr4::tree::TerminalNode *Id();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IncludeIdAccessContext : public Identifyer_Context {
  public:
    IncludeIdAccessContext(Identifyer_Context *ctx);

    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *ColonColon();
    Identifyer_Context *identifyer_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DefaultAccessContext : public Identifyer_Context {
  public:
    DefaultAccessContext(Identifyer_Context *ctx);

    antlr4::tree::TerminalNode *DefId();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IdReferenceContext : public Identifyer_Context {
  public:
    IdReferenceContext(Identifyer_Context *ctx);

    antlr4::tree::TerminalNode *AndSign();
    Identifyer_Context *identifyer_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ChainAccessContext : public Identifyer_Context {
  public:
    ChainAccessContext(Identifyer_Context *ctx);

    Literal_Context *literal_();
    IdentifyerChain_Context *identifyerChain_();
    Identifyer_Context *identifyer_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Identifyer_Context* identifyer_();
  Identifyer_Context* identifyer_(int precedence);
  class  IdentifyerChain_Context : public antlr4::ParserRuleContext {
  public:
    IdentifyerChain_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    IdentifyerChain_Context() = default;
    void copyFrom(IdentifyerChain_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DotAccessContext : public IdentifyerChain_Context {
  public:
    DotAccessContext(IdentifyerChain_Context *ctx);

    antlr4::tree::TerminalNode *Dot();
    antlr4::tree::TerminalNode *Id();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArrExprAccessContext : public IdentifyerChain_Context {
  public:
    ArrExprAccessContext(IdentifyerChain_Context *ctx);

    antlr4::tree::TerminalNode *Lbrack();
    Expression_Context *expression_();
    antlr4::tree::TerminalNode *Rbrack();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArrArgsAccessContext : public IdentifyerChain_Context {
  public:
    ArrArgsAccessContext(IdentifyerChain_Context *ctx);

    antlr4::tree::TerminalNode *Lbrack();
    ArgsContext *args();
    antlr4::tree::TerminalNode *Rbrack();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  IdentifyerChain_Context* identifyerChain_();

  class  FnCallContext : public antlr4::ParserRuleContext {
  public:
    FnCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Identifyer_Context *identifyer_();
    ArgsContext *args();
    antlr4::tree::TerminalNode *Lpar();
    antlr4::tree::TerminalNode *Rpar();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FnCallContext* fnCall();

  class  Literal_Context : public antlr4::ParserRuleContext {
  public:
    Literal_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Literal_Context() = default;
    void copyFrom(Literal_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ArrayLitContext : public Literal_Context {
  public:
    ArrayLitContext(Literal_Context *ctx);

    antlr4::tree::TerminalNode *Lbrack();
    std::vector<ArgsContext *> args();
    ArgsContext* args(size_t i);
    antlr4::tree::TerminalNode *Rbrack();
    std::vector<antlr4::tree::TerminalNode *> Semi();
    antlr4::tree::TerminalNode* Semi(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SStringLitContext : public Literal_Context {
  public:
    SStringLitContext(Literal_Context *ctx);

    antlr4::tree::TerminalNode *StringLit();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  KeywordLit_Context : public Literal_Context {
  public:
    KeywordLit_Context(Literal_Context *ctx);

    KeywordLiteral_Context *keywordLiteral_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MatrixLitContext : public Literal_Context {
  public:
    MatrixLitContext(Literal_Context *ctx);

    antlr4::tree::TerminalNode *Lbrace();
    std::vector<ArgsContext *> args();
    ArgsContext* args(size_t i);
    antlr4::tree::TerminalNode *Rbrace();
    std::vector<antlr4::tree::TerminalNode *> Semi();
    antlr4::tree::TerminalNode* Semi(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumLitContext : public Literal_Context {
  public:
    NumLitContext(Literal_Context *ctx);

    antlr4::tree::TerminalNode *Number();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  HashLitContext : public Literal_Context {
  public:
    HashLitContext(Literal_Context *ctx);

    antlr4::tree::TerminalNode *Lbrace();
    antlr4::tree::TerminalNode *Rbrace();
    std::vector<Pair_Context *> pair_();
    Pair_Context* pair_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Com();
    antlr4::tree::TerminalNode* Com(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DStringLitContext : public Literal_Context {
  public:
    DStringLitContext(Literal_Context *ctx);

    antlr4::tree::TerminalNode *String();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Literal_Context* literal_();

  class  Pair_Context : public antlr4::ParserRuleContext {
  public:
    Pair_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Pair_Context() = default;
    void copyFrom(Pair_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PairValueContext : public Pair_Context {
  public:
    PairValueContext(Pair_Context *ctx);

    antlr4::Token *Key = nullptr;
    antlr4::tree::TerminalNode *Colon();
    Value_Context *value_();
    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *String();
    antlr4::tree::TerminalNode *StringLit();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PairArgsContext : public Pair_Context {
  public:
    PairArgsContext(Pair_Context *ctx);

    antlr4::Token *Key = nullptr;
    antlr4::tree::TerminalNode *Colon();
    ArgsContext *args();
    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *String();
    antlr4::tree::TerminalNode *StringLit();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Pair_Context* pair_();

  class  KeywordLiteral_Context : public antlr4::ParserRuleContext {
  public:
    KeywordLiteral_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    KeywordLiteral_Context() = default;
    void copyFrom(KeywordLiteral_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TrueLitContext : public KeywordLiteral_Context {
  public:
    TrueLitContext(KeywordLiteral_Context *ctx);

    antlr4::tree::TerminalNode *True();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FalseLitContext : public KeywordLiteral_Context {
  public:
    FalseLitContext(KeywordLiteral_Context *ctx);

    antlr4::tree::TerminalNode *False();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NullLitContext : public KeywordLiteral_Context {
  public:
    NullLitContext(KeywordLiteral_Context *ctx);

    antlr4::tree::TerminalNode *Null();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  KeywordLiteral_Context* keywordLiteral_();

  class  Assign_Context : public antlr4::ParserRuleContext {
  public:
    Assign_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Assign_Context() = default;
    void copyFrom(Assign_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MinAssignContext : public Assign_Context {
  public:
    MinAssignContext(Assign_Context *ctx);

    antlr4::tree::TerminalNode *MinEq();
    Expression_Context *expression_();
    Identifyer_Context *identifyer_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SetRefAssignContext : public Assign_Context {
  public:
    SetRefAssignContext(Assign_Context *ctx);

    Identifyer_Context *identifyer_();
    antlr4::tree::TerminalNode *RLarrow();
    Value_Context *value_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DeclareAssignContext : public Assign_Context {
  public:
    DeclareAssignContext(Assign_Context *ctx);

    antlr4::tree::TerminalNode *Decl();
    std::vector<VarDeclare_Context *> varDeclare_();
    VarDeclare_Context* varDeclare_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Com();
    antlr4::tree::TerminalNode* Com(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqAssignArgsContext : public Assign_Context {
  public:
    EqAssignArgsContext(Assign_Context *ctx);

    ArgsContext *args();
    std::vector<Identifyer_Context *> identifyer_();
    Identifyer_Context* identifyer_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Eq();
    antlr4::tree::TerminalNode* Eq(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PowAssignContext : public Assign_Context {
  public:
    PowAssignContext(Assign_Context *ctx);

    antlr4::tree::TerminalNode *PowEq();
    Expression_Context *expression_();
    Identifyer_Context *identifyer_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DivAssignContext : public Assign_Context {
  public:
    DivAssignContext(Assign_Context *ctx);

    antlr4::tree::TerminalNode *DivEq();
    Expression_Context *expression_();
    Identifyer_Context *identifyer_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultAssignContext : public Assign_Context {
  public:
    MultAssignContext(Assign_Context *ctx);

    antlr4::tree::TerminalNode *MultEq();
    Expression_Context *expression_();
    Identifyer_Context *identifyer_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SetRefAssignArgsContext : public Assign_Context {
  public:
    SetRefAssignArgsContext(Assign_Context *ctx);

    Identifyer_Context *identifyer_();
    antlr4::tree::TerminalNode *RLarrow();
    ArgsContext *args();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IncremContext : public Assign_Context {
  public:
    IncremContext(Assign_Context *ctx);

    antlr4::tree::TerminalNode *Increm();
    Identifyer_Context *identifyer_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqAssignContext : public Assign_Context {
  public:
    EqAssignContext(Assign_Context *ctx);

    Value_Context *value_();
    std::vector<Identifyer_Context *> identifyer_();
    Identifyer_Context* identifyer_(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Eq();
    antlr4::tree::TerminalNode* Eq(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DefaultEqAssignContext : public Assign_Context {
  public:
    DefaultEqAssignContext(Assign_Context *ctx);

    antlr4::tree::TerminalNode *Eq();
    Value_Context *value_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddAssignContext : public Assign_Context {
  public:
    AddAssignContext(Assign_Context *ctx);

    antlr4::tree::TerminalNode *PlusEq();
    Expression_Context *expression_();
    Identifyer_Context *identifyer_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DecremContext : public Assign_Context {
  public:
    DecremContext(Assign_Context *ctx);

    antlr4::tree::TerminalNode *Decrem();
    Identifyer_Context *identifyer_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ModAssignContext : public Assign_Context {
  public:
    ModAssignContext(Assign_Context *ctx);

    antlr4::tree::TerminalNode *ModEq();
    Expression_Context *expression_();
    Identifyer_Context *identifyer_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Assign_Context* assign_();

  class  VarDeclare_Context : public antlr4::ParserRuleContext {
  public:
    VarDeclare_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    VarDeclare_Context() = default;
    void copyFrom(VarDeclare_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NoInitVarDeclarContext : public VarDeclare_Context {
  public:
    NoInitVarDeclarContext(VarDeclare_Context *ctx);

    antlr4::tree::TerminalNode *Id();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InitVarDeclarContext : public VarDeclare_Context {
  public:
    InitVarDeclarContext(VarDeclare_Context *ctx);

    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *Eq();
    Value_Context *value_();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  InitVarDeclarArgsContext : public VarDeclare_Context {
  public:
    InitVarDeclarArgsContext(VarDeclare_Context *ctx);

    antlr4::tree::TerminalNode *Id();
    antlr4::tree::TerminalNode *Eq();
    ArgsContext *args();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  VarDeclare_Context* varDeclare_();

  class  Prefix_Context : public antlr4::ParserRuleContext {
  public:
    Prefix_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Prefix_Context() = default;
    void copyFrom(Prefix_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  NegatePrefixContext : public Prefix_Context {
  public:
    NegatePrefixContext(Prefix_Context *ctx);

    antlr4::tree::TerminalNode *ExPoint();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NegativePrefixContext : public Prefix_Context {
  public:
    NegativePrefixContext(Prefix_Context *ctx);

    antlr4::tree::TerminalNode *Min();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Prefix_Context* prefix_();

  class  HighPrioritySuffix_Context : public antlr4::ParserRuleContext {
  public:
    HighPrioritySuffix_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    HighPrioritySuffix_Context() = default;
    void copyFrom(HighPrioritySuffix_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExcitedSuffContext : public HighPrioritySuffix_Context {
  public:
    ExcitedSuffContext(HighPrioritySuffix_Context *ctx);

    antlr4::tree::TerminalNode *ExPoint();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  HighPrioritySuffix_Context* highPrioritySuffix_();

  class  Op1_Context : public antlr4::ParserRuleContext {
  public:
    Op1_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Op1_Context() = default;
    void copyFrom(Op1_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  PowOpContext : public Op1_Context {
  public:
    PowOpContext(Op1_Context *ctx);

    antlr4::tree::TerminalNode *Pow();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Op1_Context* op1_();

  class  Op2_Context : public antlr4::ParserRuleContext {
  public:
    Op2_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Op2_Context() = default;
    void copyFrom(Op2_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DivOpContext : public Op2_Context {
  public:
    DivOpContext(Op2_Context *ctx);

    antlr4::tree::TerminalNode *Bslash();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ModOpContext : public Op2_Context {
  public:
    ModOpContext(Op2_Context *ctx);

    antlr4::tree::TerminalNode *Mod();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitAndOpContext : public Op2_Context {
  public:
    BitAndOpContext(Op2_Context *ctx);

    antlr4::tree::TerminalNode *AndSign();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultOpContext : public Op2_Context {
  public:
    MultOpContext(Op2_Context *ctx);

    antlr4::tree::TerminalNode *Star();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BitOrOpContext : public Op2_Context {
  public:
    BitOrOpContext(Op2_Context *ctx);

    antlr4::tree::TerminalNode *Bar();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CrossMultOpContext : public Op2_Context {
  public:
    CrossMultOpContext(Op2_Context *ctx);

    antlr4::tree::TerminalNode *StarStar();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Op2_Context* op2_();

  class  Op3_Context : public antlr4::ParserRuleContext {
  public:
    Op3_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Op3_Context() = default;
    void copyFrom(Op3_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MinOpContext : public Op3_Context {
  public:
    MinOpContext(Op3_Context *ctx);

    antlr4::tree::TerminalNode *Min();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlusOpContext : public Op3_Context {
  public:
    PlusOpContext(Op3_Context *ctx);

    antlr4::tree::TerminalNode *Plus();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Op3_Context* op3_();

  class  Op4_Context : public antlr4::ParserRuleContext {
  public:
    Op4_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Op4_Context() = default;
    void copyFrom(Op4_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DefinedOrOpContext : public Op4_Context {
  public:
    DefinedOrOpContext(Op4_Context *ctx);

    antlr4::tree::TerminalNode *DefOr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Op4_Context* op4_();

  class  Op5_Context : public antlr4::ParserRuleContext {
  public:
    Op5_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Op5_Context() = default;
    void copyFrom(Op5_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BoolDeepNeqOpContext : public Op5_Context {
  public:
    BoolDeepNeqOpContext(Op5_Context *ctx);

    antlr4::tree::TerminalNode *BoolDeepNeq();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BoolEqOpContext : public Op5_Context {
  public:
    BoolEqOpContext(Op5_Context *ctx);

    antlr4::tree::TerminalNode *BoolEq();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BoolLtOpContext : public Op5_Context {
  public:
    BoolLtOpContext(Op5_Context *ctx);

    antlr4::tree::TerminalNode *Lt();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BoolDeepEqOpContext : public Op5_Context {
  public:
    BoolDeepEqOpContext(Op5_Context *ctx);

    antlr4::tree::TerminalNode *BoolDeepEq();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BoolGtOpContext : public Op5_Context {
  public:
    BoolGtOpContext(Op5_Context *ctx);

    antlr4::tree::TerminalNode *Gt();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BoolGtEqOpContext : public Op5_Context {
  public:
    BoolGtEqOpContext(Op5_Context *ctx);

    antlr4::tree::TerminalNode *GtEq();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BoolNeqOpContext : public Op5_Context {
  public:
    BoolNeqOpContext(Op5_Context *ctx);

    antlr4::tree::TerminalNode *BoolNeq();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BoolLtEqOpContext : public Op5_Context {
  public:
    BoolLtEqOpContext(Op5_Context *ctx);

    antlr4::tree::TerminalNode *LtEq();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Op5_Context* op5_();

  class  Op6_Context : public antlr4::ParserRuleContext {
  public:
    Op6_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Op6_Context() = default;
    void copyFrom(Op6_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  OrOpContext : public Op6_Context {
  public:
    OrOpContext(Op6_Context *ctx);

    antlr4::tree::TerminalNode *Or();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AndOpContext : public Op6_Context {
  public:
    AndOpContext(Op6_Context *ctx);

    antlr4::tree::TerminalNode *And();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Op6_Context* op6_();

  class  LowPrioritySuffix_Context : public antlr4::ParserRuleContext {
  public:
    LowPrioritySuffix_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LowPrioritySuffix_Context() = default;
    void copyFrom(LowPrioritySuffix_Context *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MatchSuffContext : public LowPrioritySuffix_Context {
  public:
    MatchSuffContext(LowPrioritySuffix_Context *ctx);

    MatchRegexContext *matchRegex();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LowPrioritySuffix_Context* lowPrioritySuffix_();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool keywordStatement_Sempred(KeywordStatement_Context *_localctx, size_t predicateIndex);
  bool compoundAction_Sempred(CompoundAction_Context *_localctx, size_t predicateIndex);
  bool expression_Sempred(Expression_Context *_localctx, size_t predicateIndex);
  bool identifyer_Sempred(Identifyer_Context *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace GParser
