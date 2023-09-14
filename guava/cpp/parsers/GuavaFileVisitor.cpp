//
// Created by Patrick on 9/13/2023.
//

#include "GuavaFileVisitor.h"

std::any guavaparser::GuavaFileVisitor::visitScript(guavaparser::GuavaParser::ScriptContext *ctx) {
    return ctx->FnDelcaration()->getText();
}
