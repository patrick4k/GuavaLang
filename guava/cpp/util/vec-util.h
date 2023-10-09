//
// Created by Patrick Kennedy on 10/9/23.
//

#ifndef GUAVA_VEC_UTIL_H
#define GUAVA_VEC_UTIL_H

#include "../guava-common.h"

template<typename T>
Vec<T> Concat(Vec<T> a, const Vec<T>& b) {
    a.insert(a.end(), b.begin(), b.end());
    return a;
}
#endif //GUAVA_VEC_UTIL_H
