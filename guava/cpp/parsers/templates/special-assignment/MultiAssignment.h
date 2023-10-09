//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_MULTIASSIGNMENT_H
#define GUAVA_MULTIASSIGNMENT_H

#include <utility>

#include "../../../guava-common.h"
#include "../assignment/IAssignment.h"
#include "ISpecialAssignment.h"

namespace guavaparser {
    class MultiAssignment : public ISpecialAssignment {
    public:
        MultiAssignment(Vec<String> modifiers, PVec<IAssignment> assignments) :
        m_modifiers(std::move(modifiers)),
        m_assignments(std::move(assignments))
        {
        }

    private:
        Vec<String> m_modifiers{};
        PVec<IAssignment> m_assignments{};
    };
}

#endif //GUAVA_MULTIASSIGNMENT_H
