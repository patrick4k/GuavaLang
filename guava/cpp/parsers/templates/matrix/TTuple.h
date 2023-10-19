//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_TTUPLE_H
#define GUAVA_TTUPLE_H

#include "../../../guava-common.h"
#include "../IAstTemplate.h"

namespace guavaparser {
    template<typename T>
    class TTuple : public IAstTemplate {
    public:
        TTuple() = default;
        explicit TTuple(Optional<Ptr<TTuple<T>>> tuple) {
            if (tuple) {
                m_values = (*tuple)->m_values;
            }
        }
        explicit TTuple(Vec<T> values) : m_values(values) {}

    private:
        Vec<T> m_values{};
    };
}

#endif //GUAVA_TTUPLE_H
