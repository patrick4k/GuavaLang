//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_EXPRESSIONTUPLEANDMATRIX_H
#define GUAVA_EXPRESSIONTUPLEANDMATRIX_H

#include "../../../guava-common.h"
#include "../expressions/IExpression.h"
#include "TTuple.h"
#include "TMatrix.h"

namespace guavaparser {
    using ExpressionTuple = TTuple<Ptr<IExpression>>;
    using ExpressionMatrix = TMatrix<Ptr<IExpression>>;
}

#endif //GUAVA_EXPRESSIONTUPLEANDMATRIX_H
