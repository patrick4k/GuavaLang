//
// Created by Patrick on 10/6/2023.
//

#ifndef GUAVA_PARAMETER_H
#define GUAVA_PARAMETER_H

#include <memory>
#include "../../../guava-common.h"
#include "../expressions/IExpression.h"

using namespace guavalang;

namespace guavaparser {

    class Parameter : public IAstTemplate {
    public:
        explicit Parameter(Ptr<IExpression> id, Ptr<IExpression> type) :
        m_id(std::move(id)),
        m_type(std::move(type))
        {
        }

    private:
        Ptr<IExpression> m_id{};
        Ptr<IExpression> m_type{};
    };
}

#endif //GUAVA_PARAMETER_H
