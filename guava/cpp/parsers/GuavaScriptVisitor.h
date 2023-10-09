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
        std::any visitScript(GuavaParser::ScriptContext *ctx) override;

        std::any visitFnDeclaration(GuavaParser::FnDeclarationContext *ctx) override;

        std::any visitSimpleIdentifier(GuavaParser::SimpleIdentifierContext *ctx) override;
    };
}

#endif //GUAVA_GUAVASCRIPTVISITOR_H
