//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_DOTOPERATION_H
#define GUAVA_DOTOPERATION_H

#include <utility>

#include "../../../../guava-common.h"
#include "BinaryOperation.h"
#include "../IExpression.h"

namespace guavaparser {
    class DotOperation : public BinaryOperation {
    public:
        DotOperation(Ptr<IExpression> parent, String op, Ptr<IExpression> child) :
        BinaryOperation(std::move(parent), std::move(op), std::move(child))
        {
        }
    };
}

#endif //GUAVA_DOTOPERATION_H
