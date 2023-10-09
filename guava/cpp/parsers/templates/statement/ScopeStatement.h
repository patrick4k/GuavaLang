//
// Created by Patrick Kennedy on 10/9/23.
//

#ifndef GUAVA_SCOPESTATEMENT_H
#define GUAVA_SCOPESTATEMENT_H

#include "IStatement.h"

namespace guavaparser {
    class ScopeStatement: public IStatement {
    public:
        ScopeStatement(PVec<ISentence> sentences) :
        m_sentences(sentences)
        {
        }

    private:
        PVec<ISentence> m_sentences;
    };
}

#endif //GUAVA_SCOPESTATEMENT_H
