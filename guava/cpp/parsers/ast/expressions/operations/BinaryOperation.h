//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_BINARYOPERATION_H
#define GUAVA_BINARYOPERATION_H

#include <algorithm>
#include <utility>
#include "../../../../guava-common.h"
#include "IOperation.h"
#include "../IExpression.h"

namespace guavaparser {
    class BinaryOperation : public IOperation {
    public:
        BinaryOperation(Ptr<IExpression> lhs, String op, Ptr<IExpression> rhs) :
        m_lhs(std::move(lhs)),
        m_op(std::move(op)),
        m_rhs(std::move(rhs))
        {
        }

    private:
        Ptr<IExpression> m_lhs;
        String m_op;
        Ptr<IExpression> m_rhs;
    };
}

#endif //GUAVA_BINARYOPERATION_H
