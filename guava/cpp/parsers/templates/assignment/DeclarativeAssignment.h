//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_DECLARATIVEASSIGNMENT_H
#define GUAVA_DECLARATIVEASSIGNMENT_H

#include "../parameters/Parameter.h"
#include "../statement/IStatement.h"
#include "IAssignment.h"

namespace guavaparser {
    class DeclarativeAssignment: public IAssignment {
    public:
        DeclarativeAssignment(Vec<String> modifiers, Ptr<Parameter> target, Ptr<IStatement> value) :
                m_modifiers(std::move(modifiers)),
                m_target(std::move(target)),
                m_value(std::move(value))
        {
        }
    private:
        Vec<String> m_modifiers{};
        Ptr<Parameter> m_target{};
        Ptr<IStatement> m_value{};
    };
}

#endif //GUAVA_DECLARATIVEASSIGNMENT_H
