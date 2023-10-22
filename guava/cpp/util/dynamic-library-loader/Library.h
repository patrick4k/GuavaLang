//
// Created by Patrick on 10/19/2023.
//

#ifndef GUAVA_LIBRARY_H
#define GUAVA_LIBRARY_H

#ifdef WIN32
#include <utility>

#include "WindowsDynamicLinker.h"
#define DynamicLinker WindowsDynamicLinker
#elif __APPLE__
#include "MacDynamicLinker.h"
#define DynamicLinker MacDynamicLinker
#elif __linux__
#include "LinuxDynamicLinker.h"
#define DynamicLinker LinuxDynamicLinker
#endif

#include "IDynamicLinker.h"

namespace guavalang::util {
    class Library {
    public:
        static Optional<Library> from(String path) {
             const auto lib = DynamicLinker::loadLibrary(path.c_str());
             if (lib != nullptr) {
                 return Optional<Library>{Library(lib)};
             }
             return NullOpt;
        }

        template<typename Fn>
        Fn getFunction(const String& name) const {
            return DynamicLinker::getFunction<Fn>(m_library, name.c_str());
        }

        void unload() const {
            DynamicLinker::unloadLibrary(m_library);
        }

    private:
        explicit Library(LibraryHandle library) :
        m_library(library)
        {
        }
        LibraryHandle m_library;
    };
}

#undef DynamicLinker

#endif //GUAVA_LIBRARY_H
