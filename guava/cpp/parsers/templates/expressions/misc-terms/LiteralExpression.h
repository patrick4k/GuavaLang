//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_LITERALEXPRESSION_H
#define GUAVA_LITERALEXPRESSION_H

#include "../../../../guava-common.h"
#include "../IExpression.h"

namespace guavaparser {

    class LiteralExpression : public IExpression {
    public:
        explicit LiteralExpression(String literal) : m_literal(std::move(literal)) {}

    private:
        String m_literal;
    };

}

#endif //GUAVA_LITERALEXPRESSION_H
