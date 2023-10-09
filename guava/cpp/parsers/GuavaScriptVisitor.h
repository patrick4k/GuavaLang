//
// Created by Patrick on 9/13/2023.
//

#ifndef GUAVA_GUAVASCRIPTVISITOR_H
#define GUAVA_GUAVASCRIPTVISITOR_H

#include "GuavaParserBaseVisitor.h"
#include "IBytecodeBuilder.h"

namespace guavaparser {
    class GuavaScriptVisitor: public GuavaParserBaseVisitor, public IBytecodeBuilder {
    public:
        template<typename T>
        std::any vecVisit(std::vector<T*> trees) {
            std::vector<std::any> retVal{trees.size()};
            for (unsigned long i = 0; i < trees.size(); ++i) {
                retVal[i] = visit(trees[i]);
            }
            return retVal;
        }

        std::any visitScript(GuavaParser::ScriptContext *ctx) override;

        std::any visitFnDeclaration(GuavaParser::FnDeclarationContext *ctx) override;

        std::any visitSimpleIdentifier(GuavaParser::SimpleIdentifierContext *ctx) override;

        std::any visitScope(GuavaParser::ScopeContext *ctx) override;

        std::any visitSentenceCollection(GuavaParser::SentenceCollectionContext *ctx) override;

        std::any visitSentenceln(GuavaParser::SentencelnContext *ctx) override;

        std::any visitCompoundStatement(GuavaParser::CompoundStatementContext *ctx) override;

        std::any visitScopeEnsuredFollowUp(GuavaParser::ScopeEnsuredFollowUpContext *ctx) override;

        std::any visitScopeOrBodyFollowUp(GuavaParser::ScopeOrBodyFollowUpContext *ctx) override;

        std::any visitMatchStatement(GuavaParser::MatchStatementContext *ctx) override;

        std::any visitScopeEnsuredBody(GuavaParser::ScopeEnsuredBodyContext *ctx) override;

        std::any visitScopeOrStatmentBody(GuavaParser::ScopeOrStatmentBodyContext *ctx) override;

        std::any visitKeywordStatement(GuavaParser::KeywordStatementContext *ctx) override;

        std::any visitTupleIdentifier(GuavaParser::TupleIdentifierContext *ctx) override;

        std::any visitNestedIdentifier(GuavaParser::NestedIdentifierContext *ctx) override;

        std::any visitTemplatedIdentifier(GuavaParser::TemplatedIdentifierContext *ctx) override;

        std::any visitDefaultIdentifier(GuavaParser::DefaultIdentifierContext *ctx) override;

        std::any visitRuntimeTemplatedIdentifier(GuavaParser::RuntimeTemplatedIdentifierContext *ctx) override;

        std::any visitParameter(GuavaParser::ParameterContext *ctx) override;

        std::any visitParameters(GuavaParser::ParametersContext *ctx) override;

        std::any visitInlineFunctionAssignment(GuavaParser::InlineFunctionAssignmentContext *ctx) override;

        std::any visitReassignment(GuavaParser::ReassignmentContext *ctx) override;

        std::any visitDeclaritiveAssignment(GuavaParser::DeclaritiveAssignmentContext *ctx) override;

        std::any visitMultiAssignment(GuavaParser::MultiAssignmentContext *ctx) override;

        std::any visitUnwrappedTuple(GuavaParser::UnwrappedTupleContext *ctx) override;

        std::any visitUnwrappedMatrix(GuavaParser::UnwrappedMatrixContext *ctx) override;

        std::any visitParenWrappedMatrix(GuavaParser::ParenWrappedMatrixContext *ctx) override;

        std::any visitBracketWrappedMatrix(GuavaParser::BracketWrappedMatrixContext *ctx) override;

        std::any visitStatementTuple(GuavaParser::StatementTupleContext *ctx) override;

        std::any visitStatementMatrix(GuavaParser::StatementMatrixContext *ctx) override;

        std::any visitParenStatementMatrix(GuavaParser::ParenStatementMatrixContext *ctx) override;

        std::any visitBracketStatementMatrix(GuavaParser::BracketStatementMatrixContext *ctx) override;

        std::any visitParenOptStatementMatrix(GuavaParser::ParenOptStatementMatrixContext *ctx) override;

        std::any visitLambda(GuavaParser::LambdaContext *ctx) override;

        std::any visitUnaryPrefixExpression(GuavaParser::UnaryPrefixExpressionContext *ctx) override;

        std::any visitUnaryPostfixExpression(GuavaParser::UnaryPostfixExpressionContext *ctx) override;

        std::any visitBinaryExpression(GuavaParser::BinaryExpressionContext *ctx) override;

        std::any visitFunctionCallExpression(GuavaParser::FunctionCallExpressionContext *ctx) override;

        std::any visitRangeExpression(GuavaParser::RangeExpressionContext *ctx) override;

        std::any visitIndexExpression(GuavaParser::IndexExpressionContext *ctx) override;

        std::any visitLiteralExpression(GuavaParser::LiteralExpressionContext *ctx) override;

        std::any visitIndexKeywordExpression(GuavaParser::IndexKeywordExpressionContext *ctx) override;

        std::any visitDotAccessExpression(GuavaParser::DotAccessExpressionContext *ctx) override;

    };
}

#endif //GUAVA_GUAVASCRIPTVISITOR_H
