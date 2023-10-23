//
// Created by Patrick Kennedy on 10/23/23.
//

#ifndef GUAVA_MACDYNAMICLINKER_H
#define GUAVA_MACDYNAMICLINKER_H

#include "IDynamicLinker.h"
#include "../../error/error-common.h"

#define LibraryHandle void* // TODO: Get Handle for Apple


namespace guavalang::util {
    class MacDynamicLinker {
    public:
        static LibraryHandle loadLibrary(const char *path) {
            NOT_IMPLEMENTED
        }

        template<typename Fn>
        static Fn getFunction(LibraryHandle library, const char *name) {
            NOT_IMPLEMENTED
        }

        static void unloadLibrary(LibraryHandle library) {
            NOT_IMPLEMENTED
        }
    };
}

#endif //GUAVA_MACDYNAMICLINKER_H
