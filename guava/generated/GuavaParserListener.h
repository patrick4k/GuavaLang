
// Generated from C:/Users/Patrick/Documents/Code/Guava/Guava/guava/GuavaParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "GuavaParser.h"


namespace GParser {

/**
 * This interface defines an abstract listener for a parse tree produced by GuavaParser.
 */
class  GuavaParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterScript_(GuavaParser::Script_Context *ctx) = 0;
  virtual void exitScript_(GuavaParser::Script_Context *ctx) = 0;

  virtual void enterDeclaration_(GuavaParser::Declaration_Context *ctx) = 0;
  virtual void exitDeclaration_(GuavaParser::Declaration_Context *ctx) = 0;

  virtual void enterAction_(GuavaParser::Action_Context *ctx) = 0;
  virtual void exitAction_(GuavaParser::Action_Context *ctx) = 0;

  virtual void enterScope(GuavaParser::ScopeContext *ctx) = 0;
  virtual void exitScope(GuavaParser::ScopeContext *ctx) = 0;

  virtual void enterStatement_(GuavaParser::Statement_Context *ctx) = 0;
  virtual void exitStatement_(GuavaParser::Statement_Context *ctx) = 0;

  virtual void enterReturnStat(GuavaParser::ReturnStatContext *ctx) = 0;
  virtual void exitReturnStat(GuavaParser::ReturnStatContext *ctx) = 0;

  virtual void enterOnceStat(GuavaParser::OnceStatContext *ctx) = 0;
  virtual void exitOnceStat(GuavaParser::OnceStatContext *ctx) = 0;

  virtual void enterNextStat(GuavaParser::NextStatContext *ctx) = 0;
  virtual void exitNextStat(GuavaParser::NextStatContext *ctx) = 0;

  virtual void enterLastStat(GuavaParser::LastStatContext *ctx) = 0;
  virtual void exitLastStat(GuavaParser::LastStatContext *ctx) = 0;

  virtual void enterBreakStat(GuavaParser::BreakStatContext *ctx) = 0;
  virtual void exitBreakStat(GuavaParser::BreakStatContext *ctx) = 0;

  virtual void enterBody_(GuavaParser::Body_Context *ctx) = 0;
  virtual void exitBody_(GuavaParser::Body_Context *ctx) = 0;

  virtual void enterControlFlow_(GuavaParser::ControlFlow_Context *ctx) = 0;
  virtual void exitControlFlow_(GuavaParser::ControlFlow_Context *ctx) = 0;

  virtual void enterLoop_(GuavaParser::Loop_Context *ctx) = 0;
  virtual void exitLoop_(GuavaParser::Loop_Context *ctx) = 0;

  virtual void enterLoopOnScopeOnExpr(GuavaParser::LoopOnScopeOnExprContext *ctx) = 0;
  virtual void exitLoopOnScopeOnExpr(GuavaParser::LoopOnScopeOnExprContext *ctx) = 0;

  virtual void enterLoopOnScopeOnArgs(GuavaParser::LoopOnScopeOnArgsContext *ctx) = 0;
  virtual void exitLoopOnScopeOnArgs(GuavaParser::LoopOnScopeOnArgsContext *ctx) = 0;

  virtual void enterLoopOnBodyOnExpr(GuavaParser::LoopOnBodyOnExprContext *ctx) = 0;
  virtual void exitLoopOnBodyOnExpr(GuavaParser::LoopOnBodyOnExprContext *ctx) = 0;

  virtual void enterLoopOnBodyOnArgs(GuavaParser::LoopOnBodyOnArgsContext *ctx) = 0;
  virtual void exitLoopOnBodyOnArgs(GuavaParser::LoopOnBodyOnArgsContext *ctx) = 0;

  virtual void enterDoWhileLoop(GuavaParser::DoWhileLoopContext *ctx) = 0;
  virtual void exitDoWhileLoop(GuavaParser::DoWhileLoopContext *ctx) = 0;

  virtual void enterCompoundStatement(GuavaParser::CompoundStatementContext *ctx) = 0;
  virtual void exitCompoundStatement(GuavaParser::CompoundStatementContext *ctx) = 0;

