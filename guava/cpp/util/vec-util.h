//
// Created by Patrick Kennedy on 10/9/23.
//

#ifndef GUAVA_VEC_UTIL_H
#define GUAVA_VEC_UTIL_H

#include "../guava-common.h"
template<typename T>
Vec<T> Concat(const Vec<T>& a, const Vec<T>& b) {
    auto c = a;
    c.emplac_back(b.begin(), b.end());
    return c;
}
#endif //GUAVA_VEC_UTIL_H
