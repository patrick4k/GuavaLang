//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_RANGEEXPRESSION_H
#define GUAVA_RANGEEXPRESSION_H

#include "../../../../guava-common.h"
#include "../IExpression.h"

namespace guavaparser {

    class RangeExpression : public IExpression {
    public:
        RangeExpression(Ptr<IExpression> start, Ptr<IExpression> end, Optional<Ptr<IExpression>> step) :
                m_start(std::move(start)),
                m_end(std::move(end)),
                m_step(std::move(step))
        {
        }

    private:
        Ptr<IExpression> m_start;
        Ptr<IExpression> m_end;
        Optional<Ptr<IExpression>> m_step;
    };
}

#endif //GUAVA_RANGEEXPRESSION_H
