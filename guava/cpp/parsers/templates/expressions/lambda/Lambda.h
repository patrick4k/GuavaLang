//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_LAMBDA_H
#define GUAVA_LAMBDA_H

#include "../../parameters/Parameters.h"
#include "../../statement/IStatement.h"

namespace guavaparser {
    class Lambda : public IExpression {
    public:
        Lambda(Ptr<Parameters> parameters, Optional<Ptr<IExpression>> returnType, Ptr<IStatement> body) :
                m_parameters(std::move(parameters)),
                m_returnType(std::move(returnType)),
                m_body(std::move(body))
        {
        }

    private:
        Ptr<Parameters> m_parameters{};
        Optional<Ptr<IExpression>> m_returnType{};
        Ptr<IStatement> m_body{};
    };
}

#endif //GUAVA_LAMBDA_H
