//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_TTUPLE_H
#define GUAVA_TTUPLE_H

#include "../../../guava-common.h"

namespace guavaparser {
    template<typename T>
    class TTuple {
        explicit TTuple(PVec<T> values) : m_values(values) {}

    private:
        PVec<T> m_values{};
    };
}

#endif //GUAVA_TTUPLE_H
