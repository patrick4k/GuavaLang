//
// Created by Patrick on 9/13/2023.
//

#include "../guava-common.h"
#include "GuavaScriptVisitor.h"
#include "parser-util.h"
#include "templates/templates-common.h"
#include "../util/vec-util.h"

using namespace guavaparser;

#define RET_ANY(any) return AnyTemplate(any);
#define RET_NEW(type, args) RET_ANY(NewPtr<type>args)

template<typename T>
String Lex(T* val) {
    return val->getText();
}

template<typename T>
Optional<String> OptionalLex(T* val) {
    return val ? Optional<String>(Lex(val)) : NullOpt;
}

std::any GuavaScriptVisitor::visitScript(GuavaParser::ScriptContext *ctx) {
    PVec<Function> functions = AnyVisit<Function>(ctx->fnDeclaration());
    RET_NEW(Script, (functions))
}

std::any GuavaScriptVisitor::visitFnDeclaration(GuavaParser::FnDeclarationContext *ctx) {
    const auto name = *AnyVisit<IIdentifier>(ctx->identifier_());
    const auto parameters = *AnyVisit<Parameters>(ctx->parameters(), NewPtr<Parameters>());
    const auto returnType = AnyVisit<IExpression>(ctx->expression_());
    const auto body = *AnyVisit<IStatement>(ctx->statement_());
    RET_NEW(Function, (name, parameters, returnType, body))
}

std::any GuavaScriptVisitor::visitSimpleIdentifier(GuavaParser::SimpleIdentifierContext *ctx) {
    RET_NEW(SimpleIdentifier, (ctx->getText()))
}

std::any GuavaScriptVisitor::visitScope(GuavaParser::ScopeContext *ctx) {
    PVec<ISentence> sentences{};
    const auto sentenceln = AnyVisit<ISentence>(ctx->sentenceln());
    const auto sentence = AnyVisit<ISentence>(ctx->sentence_());
    if (sentence) {
        sentences = Concat(sentences, {*sentence});
    }
    else {
        sentences = sentenceln;
    }
    RET_NEW(ScopeStatement, (sentences))
}

std::any GuavaScriptVisitor::visitCompoundSentence(GuavaParser::CompoundSentenceContext *ctx) {
    auto sentence = *AnyVisit<ISentence>(ctx->sentence_());
    auto bodyKeyword = Lex(ctx->BodyKeyword());
    auto args = *AnyVisit<StatementMatrix>(ctx->parenOptStatementMatrix(), NewPtr<StatementMatrix>());
    auto followUpKeyword = OptionalLex(ctx->BodyFollowUpKeyword());
    auto followUpStatement = AnyVisit<IStatement>(ctx->statement_());
    Optional<BodyStatementFollowUp> followUp{};
    if (followUpKeyword && followUpStatement) {
        followUp = BodyStatementFollowUp(*followUpKeyword, *followUpStatement);
    }
    RET_NEW(CompoundSentence, (sentence, bodyKeyword, args, followUp))
}

std::any GuavaScriptVisitor::visitScopeFollowUp(GuavaParser::ScopeFollowUpContext *ctx) {
    auto bodyKeyword = Lex(ctx->BodyFollowUpKeyword());
    auto scope = *AnyVisit<ScopeStatement>(ctx->scope());
    RET_NEW(BodyStatementFollowUp, (bodyKeyword, scope))
}


std::any GuavaScriptVisitor::visitStatementFollowUp(GuavaParser::StatementFollowUpContext *ctx) {
    auto bodyKeyword = Lex(ctx->BodyFollowUpKeyword());
    auto statement = *AnyVisit<IStatement>(ctx->statement_());
    RET_NEW(BodyStatementFollowUp, (bodyKeyword, statement))
}

std::any GuavaScriptVisitor::visitMatchStatement(GuavaParser::MatchStatementContext *ctx) {
    // TODO: Implement
    DEBUGOUT << "Match Statement Not Complete!" << ENDL;
    return {};
}

std::any GuavaScriptVisitor::visitScopeEnsuredBody(GuavaParser::ScopeEnsuredBodyContext *ctx) {
    auto bodyKeyword = Lex(ctx->BodyKeyword());
    auto args = *AnyVisit<StatementMatrix>(ctx->parenOptStatementMatrix(), NewPtr<StatementMatrix>());
    auto scope = *AnyVisit<ScopeStatement>(ctx->scope());
    auto followUpStatement = AnyVisit<BodyStatementFollowUp>(ctx->followUpStatement_());
    RET_NEW(BodyStatement, (bodyKeyword, args, scope, followUpStatement))
}

