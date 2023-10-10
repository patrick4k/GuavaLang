//
// Created by Patrick on 9/13/2023.
//

#include "../guava-common.h"
#include "GuavaScriptVisitor.h"

#include "templates/templates-common.h"
#include "../util/vec-util.h"

using namespace guavaparser;

#define ret(type, args) return AnyTemplate(NewPtr<type>args);

std::any GuavaScriptVisitor::visitScript(GuavaParser::ScriptContext *ctx) {
    DEBUGOUT << "Visiting Script" << ENDL;
    PVec<Function> functions{};
    for (const auto declarationCtx : ctx->fnDeclaration()) {
        functions.emplace_back(PAnyCast<Function>(visit(declarationCtx)));
    }
    ret(Script, (functions))
}

std::any GuavaScriptVisitor::visitFnDeclaration(GuavaParser::FnDeclarationContext *ctx) {
    const auto name = ctx->Identifier()->getText();
    const auto parameters = PVecCast<Parameter>(visit(ctx->parameters()));
    const auto returnType = SafeAnyCast<Ptr<IExpression>>(visit(ctx->expression_()));
    const auto body = PVecCast<IStatement>(visit(ctx->scope()));
    ret(Function,(name, parameters, returnType, body))
}

std::any GuavaScriptVisitor::visitSimpleIdentifier(GuavaParser::SimpleIdentifierContext *ctx) {
    ret(SimpleIdentifier,(ctx->getText()))
}

std::any GuavaScriptVisitor::visitScope(GuavaParser::ScopeContext *ctx) {
    const auto sentences = PVecCast<ISentence>(visit(ctx->sentenceCollection()));
    ret(ScopeStatement,(sentences))
}

std::any GuavaScriptVisitor::visitSentenceCollection(GuavaParser::SentenceCollectionContext *ctx) {
    auto sentenceln = PVecCast<ISentence>(vecVisit(ctx->sentenceln()));
    auto sentence = PVecCast<ISentence>(visit(ctx->sentence_()));
    return Concat(sentenceln, sentence);
}

std::any GuavaScriptVisitor::visitSentenceln(GuavaParser::SentencelnContext *ctx) {
    return visit(ctx->sentence_());
}

std::any GuavaScriptVisitor::visitCompoundSentence(GuavaParser::CompoundSentenceContext *ctx) {
    auto sentence = PAnyCast<ISentence>(visit(ctx->sentence_()));
    auto bodyKeyword = ctx->BodyKeyword()->getText();
    auto args = PAnyCast<StatementMatrix>(visit(ctx->parenOptStatementMatrix()));
    auto followUpKeyword = OptionalLex(ctx->BodyFollowUpKeyword());
    auto statement = PSafeCast<IStatement>(visit(ctx->statement_()));
    Optional<BodyStatementFollowUp> followUp{};
    if (followUpKeyword && statement) {
        followUp = BodyStatementFollowUp(*followUpKeyword, *statement);
    }
    ret(CompoundSentence,(sentence, bodyKeyword, args, followUp))
}

std::any GuavaScriptVisitor::visitScopeFollowUp(GuavaParser::ScopeFollowUpContext *ctx) {
    auto bodyKeyword = ctx->BodyFollowUpKeyword()->getText();
    auto scope = PAnyCast<ScopeStatement>(visit(ctx->scope()));
    ret(BodyStatementFollowUp,(bodyKeyword, scope))
}


std::any GuavaScriptVisitor::visitStatementFollowUp(GuavaParser::StatementFollowUpContext *ctx) {
    auto bodyKeyword = ctx->BodyFollowUpKeyword()->getText();
    auto statement = PAnyCast<IStatement>(visit(ctx->statement_()));
    ret(BodyStatementFollowUp,(bodyKeyword, statement))
}

std::any GuavaScriptVisitor::visitMatchStatement(GuavaParser::MatchStatementContext *ctx) {
    // TODO: Implement
    DEBUGOUT << "Match Statement Not Complete!" << ENDL;
    return {};
}

std::any GuavaScriptVisitor::visitScopeEnsuredBody(GuavaParser::ScopeEnsuredBodyContext *ctx) {
    auto bodyKeyword = ctx->BodyKeyword()->getText();
    auto args = PAnyCast<StatementMatrix>(visit(ctx->parenOptStatementMatrix()));
    auto scope = PAnyCast<ScopeStatement>(visit(ctx->scope()));
    auto followUpStatement = PSafeCast<BodyStatementFollowUp>(visit(ctx->followUpStatement_()));
    ret(BodyStatement,(bodyKeyword, args, scope, followUpStatement))
}

