//
// Created by Patrick on 9/13/2023.
//

#ifndef GUAVA_GUAVA_TYPES_H
#define GUAVA_GUAVA_TYPES_H

#include <string>
#include <any>

namespace guavalang
{
    using String = std::string;
    using Char = char;
    using Any = std::any;

    template<typename T>
    inline T Cast(Any any) {
        return std::any_cast<T>(any);
    }
}

#endif //GUAVA_GUAVA_TYPES_H