std::any GuavaScriptVisitor::visitScopeOrStatementBody(GuavaParser::ScopeOrStatementBodyContext *ctx) {
    auto bodyKeyword = Lex(ctx->BodyKeyword());
    auto args = *AnyVisit<StatementMatrix>(ctx->parenStatementMatrix(), NewPtr<StatementMatrix>());
    auto statement = *AnyVisit<IStatement>(ctx->statement_());
    auto followUpStatement = AnyVisit<BodyStatementFollowUp>(ctx->followUpStatement_());
    RET_NEW(BodyStatement, (bodyKeyword, args, statement, followUpStatement))
}

std::any GuavaScriptVisitor::visitKeywordStatement(GuavaParser::KeywordStatementContext *ctx) {
    auto keyword = Lex(ctx->Keyword());
    auto expression = AnyVisit<IExpression>(ctx->expression_());
    RET_NEW(KeywordStatement, (keyword, expression))
}

std::any GuavaScriptVisitor::visitTupleIdentifier(GuavaParser::TupleIdentifierContext *ctx) {
    auto identifier = AnyVisit<IIdentifier>(ctx->identifier_());
    RET_NEW(TupleIdentifier, (identifier))
}

std::any GuavaScriptVisitor::visitNestedIdentifier(GuavaParser::NestedIdentifierContext *ctx) {
    auto source = *AnyVisit<IIdentifier>(ctx->identifier_(0));
    auto target = *AnyVisit<IIdentifier>(ctx->identifier_(1));
    RET_NEW(NestedIdentifier, (source, target))
}

std::any GuavaScriptVisitor::visitTemplatedIdentifier(GuavaParser::TemplatedIdentifierContext *ctx) {
    auto identifiers = AnyVisit<IIdentifier>(ctx->identifier_());
    auto source = identifiers[0];
    PVec<IIdentifier> args{identifiers.begin() + 1, identifiers.end()};
    RET_NEW(TemplatedIdentifier, (source, args))
}

std::any GuavaScriptVisitor::visitDefaultIdentifier(GuavaParser::DefaultIdentifierContext *ctx) {
    RET_NEW(DefaultIdentifier, (Lex(ctx->DefaultIdentifier())))
}

std::any GuavaScriptVisitor::visitRuntimeTemplatedIdentifier(GuavaParser::RuntimeTemplatedIdentifierContext *ctx) {
    auto source = *AnyVisit<IIdentifier>(ctx->identifier_());
    auto args = AnyVisit<IExpression>(ctx->expression_());
    RET_NEW(RuntimeTemplatedIdentifier, (source, args))
}

std::any GuavaScriptVisitor::visitParameter(GuavaParser::ParameterContext *ctx) {
    auto id = *AnyVisit<IIdentifier>(ctx->identifier_());
    auto type = AnyVisit<IExpression>(ctx->expression_());
    RET_NEW(Parameter, (id, type))
}

std::any GuavaScriptVisitor::visitParameters(GuavaParser::ParametersContext *ctx) {
    const auto parameters = AnyVisit<Parameter>(ctx->parameter());
    RET_NEW(Parameters, (parameters))
}

std::any GuavaScriptVisitor::visitInlineFunctionAssignment(GuavaParser::InlineFunctionAssignmentContext *ctx) {
    auto name = Lex(ctx->Identifier());
    auto parameters = *AnyVisit<Parameters>(ctx->parameters(), NewPtr<Parameters>());
    auto value = *AnyVisit<IStatement>(ctx->statement_());
    RET_NEW(InlineFunctionAssignment, (name, parameters, value))
}

std::any GuavaScriptVisitor::visitReassignment(GuavaParser::ReassignmentContext *ctx) {
    auto expression = *AnyVisit<IExpression>(ctx->expression_());
    auto statement = *AnyVisit<IStatement>(ctx->statement_());
    RET_NEW(Reassignment, (expression, statement))
}

std::any GuavaScriptVisitor::visitDeclarativeAssignment(GuavaParser::DeclarativeAssignmentContext *ctx) {
    auto identifiers = ctx->declaration_()->Identifier();
    Vec<String> modifiers{};
    std::transform(identifiers.begin(), identifiers.end(), modifiers.begin(),[](auto id) {
        return Lex(id);
    });
    auto parameter = *AnyVisit<Parameter>(ctx->parameter());
    auto value = AnyVisit<IStatement>(ctx->statement_());
    RET_NEW(DeclarativeAssignment, (modifiers, parameter, value))
}

std::any GuavaScriptVisitor::visitMultiAssignment(GuavaParser::MultiAssignmentContext *ctx) {
    NOT_IMPLEMENTED
}

std::any GuavaScriptVisitor::visitUnwrappedTuple(GuavaParser::UnwrappedTupleContext *ctx) {
    RET_NEW(ExpressionTuple, (AnyVisit<IExpression>(ctx->expression_())))
}