std::any GuavaScriptVisitor::visitScopeOrStatementBody(GuavaParser::ScopeOrStatementBodyContext *ctx) {
    auto bodyKeyword = ctx->BodyKeyword()->getText();
    auto args = PAnyCast<StatementMatrix>(visit(ctx->parenStatementMatrix()));
    auto statement = PAnyCast<IStatement>(visit(ctx->statement_()));
    auto followUpStatement = PSafeCast<BodyStatementFollowUp>(visit(ctx->followUpStatement_()));
    ret(BodyStatement,(bodyKeyword, args, statement, followUpStatement))
}

std::any GuavaScriptVisitor::visitKeywordStatement(GuavaParser::KeywordStatementContext *ctx) {
    auto keyword = ctx->Keyword()->getText();
    auto expression = PAnyCast<IExpression>(visit(ctx->expression_()));
    ret(KeywordStatement,(keyword, expression))
}

std::any GuavaScriptVisitor::visitTupleIdentifier(GuavaParser::TupleIdentifierContext *ctx) {
    auto identifier = PVecCast<IIdentifier>(vecVisit(ctx->identifier_()));
    ret(TupleIdentifier,(identifier))
}

std::any GuavaScriptVisitor::visitNestedIdentifier(GuavaParser::NestedIdentifierContext *ctx) {
    auto source = PAnyCast<IIdentifier>(visit(ctx->identifier_(0)));
    auto target = PAnyCast<IIdentifier>(visit(ctx->identifier_(1)));
    ret(NestedIdentifier,(source, target))
}

std::any GuavaScriptVisitor::visitTemplatedIdentifier(GuavaParser::TemplatedIdentifierContext *ctx) {
    auto identifiers = PVecCast<IIdentifier>(vecVisit(ctx->identifier_()));
    auto source = identifiers[0];
    PVec<IIdentifier> args{identifiers.begin() + 1, identifiers.end()};
    ret(TemplatedIdentifier,(source, args))
}

std::any GuavaScriptVisitor::visitDefaultIdentifier(GuavaParser::DefaultIdentifierContext *ctx) {
    ret(DefaultIdentifier,(ctx->DefaultIdentifier()->getText()))
}

std::any GuavaScriptVisitor::visitRuntimeTemplatedIdentifier(GuavaParser::RuntimeTemplatedIdentifierContext *ctx) {
    auto source = PAnyCast<IIdentifier>(visit(ctx->identifier_()));
    auto args = PVecCast<IExpression>(vecVisit(ctx->expression_()));
    ret(RuntimeTemplatedIdentifier,(source, args))
}

std::any GuavaScriptVisitor::visitParameter(GuavaParser::ParameterContext *ctx) {
    auto id = PAnyCast<IIdentifier>(visit(ctx->expression_(0)));
    auto type = PAnyCast<IIdentifier>(visit(ctx->expression_(1)));
    ret(Parameter,(id, type))
}

std::any GuavaScriptVisitor::visitParameters(GuavaParser::ParametersContext *ctx) {
    return PVecCast<Parameter>(vecVisit(ctx->parameter()));
}

std::any GuavaScriptVisitor::visitInlineFunctionAssignment(GuavaParser::InlineFunctionAssignmentContext *ctx) {
    auto name = ctx->Identifier()->getText();
    auto parameters = PVecCast<Parameter>(visit(ctx->parameters()));
    auto value = PAnyCast<IStatement>(visit(ctx->statement_()));
    ret(InlineFunctionAssignment,(name, parameters, value))
}

std::any GuavaScriptVisitor::visitReassignment(GuavaParser::ReassignmentContext *ctx) {
    auto expression = PAnyCast<IExpression>(visit(ctx->expression_()));
    auto statement = PAnyCast<IStatement>(visit(ctx->statement_()));
    ret(Reassignment,(expression, statement))
}

std::any GuavaScriptVisitor::visitDeclarativeAssignment(GuavaParser::DeclarativeAssignmentContext *ctx) {
    auto identifiers = ctx->declaration_()->Identifier();
    Vec<String> modifiers{};
    std::transform(identifiers.begin(), identifiers.end(), modifiers.begin(),[](auto id) {
        return id->getText();
    });
    auto parameter = PAnyCast<Parameter>(visit(ctx->parameter()));
    auto value = PAnyCast<IStatement>(visit(ctx->statement_()));
    ret(DeclarativeAssignment,(modifiers, parameter, value))
}

std::any GuavaScriptVisitor::visitMultiAssignment(GuavaParser::MultiAssignmentContext *ctx) {
    // TODO: Implement
    DEBUGOUT << "Multi Assignment Not Complete!" << ENDL;
    return {};
}

std::any GuavaScriptVisitor::visitUnwrappedTuple(GuavaParser::UnwrappedTupleContext *ctx) {
    ret(ExpressionTuple,(PVecCast<IExpression>(vecVisit(ctx->expression_()))))
}

