//
// Created by Patrick on 9/13/2023.
//

#ifndef GUAVA_STRINGUTILITY_H
#define GUAVA_STRINGUTILITY_H

#include "../guava-types.h"

using namespace guavalang;

template<typename T>
String Str(T t)
{
    return std::to_string(t);
}

#endif //GUAVA_STRINGUTILITY_H
