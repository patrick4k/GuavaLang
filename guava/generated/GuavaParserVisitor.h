
// Generated from C:/Users/Patrick/Documents/Code/Guava/Guava/guava/GuavaParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "GuavaParser.h"


namespace GParser {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by GuavaParser.
 */
class  GuavaParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by GuavaParser.
   */
    virtual std::any visitScript_(GuavaParser::Script_Context *context) = 0;

    virtual std::any visitDeclaration_(GuavaParser::Declaration_Context *context) = 0;

    virtual std::any visitAction_(GuavaParser::Action_Context *context) = 0;

    virtual std::any visitScope(GuavaParser::ScopeContext *context) = 0;

    virtual std::any visitStatement_(GuavaParser::Statement_Context *context) = 0;

    virtual std::any visitReturnStat(GuavaParser::ReturnStatContext *context) = 0;

    virtual std::any visitOnceStat(GuavaParser::OnceStatContext *context) = 0;

    virtual std::any visitNextStat(GuavaParser::NextStatContext *context) = 0;

    virtual std::any visitLastStat(GuavaParser::LastStatContext *context) = 0;

    virtual std::any visitBreakStat(GuavaParser::BreakStatContext *context) = 0;

    virtual std::any visitBody_(GuavaParser::Body_Context *context) = 0;

    virtual std::any visitControlFlow_(GuavaParser::ControlFlow_Context *context) = 0;

    virtual std::any visitLoop_(GuavaParser::Loop_Context *context) = 0;

    virtual std::any visitLoopOnScopeOnExpr(GuavaParser::LoopOnScopeOnExprContext *context) = 0;

    virtual std::any visitLoopOnScopeOnArgs(GuavaParser::LoopOnScopeOnArgsContext *context) = 0;

    virtual std::any visitLoopOnBodyOnExpr(GuavaParser::LoopOnBodyOnExprContext *context) = 0;

    virtual std::any visitLoopOnBodyOnArgs(GuavaParser::LoopOnBodyOnArgsContext *context) = 0;

    virtual std::any visitDoWhileLoop(GuavaParser::DoWhileLoopContext *context) = 0;

    virtual std::any visitCompoundStatement(GuavaParser::CompoundStatementContext *context) = 0;

    virtual std::any visitStatementCompound(GuavaParser::StatementCompoundContext *context) = 0;

    virtual std::any visitIfScopeCompound(GuavaParser::IfScopeCompoundContext *context) = 0;

    virtual std::any visitLoopScopeCompound(GuavaParser::LoopScopeCompoundContext *context) = 0;

    virtual std::any visitIfCompound(GuavaParser::IfCompoundContext *context) = 0;

    virtual std::any visitIfStatement_(GuavaParser::IfStatement_Context *context) = 0;

    virtual std::any visitIfScope(GuavaParser::IfScopeContext *context) = 0;

    virtual std::any visitIfBody(GuavaParser::IfBodyContext *context) = 0;

    virtual std::any visitIfKeyword(GuavaParser::IfKeywordContext *context) = 0;

    virtual std::any visitUnlessKeyword(GuavaParser::UnlessKeywordContext *context) = 0;

    virtual std::any visitForLoop(GuavaParser::ForLoopContext *context) = 0;

    virtual std::any visitLoopLoop(GuavaParser::LoopLoopContext *context) = 0;

    virtual std::any visitConditionalLoop(GuavaParser::ConditionalLoopContext *context) = 0;

    virtual std::any visitWhileLoop(GuavaParser::WhileLoopContext *context) = 0;

    virtual std::any visitUntilLoop(GuavaParser::UntilLoopContext *context) = 0;

    virtual std::any visitFnDeclaration(GuavaParser::FnDeclarationContext *context) = 0;

    virtual std::any visitLambda(GuavaParser::LambdaContext *context) = 0;

    virtual std::any visitParams(GuavaParser::ParamsContext *context) = 0;

    virtual std::any visitParamsExpand(GuavaParser::ParamsExpandContext *context) = 0;

    virtual std::any visitArgs(GuavaParser::ArgsContext *context) = 0;

    virtual std::any visitArg(GuavaParser::ArgContext *context) = 0;

