//
// Created by Patrick on 10/19/2023.
//

#ifndef GUAVA_TYPEINSTANTIATION_H
#define GUAVA_TYPEINSTANTIATION_H

#include "../../../../guava-common.h"
#include "../IExpression.h"
#include "../../matrix/matrix-export.h"


namespace guavaparser {
    class TypeInstantiation : public IExpression {
    public:
        explicit TypeInstantiation(Ptr<IExpression> type, Ptr<StatementMatrix> overloads) :
        m_type(std::move(type)),
        m_overloads(std::move(overloads))
        {
        }

    private:
        Ptr<IExpression> m_type;
        Ptr<StatementMatrix> m_overloads;
    };
}

#endif //GUAVA_TYPEINSTANTIATION_H
