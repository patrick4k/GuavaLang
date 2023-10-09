//
// Created by Patrick on 9/13/2023.
//

#include "../guava-common.h"
#include "GuavaScriptVisitor.h"

#include "templates/templates-common.h"
#include "../util/vec-util.h"

using namespace guavaparser;

std::any GuavaScriptVisitor::visitScript(GuavaParser::ScriptContext *ctx) {
    DEBUGOUT << "Visiting Script" << ENDL;
    PVec<Function> functions{};
    for (const auto declarationCtx : ctx->fnDeclaration()) {
        functions.emplace_back(PCast<Function>(visit(declarationCtx)));
    }
    return NewPtr<Script>(functions);
}

std::any GuavaScriptVisitor::visitFnDeclaration(GuavaParser::FnDeclarationContext *ctx) {
    const auto name = ctx->Identifier()->getText();
    const auto parameters = PVecCast<Parameter>(visit(ctx->parameters()));
    const auto returnType = SafeCast<Ptr<IExpression>>(visit(ctx->expression_()));
    const auto body = PVecCast<IStatement>(visit(ctx->scope()));
    return NewPtr<Function>(name, parameters, returnType, body);
}

std::any GuavaScriptVisitor::visitSimpleIdentifier(GuavaParser::SimpleIdentifierContext *ctx) {
    return NewPtr<SimpleIdentifier>(ctx->getText());
}

std::any GuavaScriptVisitor::visitScope(GuavaParser::ScopeContext *ctx) {
    const auto sentences = PVecCast<ISentence>(visit(ctx->sentenceCollection()));
    return NewPtr<ScopeStatement>(sentences);
}

std::any GuavaScriptVisitor::visitSentenceCollection(GuavaParser::SentenceCollectionContext *ctx) {
    auto sentenceln = PVecCast<ISentence>(vecVisit(ctx->sentenceln()));
    auto sentence = PVecCast<ISentence>(visit(ctx->sentence_()));
    return Concat(sentenceln, sentence);
}

std::any GuavaScriptVisitor::visitSentenceln(GuavaParser::SentencelnContext *ctx) {
    return GuavaParserBaseVisitor::visitSentenceln(ctx);
}

std::any GuavaScriptVisitor::visitCompoundStatement(GuavaParser::CompoundStatementContext *ctx) {
    return GuavaParserBaseVisitor::visitCompoundStatement(ctx);
}

std::any GuavaScriptVisitor::visitScopeEnsuredFollowUp(GuavaParser::ScopeEnsuredFollowUpContext *ctx) {
    return GuavaParserBaseVisitor::visitScopeEnsuredFollowUp(ctx);
}

std::any GuavaScriptVisitor::visitScopeOrBodyFollowUp(GuavaParser::ScopeOrBodyFollowUpContext *ctx) {
    return GuavaParserBaseVisitor::visitScopeOrBodyFollowUp(ctx);
}

std::any GuavaScriptVisitor::visitMatchStatement(GuavaParser::MatchStatementContext *ctx) {
    return GuavaParserBaseVisitor::visitMatchStatement(ctx);
}

std::any GuavaScriptVisitor::visitScopeEnsuredBody(GuavaParser::ScopeEnsuredBodyContext *ctx) {
    return GuavaParserBaseVisitor::visitScopeEnsuredBody(ctx);
}

std::any GuavaScriptVisitor::visitScopeOrStatmentBody(GuavaParser::ScopeOrStatmentBodyContext *ctx) {
    return GuavaParserBaseVisitor::visitScopeOrStatmentBody(ctx);
}

std::any GuavaScriptVisitor::visitKeywordStatement(GuavaParser::KeywordStatementContext *ctx) {
    return GuavaParserBaseVisitor::visitKeywordStatement(ctx);
}

std::any GuavaScriptVisitor::visitTupleIdentifier(GuavaParser::TupleIdentifierContext *ctx) {
    return GuavaParserBaseVisitor::visitTupleIdentifier(ctx);
}

std::any GuavaScriptVisitor::visitNestedIdentifier(GuavaParser::NestedIdentifierContext *ctx) {
    return GuavaParserBaseVisitor::visitNestedIdentifier(ctx);
}

std::any GuavaScriptVisitor::visitTemplatedIdentifier(GuavaParser::TemplatedIdentifierContext *ctx) {
    return GuavaParserBaseVisitor::visitTemplatedIdentifier(ctx);
}

std::any GuavaScriptVisitor::visitDefaultIdentifier(GuavaParser::DefaultIdentifierContext *ctx) {
    return GuavaParserBaseVisitor::visitDefaultIdentifier(ctx);
}

std::any GuavaScriptVisitor::visitRuntimeTemplatedIdentifier(GuavaParser::RuntimeTemplatedIdentifierContext *ctx) {
    return GuavaParserBaseVisitor::visitRuntimeTemplatedIdentifier(ctx);
}

std::any GuavaScriptVisitor::visitParameter(GuavaParser::ParameterContext *ctx) {
    return GuavaParserBaseVisitor::visitParameter(ctx);
}