    virtual std::any visitArgExpand(GuavaParser::ArgExpandContext *context) = 0;

    virtual std::any visitRangeArg(GuavaParser::RangeArgContext *context) = 0;

    virtual std::any visitMatchRegex(GuavaParser::MatchRegexContext *context) = 0;

    virtual std::any visitReturnAllMatchOption(GuavaParser::ReturnAllMatchOptionContext *context) = 0;

    virtual std::any visitValue_(GuavaParser::Value_Context *context) = 0;

    virtual std::any visitDefaultSuffixExpr(GuavaParser::DefaultSuffixExprContext *context) = 0;

    virtual std::any visitSuffixExpr(GuavaParser::SuffixExprContext *context) = 0;

    virtual std::any visitOpExpr5(GuavaParser::OpExpr5Context *context) = 0;

    virtual std::any visitOpExpr4(GuavaParser::OpExpr4Context *context) = 0;

    virtual std::any visitOpExpr3(GuavaParser::OpExpr3Context *context) = 0;

    virtual std::any visitOpExpr2(GuavaParser::OpExpr2Context *context) = 0;

    virtual std::any visitAccessExpr_(GuavaParser::AccessExpr_Context *context) = 0;

    virtual std::any visitOpExpr1(GuavaParser::OpExpr1Context *context) = 0;

    virtual std::any visitParenExpr(GuavaParser::ParenExprContext *context) = 0;

    virtual std::any visitLitExpr_(GuavaParser::LitExpr_Context *context) = 0;

    virtual std::any visitPrefixExpr(GuavaParser::PrefixExprContext *context) = 0;

    virtual std::any visitDerefExpr(GuavaParser::DerefExprContext *context) = 0;

    virtual std::any visitOpExpr6(GuavaParser::OpExpr6Context *context) = 0;

    virtual std::any visitAssignExpr(GuavaParser::AssignExprContext *context) = 0;

    virtual std::any visitFnCallExpr_(GuavaParser::FnCallExpr_Context *context) = 0;

    virtual std::any visitFnCallChainAccess(GuavaParser::FnCallChainAccessContext *context) = 0;

    virtual std::any visitIdAccess(GuavaParser::IdAccessContext *context) = 0;

    virtual std::any visitIncludeIdAccess(GuavaParser::IncludeIdAccessContext *context) = 0;

    virtual std::any visitDefaultAccess(GuavaParser::DefaultAccessContext *context) = 0;

    virtual std::any visitIdReference(GuavaParser::IdReferenceContext *context) = 0;

    virtual std::any visitChainAccess(GuavaParser::ChainAccessContext *context) = 0;

    virtual std::any visitDotAccess(GuavaParser::DotAccessContext *context) = 0;

    virtual std::any visitArrExprAccess(GuavaParser::ArrExprAccessContext *context) = 0;

    virtual std::any visitArrArgsAccess(GuavaParser::ArrArgsAccessContext *context) = 0;

    virtual std::any visitFnCall(GuavaParser::FnCallContext *context) = 0;

    virtual std::any visitKeywordLit_(GuavaParser::KeywordLit_Context *context) = 0;

    virtual std::any visitDStringLit(GuavaParser::DStringLitContext *context) = 0;

    virtual std::any visitSStringLit(GuavaParser::SStringLitContext *context) = 0;

    virtual std::any visitArrayLit(GuavaParser::ArrayLitContext *context) = 0;

    virtual std::any visitHashLit(GuavaParser::HashLitContext *context) = 0;

    virtual std::any visitMatrixLit(GuavaParser::MatrixLitContext *context) = 0;

    virtual std::any visitNumLit(GuavaParser::NumLitContext *context) = 0;

    virtual std::any visitPairValue(GuavaParser::PairValueContext *context) = 0;

    virtual std::any visitPairArgs(GuavaParser::PairArgsContext *context) = 0;

    virtual std::any visitTrueLit(GuavaParser::TrueLitContext *context) = 0;

    virtual std::any visitFalseLit(GuavaParser::FalseLitContext *context) = 0;

    virtual std::any visitNullLit(GuavaParser::NullLitContext *context) = 0;

