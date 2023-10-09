//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_TUPLEEXPRESSION_H
#define GUAVA_TUPLEEXPRESSION_H

#include "../../matrix/ExpressionTupleAndMatrix.h"

namespace guavaparser {

    class TupleExpression : public IExpression {
    public:
        explicit TupleExpression(Ptr<ExpressionTuple> tuple) :
        m_tuple(std::move(tuple)) {}

    private:
        Ptr<ExpressionTuple> m_tuple;
    };
}

#endif //GUAVA_TUPLEEXPRESSION_H
