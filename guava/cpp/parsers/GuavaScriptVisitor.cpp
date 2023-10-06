//
// Created by Patrick on 9/13/2023.
//

#include "../guava-statics.h"
#include "GuavaScriptVisitor.h"

std::any guavaparser::GuavaScriptVisitor::visitScript(guavaparser::GuavaParser::ScriptContext *ctx) {
    DEBUGOUT << "Visiting Script" << ENDL;
    for (const auto declarationCtx : ctx->programDeclarations_()) {
        const auto declaration = Cast<Declaration*>(visit(declarationCtx));
    }
    return visitChildren(ctx);
}

std::any guavaparser::GuavaScriptVisitor::visitFnDeclaration(guavaparser::GuavaParser::FnDeclarationContext *ctx) {
    return GuavaParserBaseVisitor::visitFnDeclaration(ctx);
}
