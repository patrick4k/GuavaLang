//
// Created by Patrick Kennedy on 10/9/23.
//

#ifndef GUAVA_SCOPESTATEMENT_H
#define GUAVA_SCOPESTATEMENT_H

#include "IStatement.h"

namespace guavaparser {
    class ScopeStatement: public IStatement {
    public:
        ScopeStatement(PVec<IScentence> scentences) :
        m_scentences(scentences)
        {
        }

    private:
        PVec<IScentence> m_scentences;
    };
}

#endif //GUAVA_SCOPESTATEMENT_H
