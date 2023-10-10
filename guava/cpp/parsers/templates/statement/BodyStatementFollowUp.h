//
// Created by Patrick Kennedy on 10/9/23.
//

#ifndef GUAVA_BODYSTATEMENTFOLLOWUP_H
#define GUAVA_BODYSTATEMENTFOLLOWUP_H

#include "../../../guava-common.h"
#include "IStatement.h"

namespace guavaparser {
    class BodyStatementFollowUp : public IAstTemplate {
    public:
        BodyStatementFollowUp(String bodyFollowUpKeyword, Ptr<IStatement> statement) :
        m_bodyFollowUpKeyword(std::move(bodyFollowUpKeyword)),
        m_statement(std::move(statement))
        {
        }

    private:
        String m_bodyFollowUpKeyword{};
        Ptr<IStatement> m_statement{};
    };
}

#endif //GUAVA_BODYSTATEMENTFOLLOWUP_H
