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
        Script(PVec<Function> functions) :
        m_functions(std::move(functions))
        {
        }

        void add(Ptr<Function> function) {
            m_functions.push_back(function);
        }

    private:
        PVec<Function> m_functions{};
    };
}

#endif //GUAVA_SCRIPT_H
