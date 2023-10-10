//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_TMATRIX_H
#define GUAVA_TMATRIX_H

#include "../../../guava-common.h"
#include "TTuple.h"

namespace guavaparser {
    template<typename T>
    class TMatrix : public IAstTemplate {
    public:
        explicit TMatrix(PVec<TTuple<T>> values) : m_values(values) {}

    private:
        PVec<TTuple<T>> m_values{};
    };
}

#endif //GUAVA_TMATRIX_H
