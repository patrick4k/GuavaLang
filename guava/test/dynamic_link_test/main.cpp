//
// Created by Patrick on 10/22/2023.
//


#include "../guava-test-common.h"
#include "../cpp/guava-common.h"
#include "../cpp/util/dynamic-library-loader/dynamic-linker-export.h"
#include "../cpp/intermediate-representation/TypeDeclaration.h"

using namespace guavalang;
using namespace intermediate;

int basic_link() {
    auto lib = util::Library::from(R"(..\..\test\dynamic-links\dll\CppLib.dll)");
    typedef Ptr<TypeDeclaration>(*TypeFn)();
    typedef void(*HelloFn)(int);
    if (lib) {
        auto fn = lib->getFunction<HelloFn>("hello");
        if (fn != nullptr) {
            DEBUGOUT << "Hello: ";
            fn(120);
            lib->unload();
            return 0;
        }
        DEBUGOUT << "Failed to get function" << ENDL;
        lib->unload();
    }
    return 1;
}

int main() {
    TESTOUT << "Running Dynamic Link Test..." << ENDL;
    START_TEST()
    ADD_TEST(basic_link)
    END_TEST()
}
