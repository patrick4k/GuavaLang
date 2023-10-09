//
// Created by Patrick on 9/13/2023.
//

#include "../guava-common.h"
#include "GuavaScriptVisitor.h"

#include "templates/templates-common.h"

using namespace guavaparser;

using DeclarationPtr = Ptr<IDeclaration>;
using TypePtr = Ptr<IType>;
using StatementPtr = Ptr<IStatement>;

std::any guavaparser::GuavaScriptVisitor::visitScript(guavaparser::GuavaParser::ScriptContext *ctx) {
    DEBUGOUT << "Visiting Script" << ENDL;
    const auto script = NewPtr<Script>();
    for (const auto declarationCtx : ctx->fnDeclaration()) {
        const auto declaration = PCast<Function>(visit(declarationCtx));
        script->add(declaration);
    }
    return script;
}

std::any guavaparser::GuavaScriptVisitor::visitFnDeclaration(guavaparser::GuavaParser::FnDeclarationContext *ctx) {
    const auto name = ctx->Identifier()->getText();
    const auto parameters = VecCast<Parameter>(visit(ctx->parameters()));
    const auto returnType = SafeCast<TypePtr>(visit(ctx->expression_()));
    const auto body = VecCast<StatementPtr>(visit(ctx->scope()));
    return NewPtr<Function>(name, parameters, returnType, body);
}

std::any GuavaScriptVisitor::visitSimpleIdentifier(GuavaParser::SimpleIdentifierContext *ctx) {
    return NewPtr<SimpleIdentifier>(ctx->getText());
}
