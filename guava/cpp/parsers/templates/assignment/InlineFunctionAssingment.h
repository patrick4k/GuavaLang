//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_INLINEFUNCTIONASSINGMENT_H
#define GUAVA_INLINEFUNCTIONASSINGMENT_H


#include "../../../guava-common.h"
#include "IAssignment.h"
#include "../expressions/IExpression.h"
#include "../statement/IStatement.h"
#include "../parameters/Parameters.h"

namespace guavaparser {

    class InlineFunctionAssignment: public IAssignment {
    public:
        InlineFunctionAssignment(String id, Ptr<Parameters> parameters, Ptr<IStatement> value) :
        m_name(std::move(id)),
        m_parameters(std::move(parameters)),
        m_value(std::move(value))
        {
        }

    private:
        String m_name{};
        Ptr<Parameters> m_parameters{};
        Ptr<IStatement> m_value{};
    };

}

#endif //GUAVA_INLINEFUNCTIONASSINGMENT_H
