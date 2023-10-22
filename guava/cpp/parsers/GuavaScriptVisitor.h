//
// Created by Patrick on 9/13/2023.
//

#ifndef GUAVA_GUAVASCRIPTVISITOR_H
#define GUAVA_GUAVASCRIPTVISITOR_H

#include "GuavaParserBaseVisitor.h"
#include "parser-util.h"
#include "templates/parameters/Parameters.h"

namespace guavaparser {
    class GuavaScriptVisitor: public GuavaParserBaseVisitor {
    private:
        template<typename T>
        Optional<Ptr<T>> AnyVisit(antlr4::tree::ParseTree* tree, Optional<Ptr<T>> defaultVal = NullOpt) {
            if (!tree) return defaultVal;
            const AnyTemplate any = std::any_cast<AnyTemplate>(visit(tree));
            return any.as<T>();
        }

        Ptr<Parameters> AnyVisit(GuavaParser::ParametersContext* tree) {
            if (!tree) return NewPtr<Parameters>();
            const AnyTemplate any = std::any_cast<AnyTemplate>(visit(tree));
            return any.as<Parameters>();
        }

        template<typename T, typename Ctx>
        PVec<T> AnyVisit(Vec<Ctx*> tree) {
            PVec<T> retVal{};
            for (auto it : tree) {
                if (auto inst = AnyVisit<T>(it)) {
                    retVal.push_back(*inst);
                }
            }
            return retVal;
        }

        virtual std::any aggregateResult(std::any aggregate, std::any nextResult) override {
            try {
                std::any_cast<AnyTemplate>(nextResult);
            } catch (const std::bad_any_cast& e) {
                return aggregate;
            }
            return nextResult;
        }

    public:
        std::any visitTypeInstantiationExpression(GuavaParser::TypeInstantiationExpressionContext *ctx) override;

        std::any visitScript(GuavaParser::ScriptContext *ctx) override;

        std::any visitFnDeclaration(GuavaParser::FnDeclarationContext *ctx) override;

        std::any visitSimpleIdentifier(GuavaParser::SimpleIdentifierContext *ctx) override;

        std::any visitScope(GuavaParser::ScopeContext *ctx) override;

        std::any visitCompoundSentence(GuavaParser::CompoundSentenceContext *ctx) override;

        std::any visitScopeFollowUp(GuavaParser::ScopeFollowUpContext *ctx) override;

        std::any visitStatementFollowUp(GuavaParser::StatementFollowUpContext *ctx) override;

        std::any visitMatchStatement(GuavaParser::MatchStatementContext *ctx) override;

        std::any visitScopeEnsuredBody(GuavaParser::ScopeEnsuredBodyContext *ctx) override;

        std::any visitScopeOrStatementBody(GuavaParser::ScopeOrStatementBodyContext *ctx) override;

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

        std::any visitDeclarativeAssignment(GuavaParser::DeclarativeAssignmentContext *ctx) override;

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

        std::any visitUnaryExpression(GuavaParser::UnaryExpressionContext *ctx) override;

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
