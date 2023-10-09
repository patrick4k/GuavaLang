//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_INDEXKEYWORD_H
#define GUAVA_INDEXKEYWORD_H

#include "../../../../guava-common.h"
#include "../IExpression.h"

namespace guavaparser {
    class IndexKeyword: public IExpression {
    public:
        explicit IndexKeyword(String keyword) :
        m_keyword(std::move(keyword))
        {
        }

    private:
        String m_keyword;
    };
}

#endif //GUAVA_INDEXKEYWORD_H
