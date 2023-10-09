//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_FUNCTIONCALLEXPRESSION_H
#define GUAVA_FUNCTIONCALLEXPRESSION_H

#include "../../../../guava-common.h"
#include "../IExpression.h"
#include "../../matrix/ExpressionTupleAndMatrix.h"

namespace guavaparser {
    class FunctionCallExpression : public IExpression {
    public:
        FunctionCallExpression(Ptr<IExpression> function, Ptr<ExpressionMatrix> args) :
                m_function(std::move(function)),
                m_args(std::move(args))
        {
        }

    private:
        Ptr<IExpression> m_function;
        Ptr<ExpressionMatrix> m_args;
    };
}

#endif //GUAVA_FUNCTIONCALLEXPRESSION_H
