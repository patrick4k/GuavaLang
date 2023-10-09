//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_INLINEFUNCTIONASSINGMENT_H
#define GUAVA_INLINEFUNCTIONASSINGMENT_H


#include "../../../guava-common.h"
#include "IAssignment.h"
#include "../expressions/IExpression.h"
#include "../statement/IStatement.h"

namespace guavaparser {

    class InlineFunctionAssignment: IAssignment {
    public:
        InlineFunctionAssignment(String id, Ptr<IStatement> value) :
        {
        }

    private:
        Ptr<IExpression> m_target{};
        Ptr<IStatement> m_value{};
    };

}

#endif //GUAVA_INLINEFUNCTIONASSINGMENT_H
