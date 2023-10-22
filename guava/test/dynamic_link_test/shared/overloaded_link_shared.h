//
// Created by Patrick on 10/22/2023.
//

#ifndef GUAVA_OVERLOADED_LINK_SHARED_H
#define GUAVA_OVERLOADED_LINK_SHARED_H

#include <map>
#include <vector>

#define DLL_EXPORT __declspec(dllexport)

class DLL_EXPORT IType {
public:
    virtual ~IType() = default;
};


class DLL_EXPORT ITypeHandler {
public:
    virtual double double_mod(IType* a, IType* b) = 0;
};

typedef ITypeHandler*(*NewHandler)();
typedef IType*(*NewType)(double);

#endif //GUAVA_OVERLOADED_LINK_SHARED_H
