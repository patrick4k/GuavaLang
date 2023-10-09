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

    template<typename T>
    inline T Cast(Any any) {
        return std::any_cast<T>(any);
    }

    template<typename T>
    inline Ptr<T> PCast(Any any) {
        return std::any_cast<Ptr<T>>(any);
    }

    template<typename T>
    inline Optional<T> SafeCast(Any any) {
        try {
            return Cast<T>(any);
        } catch (const std::bad_any_cast& e) {
            return std::nullopt;
        }
    }

    template<typename T>
    inline Optional<Ptr<T>> PSafeCast(Any any) {
        return SafeCast<Ptr<T>>(any);
    }

    template<typename T>
    inline Vec<T> VecCast(Any any) {
        if (auto retVal = SafeCast<Vec<T>>(any)) {
            return *retVal;
        }
        else if (auto retValOpt = SafeCast<T>(any)) {
            return Vec<T>{*retValOpt};
        }
        return Vec<T>();
    }

    template<typename T>
    inline PVec<T> PVecCast(Any any) {
        return VecCast<Ptr<T>>(any);
    }
}

#endif //GUAVA_GUAVA_TYPES_H
