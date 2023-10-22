//
// Created by Patrick on 9/13/2023.
//

#ifndef GUAVA_GUAVA_TYPES_H
#define GUAVA_GUAVA_TYPES_H

#include <string>
#include <optional>
#include <vector>
#include <memory>
#include <map>

#define NullOpt std::nullopt
#define NewPtr std::make_shared


namespace guavalang
{
    template<typename T>
    using Optional = std::optional<T>;

    using String = std::string;

    template<typename T>
    using Uptr = std::unique_ptr<T>;

    template<typename T>
    using Ptr = std::shared_ptr<T>;

    template<typename T>
    using Vec = std::vector<T>;

    template<typename T>
    using PVec = std::vector<Ptr<T>>;

    template<typename T>
    using Map = std::map<String, T>;

    template<typename T>
    using PMap = std::map<String, Ptr<T>>;

    template<typename T, typename R>
    using Map2 = std::map<T, std::map<T, R>>;

}

#endif //GUAVA_GUAVA_TYPES_H