    virtual std::any visitDeclareAssign(GuavaParser::DeclareAssignContext *context) = 0;

    virtual std::any visitEqAssign(GuavaParser::EqAssignContext *context) = 0;

    virtual std::any visitEqAssignArgs(GuavaParser::EqAssignArgsContext *context) = 0;

    virtual std::any visitSetRefAssign(GuavaParser::SetRefAssignContext *context) = 0;

    virtual std::any visitSetRefAssignArgs(GuavaParser::SetRefAssignArgsContext *context) = 0;

    virtual std::any visitDefaultEqAssign(GuavaParser::DefaultEqAssignContext *context) = 0;

    virtual std::any visitPowAssign(GuavaParser::PowAssignContext *context) = 0;

    virtual std::any visitMultAssign(GuavaParser::MultAssignContext *context) = 0;

    virtual std::any visitDivAssign(GuavaParser::DivAssignContext *context) = 0;

    virtual std::any visitModAssign(GuavaParser::ModAssignContext *context) = 0;

    virtual std::any visitAddAssign(GuavaParser::AddAssignContext *context) = 0;

    virtual std::any visitMinAssign(GuavaParser::MinAssignContext *context) = 0;

    virtual std::any visitIncrem(GuavaParser::IncremContext *context) = 0;

    virtual std::any visitDecrem(GuavaParser::DecremContext *context) = 0;

    virtual std::any visitNoInitVarDeclar(GuavaParser::NoInitVarDeclarContext *context) = 0;

    virtual std::any visitInitVarDeclar(GuavaParser::InitVarDeclarContext *context) = 0;

    virtual std::any visitInitVarDeclarArgs(GuavaParser::InitVarDeclarArgsContext *context) = 0;

    virtual std::any visitNegatePrefix(GuavaParser::NegatePrefixContext *context) = 0;

    virtual std::any visitNegativePrefix(GuavaParser::NegativePrefixContext *context) = 0;

    virtual std::any visitExcitedSuff(GuavaParser::ExcitedSuffContext *context) = 0;

    virtual std::any visitPowOp(GuavaParser::PowOpContext *context) = 0;

    virtual std::any visitMultOp(GuavaParser::MultOpContext *context) = 0;

    virtual std::any visitCrossMultOp(GuavaParser::CrossMultOpContext *context) = 0;

    virtual std::any visitDivOp(GuavaParser::DivOpContext *context) = 0;

    virtual std::any visitModOp(GuavaParser::ModOpContext *context) = 0;

    virtual std::any visitBitOrOp(GuavaParser::BitOrOpContext *context) = 0;

    virtual std::any visitBitAndOp(GuavaParser::BitAndOpContext *context) = 0;

    virtual std::any visitPlusOp(GuavaParser::PlusOpContext *context) = 0;

    virtual std::any visitMinOp(GuavaParser::MinOpContext *context) = 0;

    virtual std::any visitDefinedOrOp(GuavaParser::DefinedOrOpContext *context) = 0;

    virtual std::any visitBoolEqOp(GuavaParser::BoolEqOpContext *context) = 0;

    virtual std::any visitBoolDeepEqOp(GuavaParser::BoolDeepEqOpContext *context) = 0;

    virtual std::any visitBoolNeqOp(GuavaParser::BoolNeqOpContext *context) = 0;

    virtual std::any visitBoolDeepNeqOp(GuavaParser::BoolDeepNeqOpContext *context) = 0;

    virtual std::any visitBoolGtOp(GuavaParser::BoolGtOpContext *context) = 0;

    virtual std::any visitBoolGtEqOp(GuavaParser::BoolGtEqOpContext *context) = 0;

    virtual std::any visitBoolLtOp(GuavaParser::BoolLtOpContext *context) = 0;

    virtual std::any visitBoolLtEqOp(GuavaParser::BoolLtEqOpContext *context) = 0;

    virtual std::any visitOrOp(GuavaParser::OrOpContext *context) = 0;

    virtual std::any visitAndOp(GuavaParser::AndOpContext *context) = 0;

    virtual std::any visitMatchSuff(GuavaParser::MatchSuffContext *context) = 0;


};

}  // namespace GParser
