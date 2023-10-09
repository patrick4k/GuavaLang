//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_STATEMENTTUPLEANDMATRIX_H
#define GUAVA_STATEMENTTUPLEANDMATRIX_H


#include "../../../guava-common.h"
#include "../statement/IStatement.h"
#include "TTuple.h"
#include "TMatrix.h"

namespace guavaparser {
    using StatementTuple = TTuple<Ptr<IStatement>>;
    using StatementMatrix = TMatrix<Ptr<IStatement>>;
}

#endif //GUAVA_STATEMENTTUPLEANDMATRIX_H
