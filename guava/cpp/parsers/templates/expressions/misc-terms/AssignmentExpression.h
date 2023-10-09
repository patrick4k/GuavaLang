//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_ASSIGNMENTEXPRESSION_H
#define GUAVA_ASSIGNMENTEXPRESSION_H

#include "../../../../guava-common.h"
#include "../IExpression.h"
#include "../../assignment/IAssignment.h"

namespace guavaparser {
    class AssignmentExpression: public IExpression{
    public:
        explicit AssignmentExpression(Ptr<IAssignment> assignment) :
        m_assignment(std::move(assignment))
        {
        }
    private:
        Ptr<IAssignment> m_assignment;
    };
}

#endif //GUAVA_ASSIGNMENTEXPRESSION_H
