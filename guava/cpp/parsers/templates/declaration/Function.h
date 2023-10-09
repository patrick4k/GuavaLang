//
// Created by Patrick on 10/6/2023.
//

#ifndef GUAVA_FUNCTION_H
#define GUAVA_FUNCTION_H

#include <utility>

#include "../../../guava-types.h"
#include "IDeclaration.h"
#include "../statement/IStatement.h"
#include "../expressions/IExpression.h"
#include "../parameters/Parameter.h"

using namespace guavalang;

namespace guavaparser {

    class Function : public IDeclaration {
    public:

        explicit Function(String name, PVec<Parameter> parameters, Optional<Ptr<IExpression>> returnType, PVec<IStatement> body) :
        m_name(std::move(name)),
        m_parameters(std::move(parameters)),
        m_returnType(std::move(returnType)),
        m_body(std::move(body))
        {
        }

    private:
        String m_name{};
        PVec<Parameter> m_parameters{};
        Optional<Ptr<IExpression>> m_returnType{};
        PVec<IStatement> m_body{};
    };

}

#endif //GUAVA_FUNCTION_H