  virtual void enterStatementCompound(GuavaParser::StatementCompoundContext *ctx) = 0;
  virtual void exitStatementCompound(GuavaParser::StatementCompoundContext *ctx) = 0;

  virtual void enterIfScopeCompound(GuavaParser::IfScopeCompoundContext *ctx) = 0;
  virtual void exitIfScopeCompound(GuavaParser::IfScopeCompoundContext *ctx) = 0;

  virtual void enterLoopScopeCompound(GuavaParser::LoopScopeCompoundContext *ctx) = 0;
  virtual void exitLoopScopeCompound(GuavaParser::LoopScopeCompoundContext *ctx) = 0;

  virtual void enterIfCompound(GuavaParser::IfCompoundContext *ctx) = 0;
  virtual void exitIfCompound(GuavaParser::IfCompoundContext *ctx) = 0;

  virtual void enterIfStatement_(GuavaParser::IfStatement_Context *ctx) = 0;
  virtual void exitIfStatement_(GuavaParser::IfStatement_Context *ctx) = 0;

  virtual void enterIfScope(GuavaParser::IfScopeContext *ctx) = 0;
  virtual void exitIfScope(GuavaParser::IfScopeContext *ctx) = 0;

  virtual void enterIfBody(GuavaParser::IfBodyContext *ctx) = 0;
  virtual void exitIfBody(GuavaParser::IfBodyContext *ctx) = 0;

  virtual void enterIfKeyword(GuavaParser::IfKeywordContext *ctx) = 0;
  virtual void exitIfKeyword(GuavaParser::IfKeywordContext *ctx) = 0;

  virtual void enterUnlessKeyword(GuavaParser::UnlessKeywordContext *ctx) = 0;
  virtual void exitUnlessKeyword(GuavaParser::UnlessKeywordContext *ctx) = 0;

  virtual void enterForLoop(GuavaParser::ForLoopContext *ctx) = 0;
  virtual void exitForLoop(GuavaParser::ForLoopContext *ctx) = 0;

  virtual void enterLoopLoop(GuavaParser::LoopLoopContext *ctx) = 0;
  virtual void exitLoopLoop(GuavaParser::LoopLoopContext *ctx) = 0;

  virtual void enterConditionalLoop(GuavaParser::ConditionalLoopContext *ctx) = 0;
  virtual void exitConditionalLoop(GuavaParser::ConditionalLoopContext *ctx) = 0;

  virtual void enterWhileLoop(GuavaParser::WhileLoopContext *ctx) = 0;
  virtual void exitWhileLoop(GuavaParser::WhileLoopContext *ctx) = 0;

  virtual void enterUntilLoop(GuavaParser::UntilLoopContext *ctx) = 0;
  virtual void exitUntilLoop(GuavaParser::UntilLoopContext *ctx) = 0;

  virtual void enterFnDeclaration(GuavaParser::FnDeclarationContext *ctx) = 0;
  virtual void exitFnDeclaration(GuavaParser::FnDeclarationContext *ctx) = 0;

  virtual void enterLambda(GuavaParser::LambdaContext *ctx) = 0;
  virtual void exitLambda(GuavaParser::LambdaContext *ctx) = 0;

  virtual void enterParams(GuavaParser::ParamsContext *ctx) = 0;
  virtual void exitParams(GuavaParser::ParamsContext *ctx) = 0;

  virtual void enterParamsExpand(GuavaParser::ParamsExpandContext *ctx) = 0;
  virtual void exitParamsExpand(GuavaParser::ParamsExpandContext *ctx) = 0;

  virtual void enterArgs(GuavaParser::ArgsContext *ctx) = 0;
  virtual void exitArgs(GuavaParser::ArgsContext *ctx) = 0;

  virtual void enterArg(GuavaParser::ArgContext *ctx) = 0;
  virtual void exitArg(GuavaParser::ArgContext *ctx) = 0;

  virtual void enterArgExpand(GuavaParser::ArgExpandContext *ctx) = 0;
  virtual void exitArgExpand(GuavaParser::ArgExpandContext *ctx) = 0;

