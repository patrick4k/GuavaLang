//
// Created by Patrick on 10/6/2023.
//

#ifndef GUAVA_SCRIPT_H
#define GUAVA_SCRIPT_H


#include "templates-common.h"
#include "../../guava-common.h"

namespace guavaparser {
    class Script {
    public:
        Script() = default;
        Script(PVec<Function> functions, PVec<IType> types) : m_functions(std::move(functions)), m_types(std::move(types)) {}

        [[nodiscard]] const PVec<Function>& getFunctions() const {
            return m_functions;
        }

        [[nodiscard]] const PVec<IType>& getTypes() const {
            return m_types;
        }

        void add(Ptr<Function> function) {
            m_functions.push_back(std::move(function));
        }

        void add(Ptr<IType> type) {
            m_types.push_back(std::move(type));
        }

    private:
        PVec<Function> m_functions{};
        PVec<IType> m_types{};
    };
}

#endif //GUAVA_SCRIPT_H
