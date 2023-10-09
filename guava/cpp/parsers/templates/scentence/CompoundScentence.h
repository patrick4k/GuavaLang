//
// Created by Patrick Kennedy on 10/9/23.
//

#ifndef GUAVA_COMPOUNDSCENTENCE_H
#define GUAVA_COMPOUNDSCENTENCE_H

#include <utility>

#include "../../../guava-common.h"
#include "../statement/IStatement.h"
#include "IScentence.h"
#include "../matrix/StatementTupleAndMatrix.h"
#include "../statement/BodyStatementFollowUp.h"

namespace guavaparser {

    class CompoundScentence : public IScentence {
    public:
        CompoundScentence(Ptr<IScentence> scentence, String bodyKeyword, Ptr<StatementMatrix> args,
                          Optional<BodyStatementFollowUp> followUp) :
                m_scentence(std::move(scentence)),
                m_bodyKeyword(std::move(bodyKeyword)),
                m_args(std::move(args)),
                m_followUp(std::move(followUp)) {
        }

    private:
        Ptr<IScentence> m_scentence{};
        String m_bodyKeyword{};
        Ptr<StatementMatrix> m_args{};
        Optional<BodyStatementFollowUp> m_followUp{};
    };
}

#endif //GUAVA_COMPOUNDSCENTENCE_H
