//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_LAMBDA_H
#define GUAVA_LAMBDA_H

#include "../../parameters/Parameter.h"
#include "../../statement/IStatement.h"

namespace guavaparser {
    class Lambda : public IExpression {
    public:
        Lambda(PVec<Parameter> parameters, Optional<Ptr<IExpression>> returnType, Optional<Ptr<IStatement>> body) :
                m_parameters(std::move(parameters)),
                m_returnType(std::move(returnType)),
                m_body(std::move(body))
        {
        }

    private:
        PVec<Parameter> m_parameters{};
        Optional<Ptr<IExpression>> m_returnType{};
        Optional<Ptr<IStatement>> m_body{};
    };
}

#endif //GUAVA_LAMBDA_H
