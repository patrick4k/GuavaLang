//
// Created by Patrick Kennedy on 10/9/23.
//

#ifndef GUAVA_KEYWORDSTATEMENT_H
#define GUAVA_KEYWORDSTATEMENT_H

#include "../../../guava-common.h"
#include "IStatement.h"
#include "../expressions/IExpression.h"

namespace guavaparser {
    class KeywordStatement: public IStatement {
    public:
        KeywordStatement(String keyword, Optional<Ptr<IExpression>> expression) :
        m_keyword(keyword),
        m_expression(expression)
        {
        }

    private:
        String m_keyword{};
        Optional<Ptr<IExpression>> m_expression{};
    };
}

#endif //GUAVA_KEYWORDSTATEMENT_H
