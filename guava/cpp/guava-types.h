//
// Created by Patrick on 9/13/2023.
//

#ifndef GUAVA_GUAVA_TYPES_H
#define GUAVA_GUAVA_TYPES_H

#include <string>
#include <any>
#include <optional>
#include <vector>
#include <memory>

namespace guavalang
{
    using Any = std::any;

    template<typename T>
    using Optional = std::optional<T>;
    using None = std::nullopt_t;
#define NullOpt std::nullopt

    using String = std::string;

    template<typename T>
    using Uptr = std::unique_ptr<T>;

    template<typename T>
    using Ptr = std::shared_ptr<T>;

    template<typename T>
    using Vec = std::vector<T>;

    template<typename T>
    using PVec = std::vector<Ptr<T>>;

#define NewPtr std::make_shared
}

#endif //GUAVA_GUAVA_TYPES_H
