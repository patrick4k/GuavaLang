//
// Created by Patrick Kennedy on 10/9/23.
//

#ifndef GUAVA_COMPOUNDSENTENCE_H
#define GUAVA_COMPOUNDSENTENCE_H

#include <utility>

#include "../../../guava-common.h"
#include "../statement/IStatement.h"
#include "ISentence.h"
#include "../matrix/StatementTupleAndMatrix.h"
#include "../statement/BodyStatementFollowUp.h"

namespace guavaparser {

    class CompoundSentence : public ISentence {
    public:
        CompoundSentence(Ptr<ISentence> sentence, String bodyKeyword, Ptr<StatementMatrix> args,
                          Optional<BodyStatementFollowUp> followUp) :
                m_sentence(std::move(sentence)),
                m_bodyKeyword(std::move(bodyKeyword)),
                m_args(std::move(args)),
                m_followUp(std::move(followUp)) {
        }

    private:
        Ptr<ISentence> m_sentence{};
        String m_bodyKeyword{};
        Ptr<StatementMatrix> m_args{};
        Optional<BodyStatementFollowUp> m_followUp{};
    };
}

#endif //GUAVA_COMPOUNDSENTENCE_H
