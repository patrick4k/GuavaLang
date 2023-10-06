//
// Created by Patrick on 9/13/2023.
//

#ifndef GUAVA_GUAVA_TYPES_H
#define GUAVA_GUAVA_TYPES_H

#include <string>
#include <any>
#include <optional>
#include <vector>

namespace guavalang
{
    template<typename T>
    inline T Cast(std::any any) {
        return std::any_cast<T>(any);
    }

    using String = std::string;
    using Any = std::any;

    template<typename T>
    using Optional = std::optional<T>;

    template<typename T>
    using Vec = std::vector<T>;
}

#endif //GUAVA_GUAVA_TYPES_H