  virtual void enterRangeArg(GuavaParser::RangeArgContext *ctx) = 0;
  virtual void exitRangeArg(GuavaParser::RangeArgContext *ctx) = 0;

  virtual void enterMatchRegex(GuavaParser::MatchRegexContext *ctx) = 0;
  virtual void exitMatchRegex(GuavaParser::MatchRegexContext *ctx) = 0;

  virtual void enterReturnAllMatchOption(GuavaParser::ReturnAllMatchOptionContext *ctx) = 0;
  virtual void exitReturnAllMatchOption(GuavaParser::ReturnAllMatchOptionContext *ctx) = 0;

  virtual void enterValue_(GuavaParser::Value_Context *ctx) = 0;
  virtual void exitValue_(GuavaParser::Value_Context *ctx) = 0;

  virtual void enterDefaultSuffixExpr(GuavaParser::DefaultSuffixExprContext *ctx) = 0;
  virtual void exitDefaultSuffixExpr(GuavaParser::DefaultSuffixExprContext *ctx) = 0;

  virtual void enterSuffixExpr(GuavaParser::SuffixExprContext *ctx) = 0;
  virtual void exitSuffixExpr(GuavaParser::SuffixExprContext *ctx) = 0;

  virtual void enterOpExpr5(GuavaParser::OpExpr5Context *ctx) = 0;
  virtual void exitOpExpr5(GuavaParser::OpExpr5Context *ctx) = 0;

  virtual void enterOpExpr4(GuavaParser::OpExpr4Context *ctx) = 0;
  virtual void exitOpExpr4(GuavaParser::OpExpr4Context *ctx) = 0;

  virtual void enterOpExpr3(GuavaParser::OpExpr3Context *ctx) = 0;
  virtual void exitOpExpr3(GuavaParser::OpExpr3Context *ctx) = 0;

  virtual void enterOpExpr2(GuavaParser::OpExpr2Context *ctx) = 0;
  virtual void exitOpExpr2(GuavaParser::OpExpr2Context *ctx) = 0;

  virtual void enterAccessExpr_(GuavaParser::AccessExpr_Context *ctx) = 0;
  virtual void exitAccessExpr_(GuavaParser::AccessExpr_Context *ctx) = 0;

  virtual void enterOpExpr1(GuavaParser::OpExpr1Context *ctx) = 0;
  virtual void exitOpExpr1(GuavaParser::OpExpr1Context *ctx) = 0;

  virtual void enterParenExpr(GuavaParser::ParenExprContext *ctx) = 0;
  virtual void exitParenExpr(GuavaParser::ParenExprContext *ctx) = 0;

  virtual void enterLitExpr_(GuavaParser::LitExpr_Context *ctx) = 0;
  virtual void exitLitExpr_(GuavaParser::LitExpr_Context *ctx) = 0;

  virtual void enterPrefixExpr(GuavaParser::PrefixExprContext *ctx) = 0;
  virtual void exitPrefixExpr(GuavaParser::PrefixExprContext *ctx) = 0;

  virtual void enterDerefExpr(GuavaParser::DerefExprContext *ctx) = 0;
  virtual void exitDerefExpr(GuavaParser::DerefExprContext *ctx) = 0;

  virtual void enterOpExpr6(GuavaParser::OpExpr6Context *ctx) = 0;
  virtual void exitOpExpr6(GuavaParser::OpExpr6Context *ctx) = 0;

  virtual void enterAssignExpr(GuavaParser::AssignExprContext *ctx) = 0;
  virtual void exitAssignExpr(GuavaParser::AssignExprContext *ctx) = 0;

  virtual void enterFnCallExpr_(GuavaParser::FnCallExpr_Context *ctx) = 0;
  virtual void exitFnCallExpr_(GuavaParser::FnCallExpr_Context *ctx) = 0;

  virtual void enterFnCallChainAccess(GuavaParser::FnCallChainAccessContext *ctx) = 0;
  virtual void exitFnCallChainAccess(GuavaParser::FnCallChainAccessContext *ctx) = 0;

