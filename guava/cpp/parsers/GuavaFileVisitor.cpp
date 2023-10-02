//
// Created by Patrick on 9/13/2023.
//

#include "../guava-statics.h"
#include "GuavaFileVisitor.h"

std::any guavaparser::GuavaFileVisitor::visitScript(guavaparser::GuavaParser::ScriptContext *ctx) {
    DEBUGOUT << "Visiting Script" << ENDL;
    return visitChildren(ctx);
}
