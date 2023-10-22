//
// Created by Patrick on 10/22/2023.
//

#include "../guava-test-common.h"
#include "../cpp/guava-common.h"
#include "../cpp/util/dynamic-library-loader/dynamic-linker-export.h"
#include "../cpp/intermediate-representation/TypeDeclaration.h"

#include "shared/overloaded_link_shared.h"

using namespace guavalang;

NEW_TEST(basic_link) {
    /*
     * This test the basic functionality of linking a library
     */
    auto lib = util::Library::from(TEST_DIR(dynamic_link_test/dll/basic_link.dll));
    typedef void(*HelloFn)(int);
    if (lib) {
        auto fn = lib->getFunction<HelloFn>("hello");
        if (fn != nullptr) {
            DEBUGOUT << "Hello: ";
            fn(120);
            lib->unload();
            return PASS;
        }
        DEBUGOUT << "Failed to get function" << ENDL;
        lib->unload();
    }
    return FAIL;
}

NEW_TEST(overloaded_link) {
    /*
     * This is a test to see how linked dll's handle inheritance and overloaded functions
     */

    /* Source of link: */
    /*
#include <iostream>

#include "shared/overloaded_link_shared.h"

class Child : public IType {
public:
    explicit Child(double num) : num(num) {}
    double num;

    ~Child() override = default;
};

class ChildHandler: public ITypeHandler {
public:
    double double_mod(IType *a, IType *b) override {
        std::cout << "ChildHandler::double_mod(IType*, IType*)" << std::endl;
        if (auto *a_cast = dynamic_cast<Child*>(a))
            if (auto *b_cast = dynamic_cast<Child*>(b))
                return double_mod(a_cast, b_cast);
        return 0;
    }

    double double_mod(Child *a, Child *b) {
        std::cout << "ChildHandler::double_mod(Child*, Child*)" << std::endl;
        return std::fmod(a->num, b->num);
    }
};

extern "C" __declspec(dllexport) ITypeHandler* create_handler() {
    return new ChildHandler();
}

extern "C" __declspec(dllexport) IType* create_type(double num) {
    return new Child(num);
}

     */

    auto lib = util::Library::from(TEST_DIR(dynamic_link_test/dll/overloaded_link.dll));
    if (lib) {
        if (auto handler_constructor = lib->getFunction<NewHandler>("create_handler")) {
            ITypeHandler* handler = handler_constructor();
            if (auto type_constructor = lib->getFunction<NewType>("create_type")) {
                double a = 10.034, b = 2.01;
                IType* type_a = type_constructor(a);
                IType* type_b = type_constructor(b);
                auto result = handler->double_mod(type_a, type_b);
                auto ret = RESULT(result == fmod(a, b));
                return ret;
            }
        }
        lib->unload();
    }
    return FAIL;
}

TEST_RESULT main() {
    ADD_TEST(basic_link)
    ADD_TEST(overloaded_link)
    END_TEST()
}