  virtual void enterIdAccess(GuavaParser::IdAccessContext *ctx) = 0;
  virtual void exitIdAccess(GuavaParser::IdAccessContext *ctx) = 0;

  virtual void enterIncludeIdAccess(GuavaParser::IncludeIdAccessContext *ctx) = 0;
  virtual void exitIncludeIdAccess(GuavaParser::IncludeIdAccessContext *ctx) = 0;

  virtual void enterDefaultAccess(GuavaParser::DefaultAccessContext *ctx) = 0;
  virtual void exitDefaultAccess(GuavaParser::DefaultAccessContext *ctx) = 0;

  virtual void enterIdReference(GuavaParser::IdReferenceContext *ctx) = 0;
  virtual void exitIdReference(GuavaParser::IdReferenceContext *ctx) = 0;

  virtual void enterChainAccess(GuavaParser::ChainAccessContext *ctx) = 0;
  virtual void exitChainAccess(GuavaParser::ChainAccessContext *ctx) = 0;

  virtual void enterDotAccess(GuavaParser::DotAccessContext *ctx) = 0;
  virtual void exitDotAccess(GuavaParser::DotAccessContext *ctx) = 0;

  virtual void enterArrExprAccess(GuavaParser::ArrExprAccessContext *ctx) = 0;
  virtual void exitArrExprAccess(GuavaParser::ArrExprAccessContext *ctx) = 0;

  virtual void enterArrArgsAccess(GuavaParser::ArrArgsAccessContext *ctx) = 0;
  virtual void exitArrArgsAccess(GuavaParser::ArrArgsAccessContext *ctx) = 0;

  virtual void enterFnCall(GuavaParser::FnCallContext *ctx) = 0;
  virtual void exitFnCall(GuavaParser::FnCallContext *ctx) = 0;

  virtual void enterKeywordLit_(GuavaParser::KeywordLit_Context *ctx) = 0;
  virtual void exitKeywordLit_(GuavaParser::KeywordLit_Context *ctx) = 0;

  virtual void enterDStringLit(GuavaParser::DStringLitContext *ctx) = 0;
  virtual void exitDStringLit(GuavaParser::DStringLitContext *ctx) = 0;

  virtual void enterSStringLit(GuavaParser::SStringLitContext *ctx) = 0;
  virtual void exitSStringLit(GuavaParser::SStringLitContext *ctx) = 0;

  virtual void enterArrayLit(GuavaParser::ArrayLitContext *ctx) = 0;
  virtual void exitArrayLit(GuavaParser::ArrayLitContext *ctx) = 0;

  virtual void enterHashLit(GuavaParser::HashLitContext *ctx) = 0;
  virtual void exitHashLit(GuavaParser::HashLitContext *ctx) = 0;

  virtual void enterMatrixLit(GuavaParser::MatrixLitContext *ctx) = 0;
  virtual void exitMatrixLit(GuavaParser::MatrixLitContext *ctx) = 0;

  virtual void enterNumLit(GuavaParser::NumLitContext *ctx) = 0;
  virtual void exitNumLit(GuavaParser::NumLitContext *ctx) = 0;

  virtual void enterPairValue(GuavaParser::PairValueContext *ctx) = 0;
  virtual void exitPairValue(GuavaParser::PairValueContext *ctx) = 0;

  virtual void enterPairArgs(GuavaParser::PairArgsContext *ctx) = 0;
  virtual void exitPairArgs(GuavaParser::PairArgsContext *ctx) = 0;

  virtual void enterTrueLit(GuavaParser::TrueLitContext *ctx) = 0;
  virtual void exitTrueLit(GuavaParser::TrueLitContext *ctx) = 0;

  virtual void enterFalseLit(GuavaParser::FalseLitContext *ctx) = 0;
  virtual void exitFalseLit(GuavaParser::FalseLitContext *ctx) = 0;

  virtual void enterNullLit(GuavaParser::NullLitContext *ctx) = 0;
  virtual void exitNullLit(GuavaParser::NullLitContext *ctx) = 0;

