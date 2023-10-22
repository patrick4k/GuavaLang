//
// Created by Patrick on 10/20/2023.
//

#ifndef GUAVA_TYPEDECLARATION_H
#define GUAVA_TYPEDECLARATION_H

namespace guavalang::intermediate {
    class TypeDeclaration {
    public:
        virtual double multiply(double a, double b) = 0;
    };
}

#endif //GUAVA_TYPEDECLARATION_H
