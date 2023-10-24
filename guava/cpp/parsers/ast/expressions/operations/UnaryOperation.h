//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_UNARYOPERATION_H
#define GUAVA_UNARYOPERATION_H

#include "../../../../guava-common.h"
#include "IOperation.h"

namespace guavaparser {
    class UnaryOperation: public IOperation {
    public:
        UnaryOperation(Ptr<IExpression> target, String op) :
        m_target(std::move(target)),
        m_op(std::move(op))
        {
        }

    private:
        Ptr<IExpression> m_target;
        String m_op;
    };
}

#endif //GUAVA_UNARYOPERATION_H
