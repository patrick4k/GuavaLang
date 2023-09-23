//
// Created by Patrick on 9/16/2023.
//

#ifndef GUAVA_GUAVASTATEMENTVISITOR_H
#define GUAVA_GUAVASTATEMENTVISITOR_H

#include "StatementParserBaseVisitor.h"
#include "IBytecodeBuilder.h"

namespace guavaparser {

    class GuavaStatementVisitor: public StatementParserBaseVisitor, public IBytecodeBuilder  {

    };

} // guavalang

#endif //GUAVA_GUAVASTATEMENTVISITOR_H
