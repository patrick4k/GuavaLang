//
// Created by Patrick on 10/10/2023.
//

#ifndef GUAVA_PARSER_UTIL_H
#define GUAVA_PARSER_UTIL_H

#include "../guava-common.h"
#include "templates/AnyTemplate.h"

namespace guavaparser {

    // USED ONCE (can be removed)
    template<typename T>
    Optional<String> OptionalLex(T val) {
        return val ? Optional<String>(val->getText()) : NullOpt;
    }

    /*visit()->Ptr<T>*/
    template<typename T>
    inline Ptr<T> PAnyCast(Any any) {
        auto anyTemplate = std::any_cast<AnyTemplate>(any);
        return anyTemplate.as<T>();
    }

    /*any->Opt<Ptr<T>>*/
    template<typename T>
    inline Optional<Ptr<T>> PSafeCast(Any any) {
        try {
            return PAnyCast<T>(any);
        } catch (...) {
            return std::nullopt;
        }
    }

    /*visitVec() -> Vec<Ptr<T>>*/
    template<typename T>
    inline PVec<T> PVecCast(Any any) {
        if (!any.has_value()) return PVec<T>{};
        const auto anyVec = std::any_cast<Vec<Any>>(any);
        PVec<T> vec{anyVec.size()};
        for (int i = 0; i < anyVec.size(); i++) {
            vec[i] = PAnyCast<T>(anyVec[i]);
        }
        return vec;
    }

}

#endif //GUAVA_PARSER_UTIL_H