std::any GuavaScriptVisitor::visitParameters(GuavaParser::ParametersContext *ctx) {
    return GuavaParserBaseVisitor::visitParameters(ctx);
}

std::any GuavaScriptVisitor::visitInlineFunctionAssignment(GuavaParser::InlineFunctionAssignmentContext *ctx) {
    return GuavaParserBaseVisitor::visitInlineFunctionAssignment(ctx);
}

std::any GuavaScriptVisitor::visitReassignment(GuavaParser::ReassignmentContext *ctx) {
    return GuavaParserBaseVisitor::visitReassignment(ctx);
}

std::any GuavaScriptVisitor::visitDeclaritiveAssignment(GuavaParser::DeclaritiveAssignmentContext *ctx) {
    return GuavaParserBaseVisitor::visitDeclaritiveAssignment(ctx);
}

std::any GuavaScriptVisitor::visitMultiAssignment(GuavaParser::MultiAssignmentContext *ctx) {
    return GuavaParserBaseVisitor::visitMultiAssignment(ctx);
}

std::any GuavaScriptVisitor::visitUnwrappedTuple(GuavaParser::UnwrappedTupleContext *ctx) {
    return GuavaParserBaseVisitor::visitUnwrappedTuple(ctx);
}

std::any GuavaScriptVisitor::visitUnwrappedMatrix(GuavaParser::UnwrappedMatrixContext *ctx) {
    return GuavaParserBaseVisitor::visitUnwrappedMatrix(ctx);
}

std::any GuavaScriptVisitor::visitParenWrappedMatrix(GuavaParser::ParenWrappedMatrixContext *ctx) {
    return GuavaParserBaseVisitor::visitParenWrappedMatrix(ctx);
}

std::any GuavaScriptVisitor::visitBracketWrappedMatrix(GuavaParser::BracketWrappedMatrixContext *ctx) {
    return GuavaParserBaseVisitor::visitBracketWrappedMatrix(ctx);
}

std::any GuavaScriptVisitor::visitStatementTuple(GuavaParser::StatementTupleContext *ctx) {
    return GuavaParserBaseVisitor::visitStatementTuple(ctx);
}

std::any GuavaScriptVisitor::visitStatementMatrix(GuavaParser::StatementMatrixContext *ctx) {
    return GuavaParserBaseVisitor::visitStatementMatrix(ctx);
}

std::any GuavaScriptVisitor::visitParenStatementMatrix(GuavaParser::ParenStatementMatrixContext *ctx) {
    return GuavaParserBaseVisitor::visitParenStatementMatrix(ctx);
}

std::any GuavaScriptVisitor::visitBracketStatementMatrix(GuavaParser::BracketStatementMatrixContext *ctx) {
    return GuavaParserBaseVisitor::visitBracketStatementMatrix(ctx);
}

std::any GuavaScriptVisitor::visitParenOptStatementMatrix(GuavaParser::ParenOptStatementMatrixContext *ctx) {
    return GuavaParserBaseVisitor::visitParenOptStatementMatrix(ctx);
}

std::any GuavaScriptVisitor::visitLambda(GuavaParser::LambdaContext *ctx) {
    return GuavaParserBaseVisitor::visitLambda(ctx);
}


std::any GuavaScriptVisitor::visitUnaryPrefixExpression(GuavaParser::UnaryPrefixExpressionContext *ctx) {
    return GuavaParserBaseVisitor::visitUnaryPrefixExpression(ctx);
}

std::any GuavaScriptVisitor::visitUnaryPostfixExpression(GuavaParser::UnaryPostfixExpressionContext *ctx) {
    return GuavaParserBaseVisitor::visitUnaryPostfixExpression(ctx);
}

std::any GuavaScriptVisitor::visitBinaryExpression(GuavaParser::BinaryExpressionContext *ctx) {
    return GuavaParserBaseVisitor::visitBinaryExpression(ctx);
}

std::any GuavaScriptVisitor::visitFunctionCallExpression(GuavaParser::FunctionCallExpressionContext *ctx) {
    return GuavaParserBaseVisitor::visitFunctionCallExpression(ctx);
}

std::any GuavaScriptVisitor::visitRangeExpression(GuavaParser::RangeExpressionContext *ctx) {
    return GuavaParserBaseVisitor::visitRangeExpression(ctx);
}

std::any GuavaScriptVisitor::visitIndexExpression(GuavaParser::IndexExpressionContext *ctx) {
    return GuavaParserBaseVisitor::visitIndexExpression(ctx);
}

std::any GuavaScriptVisitor::visitLiteralExpression(GuavaParser::LiteralExpressionContext *ctx) {
    return GuavaParserBaseVisitor::visitLiteralExpression(ctx);
}

std::any GuavaScriptVisitor::visitIndexKeywordExpression(GuavaParser::IndexKeywordExpressionContext *ctx) {
    return GuavaParserBaseVisitor::visitIndexKeywordExpression(ctx);
}

std::any GuavaScriptVisitor::visitDotAccessExpression(GuavaParser::DotAccessExpressionContext *ctx) {
    return GuavaParserBaseVisitor::visitDotAccessExpression(ctx);
}
