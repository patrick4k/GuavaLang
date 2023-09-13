
// Generated from C:/Users/Patrick/Documents/Code/Guava/Guava/guava/GuavaParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "GuavaParserVisitor.h"


namespace GParser {

/**
 * This class provides an empty implementation of GuavaParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  GuavaParserBaseVisitor : public GuavaParserVisitor {
public:

  virtual std::any visitScript_(GuavaParser::Script_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaration_(GuavaParser::Declaration_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAction_(GuavaParser::Action_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitScope(GuavaParser::ScopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement_(GuavaParser::Statement_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStat(GuavaParser::ReturnStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOnceStat(GuavaParser::OnceStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNextStat(GuavaParser::NextStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLastStat(GuavaParser::LastStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBreakStat(GuavaParser::BreakStatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBody_(GuavaParser::Body_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitControlFlow_(GuavaParser::ControlFlow_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoop_(GuavaParser::Loop_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoopOnScopeOnExpr(GuavaParser::LoopOnScopeOnExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoopOnScopeOnArgs(GuavaParser::LoopOnScopeOnArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoopOnBodyOnExpr(GuavaParser::LoopOnBodyOnExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoopOnBodyOnArgs(GuavaParser::LoopOnBodyOnArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDoWhileLoop(GuavaParser::DoWhileLoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoundStatement(GuavaParser::CompoundStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementCompound(GuavaParser::StatementCompoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfScopeCompound(GuavaParser::IfScopeCompoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoopScopeCompound(GuavaParser::LoopScopeCompoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfCompound(GuavaParser::IfCompoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStatement_(GuavaParser::IfStatement_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfScope(GuavaParser::IfScopeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfBody(GuavaParser::IfBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfKeyword(GuavaParser::IfKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnlessKeyword(GuavaParser::UnlessKeywordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForLoop(GuavaParser::ForLoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoopLoop(GuavaParser::LoopLoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConditionalLoop(GuavaParser::ConditionalLoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileLoop(GuavaParser::WhileLoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUntilLoop(GuavaParser::UntilLoopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFnDeclaration(GuavaParser::FnDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambda(GuavaParser::LambdaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParams(GuavaParser::ParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamsExpand(GuavaParser::ParamsExpandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgs(GuavaParser::ArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArg(GuavaParser::ArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgExpand(GuavaParser::ArgExpandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRangeArg(GuavaParser::RangeArgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMatchRegex(GuavaParser::MatchRegexContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnAllMatchOption(GuavaParser::ReturnAllMatchOptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValue_(GuavaParser::Value_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefaultSuffixExpr(GuavaParser::DefaultSuffixExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSuffixExpr(GuavaParser::SuffixExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpExpr5(GuavaParser::OpExpr5Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpExpr4(GuavaParser::OpExpr4Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpExpr3(GuavaParser::OpExpr3Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpExpr2(GuavaParser::OpExpr2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAccessExpr_(GuavaParser::AccessExpr_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpExpr1(GuavaParser::OpExpr1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenExpr(GuavaParser::ParenExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLitExpr_(GuavaParser::LitExpr_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrefixExpr(GuavaParser::PrefixExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDerefExpr(GuavaParser::DerefExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOpExpr6(GuavaParser::OpExpr6Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignExpr(GuavaParser::AssignExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFnCallExpr_(GuavaParser::FnCallExpr_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFnCallChainAccess(GuavaParser::FnCallChainAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdAccess(GuavaParser::IdAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIncludeIdAccess(GuavaParser::IncludeIdAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefaultAccess(GuavaParser::DefaultAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdReference(GuavaParser::IdReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitChainAccess(GuavaParser::ChainAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDotAccess(GuavaParser::DotAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrExprAccess(GuavaParser::ArrExprAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrArgsAccess(GuavaParser::ArrArgsAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFnCall(GuavaParser::FnCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKeywordLit_(GuavaParser::KeywordLit_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDStringLit(GuavaParser::DStringLitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSStringLit(GuavaParser::SStringLitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayLit(GuavaParser::ArrayLitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHashLit(GuavaParser::HashLitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMatrixLit(GuavaParser::MatrixLitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumLit(GuavaParser::NumLitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPairValue(GuavaParser::PairValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPairArgs(GuavaParser::PairArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTrueLit(GuavaParser::TrueLitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFalseLit(GuavaParser::FalseLitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNullLit(GuavaParser::NullLitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclareAssign(GuavaParser::DeclareAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqAssign(GuavaParser::EqAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqAssignArgs(GuavaParser::EqAssignArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetRefAssign(GuavaParser::SetRefAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSetRefAssignArgs(GuavaParser::SetRefAssignArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefaultEqAssign(GuavaParser::DefaultEqAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPowAssign(GuavaParser::PowAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultAssign(GuavaParser::MultAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDivAssign(GuavaParser::DivAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModAssign(GuavaParser::ModAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddAssign(GuavaParser::AddAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMinAssign(GuavaParser::MinAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIncrem(GuavaParser::IncremContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecrem(GuavaParser::DecremContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNoInitVarDeclar(GuavaParser::NoInitVarDeclarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitVarDeclar(GuavaParser::InitVarDeclarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitVarDeclarArgs(GuavaParser::InitVarDeclarArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNegatePrefix(GuavaParser::NegatePrefixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNegativePrefix(GuavaParser::NegativePrefixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExcitedSuff(GuavaParser::ExcitedSuffContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPowOp(GuavaParser::PowOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultOp(GuavaParser::MultOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCrossMultOp(GuavaParser::CrossMultOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDivOp(GuavaParser::DivOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModOp(GuavaParser::ModOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBitOrOp(GuavaParser::BitOrOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBitAndOp(GuavaParser::BitAndOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlusOp(GuavaParser::PlusOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMinOp(GuavaParser::MinOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinedOrOp(GuavaParser::DefinedOrOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolEqOp(GuavaParser::BoolEqOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolDeepEqOp(GuavaParser::BoolDeepEqOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolNeqOp(GuavaParser::BoolNeqOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolDeepNeqOp(GuavaParser::BoolDeepNeqOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolGtOp(GuavaParser::BoolGtOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolGtEqOp(GuavaParser::BoolGtEqOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolLtOp(GuavaParser::BoolLtOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolLtEqOp(GuavaParser::BoolLtEqOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrOp(GuavaParser::OrOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAndOp(GuavaParser::AndOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMatchSuff(GuavaParser::MatchSuffContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace GParser
