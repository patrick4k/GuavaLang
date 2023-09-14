//
// Created by Patrick on 9/13/2023.
//

#ifndef GUAVA_GUAVA_TYPES_H
#define GUAVA_GUAVA_TYPES_H

#include <string>
#include <any>

namespace guavalang
{
    template<typename T>
    inline T Cast(std::any any) {
        return std::any_cast<T>(any);
    }

    using String = std::string;
    using Any = std::any;

}

#endif //GUAVA_GUAVA_TYPES_H
