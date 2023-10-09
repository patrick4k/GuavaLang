//
// Created by Patrick Kennedy on 10/9/23.
//

#ifndef GUAVA_BODYSTATEMENTFOLLOWUP_H
#define GUAVA_BODYSTATEMENTFOLLOWUP_H

#include "../../../guava-common.h"
#include "../statement/IStatement.h"

namespace guavaparser {
    class BodyStatementFollowUp {
    public:
        StatementFollowUp(String bodyFollowUpKeyword, Ptr<IStatement> statement) :
        m_bodyFollowUpKeyword(bodyFollowUpKeyword),
        m_statement(statement)
        {
        }

    private:
        String m_bodyFollowUpKeyword{};
        Ptr<IStatement> m_statement{};
    };
}

#endif //GUAVA_BODYSTATEMENTFOLLOWUP_H
