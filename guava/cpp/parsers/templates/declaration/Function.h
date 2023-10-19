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
#include "../parameters/Parameters.h"
#include "../expressions/identifiers/IIdentifier.h"

using namespace guavalang;

namespace guavaparser {

    class Function : public IDeclaration {
    public:

        explicit Function(Ptr<IIdentifier> id, Ptr<Parameters> parameters, Optional<Ptr<IExpression>> returnType, Ptr<IStatement> body) :
        m_id(std::move(id)),
        m_parameters(std::move(parameters)),
        m_returnType(std::move(returnType)),
        m_body(std::move(body))
        {
        }

    private:
        Ptr<IIdentifier> m_id{};
        Ptr<Parameters> m_parameters{};
        Optional<Ptr<IExpression>> m_returnType{};
        Ptr<IStatement> m_body{};
    };

}

#endif //GUAVA_FUNCTION_H
