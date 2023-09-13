//
// Created by Patrick on 9/13/2023.
//

#ifndef GUAVA_GUAVAFILEVISITOR_H
#define GUAVA_GUAVAFILEVISITOR_H

#include "GuavaParserBaseVisitor.h"
#include "IBytecodeBuilder.h"

namespace guavaparser {
    class GuavaFileVisitor: public GuavaParserBaseVisitor, public IBytecodeBuilder {
    public:
        std::any visitScript(GuavaParser::ScriptContext *ctx) override;
    };
}

#endif //GUAVA_GUAVAFILEVISITOR_H
