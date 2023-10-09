//
// Created by Patrick Kennedy on 10/9/23.
//

#ifndef GUAVA_COMPOUNDSCENTENCE_H
#define GUAVA_COMPOUNDSCENTENCE_H

#include "../../../guava-common.h"
#include "../statement/IStatement.h"
#include "IScentence.h"
#include "../matrix/StatementTupleAndMatrix.h"
#include "../follow-up/BodyStatementFollowUp.h"

namespace guavaparser {

public:
    class CompoundScentence : public IScentence {
        CompoundScentence(Ptr<IScentence> scentence, String bodyKeyword, Ptr<StatementMatrix> args, Optional<BodyStatementFollowUp> followUp) :
        m_scentence(scentence),
        m_bodyKeyword(bodyKeyword),
        m_args(args),
        m_followUp(followUp)
        {
        }

    private:
        Ptr<IScentence> m_scentence{};
        String m_bodyKeyword{};
        Ptr<StatementMatrix> m_args{};
        Optional<BodyStatementFollowUp> m_followUp{};
    };

#endif //GUAVA_COMPOUNDSCENTENCE_H