std::any GuavaScriptVisitor::visitUnwrappedMatrix(GuavaParser::UnwrappedMatrixContext *ctx) {
    RET_NEW(ExpressionMatrix, (AnyVisit<ExpressionTuple>(ctx->unwrappedTuple())))
}

std::any GuavaScriptVisitor::visitParenWrappedMatrix(GuavaParser::ParenWrappedMatrixContext *ctx) {
    const auto matrix = AnyVisit<ExpressionMatrix>(ctx->unwrappedMatrix());
    RET_NEW(ExpressionMatrix, (matrix))
}

std::any GuavaScriptVisitor::visitBracketWrappedMatrix(GuavaParser::BracketWrappedMatrixContext *ctx) {
    const auto matrix = AnyVisit<ExpressionMatrix>(ctx->unwrappedMatrix());
    RET_NEW(ExpressionMatrix, (matrix))
}

std::any GuavaScriptVisitor::visitStatementTuple(GuavaParser::StatementTupleContext *ctx) {
    RET_NEW(StatementTuple, (AnyVisit<IStatement>(ctx->statement_())))
}

std::any GuavaScriptVisitor::visitStatementMatrix(GuavaParser::StatementMatrixContext *ctx) {
    RET_NEW(StatementMatrix, (AnyVisit<StatementTuple>(ctx->statementTuple())))
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
    auto parameters = *AnyVisit<Parameters>(ctx->parameters(), NewPtr<Parameters>());
    auto returnType = AnyVisit<IExpression>(ctx->expression_());
    auto body = *AnyVisit<IStatement>(ctx->statement_());
    RET_NEW(Lambda, (parameters, returnType, body))
}

std::any GuavaScriptVisitor::visitUnaryExpression(GuavaParser::UnaryExpressionContext *ctx) {
    auto target = *AnyVisit<IExpression>(ctx->expression_());
    auto op = Lex(ctx->op);
    RET_NEW(UnaryOperation, (target, op))
}

std::any GuavaScriptVisitor::visitBinaryExpression(GuavaParser::BinaryExpressionContext *ctx) {
    auto lhs = *AnyVisit<IExpression>(ctx->expression_(0));
    auto op = ctx->op->getText();
    auto rhs = *AnyVisit<IExpression>(ctx->expression_(1));
    RET_NEW(BinaryOperation, (lhs, op, rhs))
}

std::any GuavaScriptVisitor::visitFunctionCallExpression(GuavaParser::FunctionCallExpressionContext *ctx) {
    auto target = *AnyVisit<IExpression>(ctx->expression_());
    auto args = *AnyVisit<ExpressionMatrix>(ctx->parenWrappedMatrix(), NewPtr<ExpressionMatrix>());
    RET_NEW(FunctionCallExpression, (target, args))
}

std::any GuavaScriptVisitor::visitRangeExpression(GuavaParser::RangeExpressionContext *ctx) {
    auto start = *AnyVisit<IExpression>(ctx->expression_(0));
    auto end = *AnyVisit<IExpression>(ctx->expression_(1));
    auto step = AnyVisit<IExpression>(ctx->expression_(2));
    RET_NEW(RangeExpression, (start, end, step))
}

std::any GuavaScriptVisitor::visitIndexExpression(GuavaParser::IndexExpressionContext *ctx) {
    auto source = *AnyVisit<IExpression>(ctx->expression_());
    auto args = *AnyVisit<ExpressionMatrix>(ctx->bracketWrappedMatrix(), NewPtr<ExpressionMatrix>());
    RET_NEW(IndexOperation, (source, args))
}

std::any GuavaScriptVisitor::visitLiteralExpression(GuavaParser::LiteralExpressionContext *ctx) {
    RET_NEW(LiteralExpression, (ctx->getText()))
}

std::any GuavaScriptVisitor::visitIndexKeywordExpression(GuavaParser::IndexKeywordExpressionContext *ctx) {
    RET_NEW(IndexKeyword, (ctx->getText()))
}

std::any GuavaScriptVisitor::visitDotAccessExpression(GuavaParser::DotAccessExpressionContext *ctx) {
    auto parent = *AnyVisit<IExpression>(ctx->expression_(0));
    auto child = *AnyVisit<IExpression>(ctx->expression_(1));
    RET_NEW(DotOperation, (parent, Lex(ctx->Dot()), child))
}

std::any GuavaScriptVisitor::visitTypeInstantiationExpression(GuavaParser::TypeInstantiationExpressionContext *ctx) {
    const auto type = *AnyVisit<IExpression>(ctx->expression_());
    const auto overloads = *AnyVisit<StatementMatrix>(ctx->braceStatementMatrix(), NewPtr<StatementMatrix>());
    RET_NEW(TypeInstantiation, (type, overloads))
}
