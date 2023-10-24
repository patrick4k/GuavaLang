//
// Created by Patrick Kennedy on 10/9/23.
//

#ifndef GUAVA_BODYSTATEMENT_H
#define GUAVA_BODYSTATEMENT_H

#include "../../../guava-common.h"
#include "IStatement.h"
#include "../matrix/StatementTupleAndMatrix.h"
#include "BodyStatementFollowUp.h"

namespace guavaparser {
    class BodyStatement: public IStatement {
    public:
        BodyStatement(String bodyKeyword, Ptr<StatementMatrix> args, Ptr<IStatement> statement, Optional<Ptr<BodyStatementFollowUp>> followUp):
        m_bodyKeyword(std::move(bodyKeyword)),
        m_args(std::move(args)),
        m_statement(std::move(statement)),
        m_followUp(std::move(followUp))
        {
        }

    private:
        String m_bodyKeyword{};
        Ptr<StatementMatrix> m_args{};
        Ptr<IStatement> m_statement{};
        Optional<Ptr<BodyStatementFollowUp>> m_followUp{};
    };
}

#endif //GUAVA_BODYSTATEMENT_H
