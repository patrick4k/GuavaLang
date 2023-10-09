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
        IndexOperation(Ptr<IExpression> mParent, Ptr<ExpressionMatrix> mIndices) :
        m_parent(std::move(mParent)),
        m_indices(std::move(mIndices))
        {
        }

    private:
        Ptr<IExpression> m_parent;
        Ptr<ExpressionMatrix> m_indices;
    };
}

#endif //GUAVA_INDEXOPERATION_H