std::any GuavaScriptVisitor::visitUnwrappedMatrix(GuavaParser::UnwrappedMatrixContext *ctx) {
    ret(ExpressionMatrix,(PVecCast<ExpressionTuple>(vecVisit(ctx->unwrappedTuple()))))
}

std::any GuavaScriptVisitor::visitParenWrappedMatrix(GuavaParser::ParenWrappedMatrixContext *ctx) {
    return visit(ctx->unwrappedMatrix());
}

std::any GuavaScriptVisitor::visitBracketWrappedMatrix(GuavaParser::BracketWrappedMatrixContext *ctx) {
    return visit(ctx->unwrappedMatrix());
}

std::any GuavaScriptVisitor::visitStatementTuple(GuavaParser::StatementTupleContext *ctx) {
    ret(StatementTuple,(PVecCast<IStatement>(vecVisit(ctx->statement_()))))
}

std::any GuavaScriptVisitor::visitStatementMatrix(GuavaParser::StatementMatrixContext *ctx) {
    ret(StatementMatrix,(PVecCast<StatementTuple>(vecVisit(ctx->statementTuple()))))
}

std::any GuavaScriptVisitor::visitParenStatementMatrix(GuavaParser::ParenStatementMatrixContext *ctx) {
    return visit(ctx->statementMatrix());
}

std::any GuavaScriptVisitor::visitBracketStatementMatrix(GuavaParser::BracketStatementMatrixContext *ctx) {
    return visit(ctx->statementMatrix());
}

std::any GuavaScriptVisitor::visitParenOptStatementMatrix(GuavaParser::ParenOptStatementMatrixContext *ctx) {
    return visit(ctx->statementMatrix());
}

std::any GuavaScriptVisitor::visitLambda(GuavaParser::LambdaContext *ctx) {
    auto parameters = PVecCast<Parameter>(visit(ctx->parameters()));
    auto returnType = PSafeCast<IExpression>(visit(ctx->expression_()));
    auto body = PSafeCast<IStatement>(visit(ctx->statement_()));
    ret(Lambda,(parameters, returnType, body))
}

std::any GuavaScriptVisitor::visitUnaryExpression(GuavaParser::UnaryExpressionContext *ctx) {
    auto target = PAnyCast<IExpression>(visit(ctx->expression_()));
    auto op = ctx->op->getText();
    ret(UnaryOperation,(target, op))
}

std::any GuavaScriptVisitor::visitBinaryExpression(GuavaParser::BinaryExpressionContext *ctx) {
    auto lhs = PAnyCast<IExpression>(visit(ctx->expression_(0)));
    auto op = ctx->op->getText();
    auto rhs = PAnyCast<IExpression>(visit(ctx->expression_(1)));
    ret(BinaryOperation,(lhs, op, rhs))
}

std::any GuavaScriptVisitor::visitFunctionCallExpression(GuavaParser::FunctionCallExpressionContext *ctx) {
    auto target = PAnyCast<IExpression>(visit(ctx->expression_()));
    auto args = PAnyCast<ExpressionMatrix>(visit(ctx->parenWrappedMatrix()));
    ret(FunctionCallExpression,(target, args))
}

std::any GuavaScriptVisitor::visitRangeExpression(GuavaParser::RangeExpressionContext *ctx) {
    auto start = PAnyCast<IExpression>(visit(ctx->expression_(0)));
    auto end = PAnyCast<IExpression>(visit(ctx->expression_(1)));
    auto step = PSafeCast<IExpression>(visit(ctx->expression_(2)));
    ret(RangeExpression,(start, end, step))
}

std::any GuavaScriptVisitor::visitIndexExpression(GuavaParser::IndexExpressionContext *ctx) {
    auto source = PAnyCast<IExpression>(visit(ctx->expression_()));
    auto args = PAnyCast<ExpressionMatrix>(visit(ctx->bracketWrappedMatrix()));
    ret(IndexOperation,(source, args))
}

std::any GuavaScriptVisitor::visitLiteralExpression(GuavaParser::LiteralExpressionContext *ctx) {
    ret(LiteralExpression,(ctx->getText()))
}

std::any GuavaScriptVisitor::visitIndexKeywordExpression(GuavaParser::IndexKeywordExpressionContext *ctx) {
    ret(IndexKeyword,(ctx->getText()))
}

std::any GuavaScriptVisitor::visitDotAccessExpression(GuavaParser::DotAccessExpressionContext *ctx) {
    auto parent = PAnyCast<IExpression>(visit(ctx->expression_(0)));
    auto child = PAnyCast<IExpression>(visit(ctx->expression_(1)));
    ret(DotOperation,(parent, ctx->Dot()->getText(), child))
}
