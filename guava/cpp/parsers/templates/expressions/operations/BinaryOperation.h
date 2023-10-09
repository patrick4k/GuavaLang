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
        BinaryOperation(Ptr<IExpression> parent, String op, Ptr<IExpression> child) :
        m_parent(std::move(parent)),
        m_op(std::move(op)),
        m_child(std::move(child))
        {
        }

    private:
        Ptr<IExpression> m_parent;
        String m_op;
        Ptr<IExpression> m_child;
    };
}

#endif //GUAVA_BINARYOPERATION_H
