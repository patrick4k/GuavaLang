//
// Created by Patrick on 10/19/2023.
//

#ifndef GUAVA_IDYNAMICLINKER_H
#define GUAVA_IDYNAMICLINKER_H

#include "../../guava-common.h"

namespace guavalang::util {

    class IDynamicLinker {
    public:
        virtual void* loadLibrary(const char* path) const = 0;
        virtual void unloadLibrary(void* library) const = 0;
    };
}

#endif //GUAVA_IDYNAMICLINKER_H