  virtual void enterDeclareAssign(GuavaParser::DeclareAssignContext *ctx) = 0;
  virtual void exitDeclareAssign(GuavaParser::DeclareAssignContext *ctx) = 0;

  virtual void enterEqAssign(GuavaParser::EqAssignContext *ctx) = 0;
  virtual void exitEqAssign(GuavaParser::EqAssignContext *ctx) = 0;

  virtual void enterEqAssignArgs(GuavaParser::EqAssignArgsContext *ctx) = 0;
  virtual void exitEqAssignArgs(GuavaParser::EqAssignArgsContext *ctx) = 0;

  virtual void enterSetRefAssign(GuavaParser::SetRefAssignContext *ctx) = 0;
  virtual void exitSetRefAssign(GuavaParser::SetRefAssignContext *ctx) = 0;

  virtual void enterSetRefAssignArgs(GuavaParser::SetRefAssignArgsContext *ctx) = 0;
  virtual void exitSetRefAssignArgs(GuavaParser::SetRefAssignArgsContext *ctx) = 0;

  virtual void enterDefaultEqAssign(GuavaParser::DefaultEqAssignContext *ctx) = 0;
  virtual void exitDefaultEqAssign(GuavaParser::DefaultEqAssignContext *ctx) = 0;

  virtual void enterPowAssign(GuavaParser::PowAssignContext *ctx) = 0;
  virtual void exitPowAssign(GuavaParser::PowAssignContext *ctx) = 0;

  virtual void enterMultAssign(GuavaParser::MultAssignContext *ctx) = 0;
  virtual void exitMultAssign(GuavaParser::MultAssignContext *ctx) = 0;

  virtual void enterDivAssign(GuavaParser::DivAssignContext *ctx) = 0;
  virtual void exitDivAssign(GuavaParser::DivAssignContext *ctx) = 0;

  virtual void enterModAssign(GuavaParser::ModAssignContext *ctx) = 0;
  virtual void exitModAssign(GuavaParser::ModAssignContext *ctx) = 0;

  virtual void enterAddAssign(GuavaParser::AddAssignContext *ctx) = 0;
  virtual void exitAddAssign(GuavaParser::AddAssignContext *ctx) = 0;

  virtual void enterMinAssign(GuavaParser::MinAssignContext *ctx) = 0;
  virtual void exitMinAssign(GuavaParser::MinAssignContext *ctx) = 0;

  virtual void enterIncrem(GuavaParser::IncremContext *ctx) = 0;
  virtual void exitIncrem(GuavaParser::IncremContext *ctx) = 0;

  virtual void enterDecrem(GuavaParser::DecremContext *ctx) = 0;
  virtual void exitDecrem(GuavaParser::DecremContext *ctx) = 0;

  virtual void enterNoInitVarDeclar(GuavaParser::NoInitVarDeclarContext *ctx) = 0;
  virtual void exitNoInitVarDeclar(GuavaParser::NoInitVarDeclarContext *ctx) = 0;

  virtual void enterInitVarDeclar(GuavaParser::InitVarDeclarContext *ctx) = 0;
  virtual void exitInitVarDeclar(GuavaParser::InitVarDeclarContext *ctx) = 0;

  virtual void enterInitVarDeclarArgs(GuavaParser::InitVarDeclarArgsContext *ctx) = 0;
  virtual void exitInitVarDeclarArgs(GuavaParser::InitVarDeclarArgsContext *ctx) = 0;

  virtual void enterNegatePrefix(GuavaParser::NegatePrefixContext *ctx) = 0;
  virtual void exitNegatePrefix(GuavaParser::NegatePrefixContext *ctx) = 0;

  virtual void enterNegativePrefix(GuavaParser::NegativePrefixContext *ctx) = 0;
  virtual void exitNegativePrefix(GuavaParser::NegativePrefixContext *ctx) = 0;

  virtual void enterExcitedSuff(GuavaParser::ExcitedSuffContext *ctx) = 0;
  virtual void exitExcitedSuff(GuavaParser::ExcitedSuffContext *ctx) = 0;

  virtual void enterPowOp(GuavaParser::PowOpContext *ctx) = 0;
  virtual void exitPowOp(GuavaParser::PowOpContext *ctx) = 0;

