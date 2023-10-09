//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_MATRIXEXPRESSION_H
#define GUAVA_MATRIXEXPRESSION_H

#include "../../matrix/ExpressionTupleAndMatrix.h"

namespace guavaparser {

    class MatrixExpression: public IExpression {
    public:
        explicit MatrixExpression(Ptr<ExpressionMatrix> matrix) :
        m_matrix(std::move(matrix))
        {
        }

    private:
        Ptr<ExpressionMatrix> m_matrix;
    };

}

#endif //GUAVA_MATRIXEXPRESSION_H
