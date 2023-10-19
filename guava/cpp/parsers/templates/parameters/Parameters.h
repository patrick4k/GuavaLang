//
// Created by Patrick on 10/11/2023.
//

#ifndef GUAVA_PARAMETERS_H
#define GUAVA_PARAMETERS_H

#include "../../../guava-common.h"
#include "Parameter.h"

namespace guavaparser {
    class Parameters : public IAstTemplate {
    public:
        Parameters() = default;
        explicit Parameters(PVec<Parameter> parameters) :
                m_parameters(std::move(parameters))
        {
        }

    private:
        PVec<Parameter> m_parameters{};
    };
}

#endif //GUAVA_PARAMETERS_H
