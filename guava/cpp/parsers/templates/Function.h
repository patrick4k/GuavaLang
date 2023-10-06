//
// Created by Patrick on 10/6/2023.
//

#ifndef GUAVA_FUNCTION_H
#define GUAVA_FUNCTION_H

#include "../../guava-types.h"
#include "IDeclaration.h"
#include "IStatement.h"

using namespace guavalang;

namespace guavaparser {

    class Function : public IDeclaration {
    public:
        Function() = default;

        explicit Function(String name) : m_name(name) {}

        [[nodiscard]] const Optional<String> &getName() const {
            return m_name;
        }

    private:
        Optional<String> m_name{};
        Optional<Vec<IStatement*>> m_body{};
        /*TODO: parameters*/
    };

}

#endif //GUAVA_FUNCTION_H