  virtual void enterMultOp(GuavaParser::MultOpContext *ctx) = 0;
  virtual void exitMultOp(GuavaParser::MultOpContext *ctx) = 0;

  virtual void enterCrossMultOp(GuavaParser::CrossMultOpContext *ctx) = 0;
  virtual void exitCrossMultOp(GuavaParser::CrossMultOpContext *ctx) = 0;

  virtual void enterDivOp(GuavaParser::DivOpContext *ctx) = 0;
  virtual void exitDivOp(GuavaParser::DivOpContext *ctx) = 0;

  virtual void enterModOp(GuavaParser::ModOpContext *ctx) = 0;
  virtual void exitModOp(GuavaParser::ModOpContext *ctx) = 0;

  virtual void enterBitOrOp(GuavaParser::BitOrOpContext *ctx) = 0;
  virtual void exitBitOrOp(GuavaParser::BitOrOpContext *ctx) = 0;

  virtual void enterBitAndOp(GuavaParser::BitAndOpContext *ctx) = 0;
  virtual void exitBitAndOp(GuavaParser::BitAndOpContext *ctx) = 0;

  virtual void enterPlusOp(GuavaParser::PlusOpContext *ctx) = 0;
  virtual void exitPlusOp(GuavaParser::PlusOpContext *ctx) = 0;

  virtual void enterMinOp(GuavaParser::MinOpContext *ctx) = 0;
  virtual void exitMinOp(GuavaParser::MinOpContext *ctx) = 0;

  virtual void enterDefinedOrOp(GuavaParser::DefinedOrOpContext *ctx) = 0;
  virtual void exitDefinedOrOp(GuavaParser::DefinedOrOpContext *ctx) = 0;

  virtual void enterBoolEqOp(GuavaParser::BoolEqOpContext *ctx) = 0;
  virtual void exitBoolEqOp(GuavaParser::BoolEqOpContext *ctx) = 0;

  virtual void enterBoolDeepEqOp(GuavaParser::BoolDeepEqOpContext *ctx) = 0;
  virtual void exitBoolDeepEqOp(GuavaParser::BoolDeepEqOpContext *ctx) = 0;

  virtual void enterBoolNeqOp(GuavaParser::BoolNeqOpContext *ctx) = 0;
  virtual void exitBoolNeqOp(GuavaParser::BoolNeqOpContext *ctx) = 0;

  virtual void enterBoolDeepNeqOp(GuavaParser::BoolDeepNeqOpContext *ctx) = 0;
  virtual void exitBoolDeepNeqOp(GuavaParser::BoolDeepNeqOpContext *ctx) = 0;

  virtual void enterBoolGtOp(GuavaParser::BoolGtOpContext *ctx) = 0;
  virtual void exitBoolGtOp(GuavaParser::BoolGtOpContext *ctx) = 0;

  virtual void enterBoolGtEqOp(GuavaParser::BoolGtEqOpContext *ctx) = 0;
  virtual void exitBoolGtEqOp(GuavaParser::BoolGtEqOpContext *ctx) = 0;

  virtual void enterBoolLtOp(GuavaParser::BoolLtOpContext *ctx) = 0;
  virtual void exitBoolLtOp(GuavaParser::BoolLtOpContext *ctx) = 0;

  virtual void enterBoolLtEqOp(GuavaParser::BoolLtEqOpContext *ctx) = 0;
  virtual void exitBoolLtEqOp(GuavaParser::BoolLtEqOpContext *ctx) = 0;

  virtual void enterOrOp(GuavaParser::OrOpContext *ctx) = 0;
  virtual void exitOrOp(GuavaParser::OrOpContext *ctx) = 0;

  virtual void enterAndOp(GuavaParser::AndOpContext *ctx) = 0;
  virtual void exitAndOp(GuavaParser::AndOpContext *ctx) = 0;

  virtual void enterMatchSuff(GuavaParser::MatchSuffContext *ctx) = 0;
  virtual void exitMatchSuff(GuavaParser::MatchSuffContext *ctx) = 0;


};

}  // namespace GParser
