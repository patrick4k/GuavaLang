//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_INDEXOPERATION_H
#define GUAVA_INDEXOPERATION_H

#include <utility>

#include "../../../../guava-common.h"
#include "IOperation.h"
#include "../IExpression.h"
#include "../../matrix/ExpressionTupleAndMatrix.h"

namespace guavaparser {
    class IndexOperation : public IOperation {
    public:
        IndexOperation(Ptr<IExpression> parent, Ptr<ExpressionMatrix> indices) :
        m_parent(std::move(parent)),
        m_indices(std::move(indices))
        {
        }

    private:
        Ptr<IExpression> m_parent;
        Ptr<ExpressionMatrix> m_indices;
    };
}

#endif //GUAVA_INDEXOPERATION_H
