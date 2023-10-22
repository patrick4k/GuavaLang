//
// Created by Patrick on 10/19/2023.
//

#ifndef GUAVA_WINDOWSDYNAMICLINKER_H
#define GUAVA_WINDOWSDYNAMICLINKER_H

#include "IDynamicLinker.h"
#include <windows.h>

#define LibraryHandle HMODULE

namespace guavalang::util {

    class WindowsDynamicLinker {
    public:
        static LibraryHandle loadLibrary(const char *path) {
            HMODULE module = LoadLibrary(path);
            return module;
        }

        template<typename Fn>
        static Fn getFunction(LibraryHandle library, const char *name) {
            auto module = library;
            auto fnAddress = (Fn) GetProcAddress(module, name);
            return fnAddress;
        }

        static void unloadLibrary(LibraryHandle library) {
            FreeLibrary(library);
        }

    };
}

#endif //GUAVA_WINDOWSDYNAMICLINKER_H
