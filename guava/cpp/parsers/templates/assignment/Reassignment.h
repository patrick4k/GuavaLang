//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_REASSIGNMENT_H
#define GUAVA_REASSIGNMENT_H

#include "../../../guava-common.h"
#include "IAssignment.h"
#include "../expressions/IExpression.h"
#include "../statement/IStatement.h"

namespace guavaparser {

    class Reassignment: IAssignment {
    public:
        Reassignment(Ptr<IExpression> target, Ptr<IStatement> value) :
                m_target(std::move(target)),
                m_value(std::move(value))
        {
        }

    private:
        Ptr<IExpression> m_target{};
        Ptr<IStatement> m_value{};
    };

}

#endif //GUAVA_REASSIGNMENT_H
