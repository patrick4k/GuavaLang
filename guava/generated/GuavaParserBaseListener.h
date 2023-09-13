
// Generated from C:/Users/Patrick/Documents/Code/Guava/Guava/guava/GuavaParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "GuavaParserListener.h"


namespace GParser {

/**
 * This class provides an empty implementation of GuavaParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  GuavaParserBaseListener : public GuavaParserListener {
public:

  virtual void enterScript_(GuavaParser::Script_Context * /*ctx*/) override { }
  virtual void exitScript_(GuavaParser::Script_Context * /*ctx*/) override { }

  virtual void enterDeclaration_(GuavaParser::Declaration_Context * /*ctx*/) override { }
  virtual void exitDeclaration_(GuavaParser::Declaration_Context * /*ctx*/) override { }

  virtual void enterAction_(GuavaParser::Action_Context * /*ctx*/) override { }
  virtual void exitAction_(GuavaParser::Action_Context * /*ctx*/) override { }

  virtual void enterScope(GuavaParser::ScopeContext * /*ctx*/) override { }
  virtual void exitScope(GuavaParser::ScopeContext * /*ctx*/) override { }

  virtual void enterStatement_(GuavaParser::Statement_Context * /*ctx*/) override { }
  virtual void exitStatement_(GuavaParser::Statement_Context * /*ctx*/) override { }

  virtual void enterReturnStat(GuavaParser::ReturnStatContext * /*ctx*/) override { }
  virtual void exitReturnStat(GuavaParser::ReturnStatContext * /*ctx*/) override { }

  virtual void enterOnceStat(GuavaParser::OnceStatContext * /*ctx*/) override { }
  virtual void exitOnceStat(GuavaParser::OnceStatContext * /*ctx*/) override { }

  virtual void enterNextStat(GuavaParser::NextStatContext * /*ctx*/) override { }
  virtual void exitNextStat(GuavaParser::NextStatContext * /*ctx*/) override { }

  virtual void enterLastStat(GuavaParser::LastStatContext * /*ctx*/) override { }
  virtual void exitLastStat(GuavaParser::LastStatContext * /*ctx*/) override { }

  virtual void enterBreakStat(GuavaParser::BreakStatContext * /*ctx*/) override { }
  virtual void exitBreakStat(GuavaParser::BreakStatContext * /*ctx*/) override { }

  virtual void enterBody_(GuavaParser::Body_Context * /*ctx*/) override { }
  virtual void exitBody_(GuavaParser::Body_Context * /*ctx*/) override { }

  virtual void enterControlFlow_(GuavaParser::ControlFlow_Context * /*ctx*/) override { }
  virtual void exitControlFlow_(GuavaParser::ControlFlow_Context * /*ctx*/) override { }

  virtual void enterLoop_(GuavaParser::Loop_Context * /*ctx*/) override { }
  virtual void exitLoop_(GuavaParser::Loop_Context * /*ctx*/) override { }

  virtual void enterLoopOnScopeOnExpr(GuavaParser::LoopOnScopeOnExprContext * /*ctx*/) override { }
  virtual void exitLoopOnScopeOnExpr(GuavaParser::LoopOnScopeOnExprContext * /*ctx*/) override { }

  virtual void enterLoopOnScopeOnArgs(GuavaParser::LoopOnScopeOnArgsContext * /*ctx*/) override { }
  virtual void exitLoopOnScopeOnArgs(GuavaParser::LoopOnScopeOnArgsContext * /*ctx*/) override { }

  virtual void enterLoopOnBodyOnExpr(GuavaParser::LoopOnBodyOnExprContext * /*ctx*/) override { }
  virtual void exitLoopOnBodyOnExpr(GuavaParser::LoopOnBodyOnExprContext * /*ctx*/) override { }

  virtual void enterLoopOnBodyOnArgs(GuavaParser::LoopOnBodyOnArgsContext * /*ctx*/) override { }
  virtual void exitLoopOnBodyOnArgs(GuavaParser::LoopOnBodyOnArgsContext * /*ctx*/) override { }

  virtual void enterDoWhileLoop(GuavaParser::DoWhileLoopContext * /*ctx*/) override { }
  virtual void exitDoWhileLoop(GuavaParser::DoWhileLoopContext * /*ctx*/) override { }

  virtual void enterCompoundStatement(GuavaParser::CompoundStatementContext * /*ctx*/) override { }
  virtual void exitCompoundStatement(GuavaParser::CompoundStatementContext * /*ctx*/) override { }

  virtual void enterStatementCompound(GuavaParser::StatementCompoundContext * /*ctx*/) override { }
  virtual void exitStatementCompound(GuavaParser::StatementCompoundContext * /*ctx*/) override { }

  virtual void enterIfScopeCompound(GuavaParser::IfScopeCompoundContext * /*ctx*/) override { }
  virtual void exitIfScopeCompound(GuavaParser::IfScopeCompoundContext * /*ctx*/) override { }

  virtual void enterLoopScopeCompound(GuavaParser::LoopScopeCompoundContext * /*ctx*/) override { }
  virtual void exitLoopScopeCompound(GuavaParser::LoopScopeCompoundContext * /*ctx*/) override { }

  virtual void enterIfCompound(GuavaParser::IfCompoundContext * /*ctx*/) override { }
  virtual void exitIfCompound(GuavaParser::IfCompoundContext * /*ctx*/) override { }

  virtual void enterIfStatement_(GuavaParser::IfStatement_Context * /*ctx*/) override { }
  virtual void exitIfStatement_(GuavaParser::IfStatement_Context * /*ctx*/) override { }

  virtual void enterIfScope(GuavaParser::IfScopeContext * /*ctx*/) override { }
  virtual void exitIfScope(GuavaParser::IfScopeContext * /*ctx*/) override { }

  virtual void enterIfBody(GuavaParser::IfBodyContext * /*ctx*/) override { }
  virtual void exitIfBody(GuavaParser::IfBodyContext * /*ctx*/) override { }

  virtual void enterIfKeyword(GuavaParser::IfKeywordContext * /*ctx*/) override { }
  virtual void exitIfKeyword(GuavaParser::IfKeywordContext * /*ctx*/) override { }

  virtual void enterUnlessKeyword(GuavaParser::UnlessKeywordContext * /*ctx*/) override { }
  virtual void exitUnlessKeyword(GuavaParser::UnlessKeywordContext * /*ctx*/) override { }

  virtual void enterForLoop(GuavaParser::ForLoopContext * /*ctx*/) override { }
  virtual void exitForLoop(GuavaParser::ForLoopContext * /*ctx*/) override { }

  virtual void enterLoopLoop(GuavaParser::LoopLoopContext * /*ctx*/) override { }
  virtual void exitLoopLoop(GuavaParser::LoopLoopContext * /*ctx*/) override { }

  virtual void enterConditionalLoop(GuavaParser::ConditionalLoopContext * /*ctx*/) override { }
  virtual void exitConditionalLoop(GuavaParser::ConditionalLoopContext * /*ctx*/) override { }

  virtual void enterWhileLoop(GuavaParser::WhileLoopContext * /*ctx*/) override { }
  virtual void exitWhileLoop(GuavaParser::WhileLoopContext * /*ctx*/) override { }

  virtual void enterUntilLoop(GuavaParser::UntilLoopContext * /*ctx*/) override { }
  virtual void exitUntilLoop(GuavaParser::UntilLoopContext * /*ctx*/) override { }

  virtual void enterFnDeclaration(GuavaParser::FnDeclarationContext * /*ctx*/) override { }
  virtual void exitFnDeclaration(GuavaParser::FnDeclarationContext * /*ctx*/) override { }

  virtual void enterLambda(GuavaParser::LambdaContext * /*ctx*/) override { }
  virtual void exitLambda(GuavaParser::LambdaContext * /*ctx*/) override { }

  virtual void enterParams(GuavaParser::ParamsContext * /*ctx*/) override { }
  virtual void exitParams(GuavaParser::ParamsContext * /*ctx*/) override { }

  virtual void enterParamsExpand(GuavaParser::ParamsExpandContext * /*ctx*/) override { }
  virtual void exitParamsExpand(GuavaParser::ParamsExpandContext * /*ctx*/) override { }

  virtual void enterArgs(GuavaParser::ArgsContext * /*ctx*/) override { }
  virtual void exitArgs(GuavaParser::ArgsContext * /*ctx*/) override { }

  virtual void enterArg(GuavaParser::ArgContext * /*ctx*/) override { }
  virtual void exitArg(GuavaParser::ArgContext * /*ctx*/) override { }

  virtual void enterArgExpand(GuavaParser::ArgExpandContext * /*ctx*/) override { }
  virtual void exitArgExpand(GuavaParser::ArgExpandContext * /*ctx*/) override { }

  virtual void enterRangeArg(GuavaParser::RangeArgContext * /*ctx*/) override { }
  virtual void exitRangeArg(GuavaParser::RangeArgContext * /*ctx*/) override { }

  virtual void enterMatchRegex(GuavaParser::MatchRegexContext * /*ctx*/) override { }
  virtual void exitMatchRegex(GuavaParser::MatchRegexContext * /*ctx*/) override { }

  virtual void enterReturnAllMatchOption(GuavaParser::ReturnAllMatchOptionContext * /*ctx*/) override { }
  virtual void exitReturnAllMatchOption(GuavaParser::ReturnAllMatchOptionContext * /*ctx*/) override { }

  virtual void enterValue_(GuavaParser::Value_Context * /*ctx*/) override { }
  virtual void exitValue_(GuavaParser::Value_Context * /*ctx*/) override { }

  virtual void enterDefaultSuffixExpr(GuavaParser::DefaultSuffixExprContext * /*ctx*/) override { }
  virtual void exitDefaultSuffixExpr(GuavaParser::DefaultSuffixExprContext * /*ctx*/) override { }

  virtual void enterSuffixExpr(GuavaParser::SuffixExprContext * /*ctx*/) override { }
  virtual void exitSuffixExpr(GuavaParser::SuffixExprContext * /*ctx*/) override { }

  virtual void enterOpExpr5(GuavaParser::OpExpr5Context * /*ctx*/) override { }
  virtual void exitOpExpr5(GuavaParser::OpExpr5Context * /*ctx*/) override { }

  virtual void enterOpExpr4(GuavaParser::OpExpr4Context * /*ctx*/) override { }
  virtual void exitOpExpr4(GuavaParser::OpExpr4Context * /*ctx*/) override { }

  virtual void enterOpExpr3(GuavaParser::OpExpr3Context * /*ctx*/) override { }
  virtual void exitOpExpr3(GuavaParser::OpExpr3Context * /*ctx*/) override { }

  virtual void enterOpExpr2(GuavaParser::OpExpr2Context * /*ctx*/) override { }
  virtual void exitOpExpr2(GuavaParser::OpExpr2Context * /*ctx*/) override { }

  virtual void enterAccessExpr_(GuavaParser::AccessExpr_Context * /*ctx*/) override { }
  virtual void exitAccessExpr_(GuavaParser::AccessExpr_Context * /*ctx*/) override { }

  virtual void enterOpExpr1(GuavaParser::OpExpr1Context * /*ctx*/) override { }
  virtual void exitOpExpr1(GuavaParser::OpExpr1Context * /*ctx*/) override { }

  virtual void enterParenExpr(GuavaParser::ParenExprContext * /*ctx*/) override { }
  virtual void exitParenExpr(GuavaParser::ParenExprContext * /*ctx*/) override { }

  virtual void enterLitExpr_(GuavaParser::LitExpr_Context * /*ctx*/) override { }
  virtual void exitLitExpr_(GuavaParser::LitExpr_Context * /*ctx*/) override { }

  virtual void enterPrefixExpr(GuavaParser::PrefixExprContext * /*ctx*/) override { }
  virtual void exitPrefixExpr(GuavaParser::PrefixExprContext * /*ctx*/) override { }

  virtual void enterDerefExpr(GuavaParser::DerefExprContext * /*ctx*/) override { }
  virtual void exitDerefExpr(GuavaParser::DerefExprContext * /*ctx*/) override { }

  virtual void enterOpExpr6(GuavaParser::OpExpr6Context * /*ctx*/) override { }
  virtual void exitOpExpr6(GuavaParser::OpExpr6Context * /*ctx*/) override { }

  virtual void enterAssignExpr(GuavaParser::AssignExprContext * /*ctx*/) override { }
  virtual void exitAssignExpr(GuavaParser::AssignExprContext * /*ctx*/) override { }

  virtual void enterFnCallExpr_(GuavaParser::FnCallExpr_Context * /*ctx*/) override { }
  virtual void exitFnCallExpr_(GuavaParser::FnCallExpr_Context * /*ctx*/) override { }

  virtual void enterFnCallChainAccess(GuavaParser::FnCallChainAccessContext * /*ctx*/) override { }
  virtual void exitFnCallChainAccess(GuavaParser::FnCallChainAccessContext * /*ctx*/) override { }

  virtual void enterIdAccess(GuavaParser::IdAccessContext * /*ctx*/) override { }
  virtual void exitIdAccess(GuavaParser::IdAccessContext * /*ctx*/) override { }

  virtual void enterIncludeIdAccess(GuavaParser::IncludeIdAccessContext * /*ctx*/) override { }
  virtual void exitIncludeIdAccess(GuavaParser::IncludeIdAccessContext * /*ctx*/) override { }

  virtual void enterDefaultAccess(GuavaParser::DefaultAccessContext * /*ctx*/) override { }
  virtual void exitDefaultAccess(GuavaParser::DefaultAccessContext * /*ctx*/) override { }

  virtual void enterIdReference(GuavaParser::IdReferenceContext * /*ctx*/) override { }
  virtual void exitIdReference(GuavaParser::IdReferenceContext * /*ctx*/) override { }

  virtual void enterChainAccess(GuavaParser::ChainAccessContext * /*ctx*/) override { }
  virtual void exitChainAccess(GuavaParser::ChainAccessContext * /*ctx*/) override { }

  virtual void enterDotAccess(GuavaParser::DotAccessContext * /*ctx*/) override { }
  virtual void exitDotAccess(GuavaParser::DotAccessContext * /*ctx*/) override { }

  virtual void enterArrExprAccess(GuavaParser::ArrExprAccessContext * /*ctx*/) override { }
  virtual void exitArrExprAccess(GuavaParser::ArrExprAccessContext * /*ctx*/) override { }

  virtual void enterArrArgsAccess(GuavaParser::ArrArgsAccessContext * /*ctx*/) override { }
  virtual void exitArrArgsAccess(GuavaParser::ArrArgsAccessContext * /*ctx*/) override { }

  virtual void enterFnCall(GuavaParser::FnCallContext * /*ctx*/) override { }
  virtual void exitFnCall(GuavaParser::FnCallContext * /*ctx*/) override { }

  virtual void enterKeywordLit_(GuavaParser::KeywordLit_Context * /*ctx*/) override { }
  virtual void exitKeywordLit_(GuavaParser::KeywordLit_Context * /*ctx*/) override { }

  virtual void enterDStringLit(GuavaParser::DStringLitContext * /*ctx*/) override { }
  virtual void exitDStringLit(GuavaParser::DStringLitContext * /*ctx*/) override { }

  virtual void enterSStringLit(GuavaParser::SStringLitContext * /*ctx*/) override { }
  virtual void exitSStringLit(GuavaParser::SStringLitContext * /*ctx*/) override { }

  virtual void enterArrayLit(GuavaParser::ArrayLitContext * /*ctx*/) override { }
  virtual void exitArrayLit(GuavaParser::ArrayLitContext * /*ctx*/) override { }

  virtual void enterHashLit(GuavaParser::HashLitContext * /*ctx*/) override { }
  virtual void exitHashLit(GuavaParser::HashLitContext * /*ctx*/) override { }

  virtual void enterMatrixLit(GuavaParser::MatrixLitContext * /*ctx*/) override { }
  virtual void exitMatrixLit(GuavaParser::MatrixLitContext * /*ctx*/) override { }

  virtual void enterNumLit(GuavaParser::NumLitContext * /*ctx*/) override { }
  virtual void exitNumLit(GuavaParser::NumLitContext * /*ctx*/) override { }

  virtual void enterPairValue(GuavaParser::PairValueContext * /*ctx*/) override { }
  virtual void exitPairValue(GuavaParser::PairValueContext * /*ctx*/) override { }

  virtual void enterPairArgs(GuavaParser::PairArgsContext * /*ctx*/) override { }
  virtual void exitPairArgs(GuavaParser::PairArgsContext * /*ctx*/) override { }

  virtual void enterTrueLit(GuavaParser::TrueLitContext * /*ctx*/) override { }
  virtual void exitTrueLit(GuavaParser::TrueLitContext * /*ctx*/) override { }

  virtual void enterFalseLit(GuavaParser::FalseLitContext * /*ctx*/) override { }
  virtual void exitFalseLit(GuavaParser::FalseLitContext * /*ctx*/) override { }

  virtual void enterNullLit(GuavaParser::NullLitContext * /*ctx*/) override { }
  virtual void exitNullLit(GuavaParser::NullLitContext * /*ctx*/) override { }

  virtual void enterDeclareAssign(GuavaParser::DeclareAssignContext * /*ctx*/) override { }
  virtual void exitDeclareAssign(GuavaParser::DeclareAssignContext * /*ctx*/) override { }

  virtual void enterEqAssign(GuavaParser::EqAssignContext * /*ctx*/) override { }
  virtual void exitEqAssign(GuavaParser::EqAssignContext * /*ctx*/) override { }

  virtual void enterEqAssignArgs(GuavaParser::EqAssignArgsContext * /*ctx*/) override { }
  virtual void exitEqAssignArgs(GuavaParser::EqAssignArgsContext * /*ctx*/) override { }

  virtual void enterSetRefAssign(GuavaParser::SetRefAssignContext * /*ctx*/) override { }
  virtual void exitSetRefAssign(GuavaParser::SetRefAssignContext * /*ctx*/) override { }

  virtual void enterSetRefAssignArgs(GuavaParser::SetRefAssignArgsContext * /*ctx*/) override { }
  virtual void exitSetRefAssignArgs(GuavaParser::SetRefAssignArgsContext * /*ctx*/) override { }

  virtual void enterDefaultEqAssign(GuavaParser::DefaultEqAssignContext * /*ctx*/) override { }
  virtual void exitDefaultEqAssign(GuavaParser::DefaultEqAssignContext * /*ctx*/) override { }

  virtual void enterPowAssign(GuavaParser::PowAssignContext * /*ctx*/) override { }
  virtual void exitPowAssign(GuavaParser::PowAssignContext * /*ctx*/) override { }

  virtual void enterMultAssign(GuavaParser::MultAssignContext * /*ctx*/) override { }
  virtual void exitMultAssign(GuavaParser::MultAssignContext * /*ctx*/) override { }

  virtual void enterDivAssign(GuavaParser::DivAssignContext * /*ctx*/) override { }
  virtual void exitDivAssign(GuavaParser::DivAssignContext * /*ctx*/) override { }

  virtual void enterModAssign(GuavaParser::ModAssignContext * /*ctx*/) override { }
  virtual void exitModAssign(GuavaParser::ModAssignContext * /*ctx*/) override { }

  virtual void enterAddAssign(GuavaParser::AddAssignContext * /*ctx*/) override { }
  virtual void exitAddAssign(GuavaParser::AddAssignContext * /*ctx*/) override { }

  virtual void enterMinAssign(GuavaParser::MinAssignContext * /*ctx*/) override { }
  virtual void exitMinAssign(GuavaParser::MinAssignContext * /*ctx*/) override { }

  virtual void enterIncrem(GuavaParser::IncremContext * /*ctx*/) override { }
  virtual void exitIncrem(GuavaParser::IncremContext * /*ctx*/) override { }

  virtual void enterDecrem(GuavaParser::DecremContext * /*ctx*/) override { }
  virtual void exitDecrem(GuavaParser::DecremContext * /*ctx*/) override { }

  virtual void enterNoInitVarDeclar(GuavaParser::NoInitVarDeclarContext * /*ctx*/) override { }
  virtual void exitNoInitVarDeclar(GuavaParser::NoInitVarDeclarContext * /*ctx*/) override { }

  virtual void enterInitVarDeclar(GuavaParser::InitVarDeclarContext * /*ctx*/) override { }
  virtual void exitInitVarDeclar(GuavaParser::InitVarDeclarContext * /*ctx*/) override { }

  virtual void enterInitVarDeclarArgs(GuavaParser::InitVarDeclarArgsContext * /*ctx*/) override { }
  virtual void exitInitVarDeclarArgs(GuavaParser::InitVarDeclarArgsContext * /*ctx*/) override { }

  virtual void enterNegatePrefix(GuavaParser::NegatePrefixContext * /*ctx*/) override { }
  virtual void exitNegatePrefix(GuavaParser::NegatePrefixContext * /*ctx*/) override { }

  virtual void enterNegativePrefix(GuavaParser::NegativePrefixContext * /*ctx*/) override { }
  virtual void exitNegativePrefix(GuavaParser::NegativePrefixContext * /*ctx*/) override { }

  virtual void enterExcitedSuff(GuavaParser::ExcitedSuffContext * /*ctx*/) override { }
  virtual void exitExcitedSuff(GuavaParser::ExcitedSuffContext * /*ctx*/) override { }

  virtual void enterPowOp(GuavaParser::PowOpContext * /*ctx*/) override { }
  virtual void exitPowOp(GuavaParser::PowOpContext * /*ctx*/) override { }

  virtual void enterMultOp(GuavaParser::MultOpContext * /*ctx*/) override { }
  virtual void exitMultOp(GuavaParser::MultOpContext * /*ctx*/) override { }

  virtual void enterCrossMultOp(GuavaParser::CrossMultOpContext * /*ctx*/) override { }
  virtual void exitCrossMultOp(GuavaParser::CrossMultOpContext * /*ctx*/) override { }

  virtual void enterDivOp(GuavaParser::DivOpContext * /*ctx*/) override { }
  virtual void exitDivOp(GuavaParser::DivOpContext * /*ctx*/) override { }

  virtual void enterModOp(GuavaParser::ModOpContext * /*ctx*/) override { }
  virtual void exitModOp(GuavaParser::ModOpContext * /*ctx*/) override { }

  virtual void enterBitOrOp(GuavaParser::BitOrOpContext * /*ctx*/) override { }
  virtual void exitBitOrOp(GuavaParser::BitOrOpContext * /*ctx*/) override { }

  virtual void enterBitAndOp(GuavaParser::BitAndOpContext * /*ctx*/) override { }
  virtual void exitBitAndOp(GuavaParser::BitAndOpContext * /*ctx*/) override { }

  virtual void enterPlusOp(GuavaParser::PlusOpContext * /*ctx*/) override { }
  virtual void exitPlusOp(GuavaParser::PlusOpContext * /*ctx*/) override { }

  virtual void enterMinOp(GuavaParser::MinOpContext * /*ctx*/) override { }
  virtual void exitMinOp(GuavaParser::MinOpContext * /*ctx*/) override { }

  virtual void enterDefinedOrOp(GuavaParser::DefinedOrOpContext * /*ctx*/) override { }
  virtual void exitDefinedOrOp(GuavaParser::DefinedOrOpContext * /*ctx*/) override { }

  virtual void enterBoolEqOp(GuavaParser::BoolEqOpContext * /*ctx*/) override { }
  virtual void exitBoolEqOp(GuavaParser::BoolEqOpContext * /*ctx*/) override { }

  virtual void enterBoolDeepEqOp(GuavaParser::BoolDeepEqOpContext * /*ctx*/) override { }
  virtual void exitBoolDeepEqOp(GuavaParser::BoolDeepEqOpContext * /*ctx*/) override { }

  virtual void enterBoolNeqOp(GuavaParser::BoolNeqOpContext * /*ctx*/) override { }
  virtual void exitBoolNeqOp(GuavaParser::BoolNeqOpContext * /*ctx*/) override { }

  virtual void enterBoolDeepNeqOp(GuavaParser::BoolDeepNeqOpContext * /*ctx*/) override { }
  virtual void exitBoolDeepNeqOp(GuavaParser::BoolDeepNeqOpContext * /*ctx*/) override { }

  virtual void enterBoolGtOp(GuavaParser::BoolGtOpContext * /*ctx*/) override { }
  virtual void exitBoolGtOp(GuavaParser::BoolGtOpContext * /*ctx*/) override { }

  virtual void enterBoolGtEqOp(GuavaParser::BoolGtEqOpContext * /*ctx*/) override { }
  virtual void exitBoolGtEqOp(GuavaParser::BoolGtEqOpContext * /*ctx*/) override { }

  virtual void enterBoolLtOp(GuavaParser::BoolLtOpContext * /*ctx*/) override { }
  virtual void exitBoolLtOp(GuavaParser::BoolLtOpContext * /*ctx*/) override { }

  virtual void enterBoolLtEqOp(GuavaParser::BoolLtEqOpContext * /*ctx*/) override { }
  virtual void exitBoolLtEqOp(GuavaParser::BoolLtEqOpContext * /*ctx*/) override { }

  virtual void enterOrOp(GuavaParser::OrOpContext * /*ctx*/) override { }
  virtual void exitOrOp(GuavaParser::OrOpContext * /*ctx*/) override { }

  virtual void enterAndOp(GuavaParser::AndOpContext * /*ctx*/) override { }
  virtual void exitAndOp(GuavaParser::AndOpContext * /*ctx*/) override { }

  virtual void enterMatchSuff(GuavaParser::MatchSuffContext * /*ctx*/) override { }
  virtual void exitMatchSuff(GuavaParser::MatchSuffContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace GParser
