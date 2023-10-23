//
// Created by Patrick on 10/22/2023.
//

#ifndef GUAVA_IGUAVATYPE_H
#define GUAVA_IGUAVATYPE_H

#include <functional>
#include "../guava-common.h"

namespace guavalang::types {

    class Instance;
    class IOperatorProvider;

    class IGuavaType {
    protected:
        using InstanceConstructor = std::function<Instance(Vec<Instance>)>;

    public:
        virtual Optional<InstanceConstructor> constructor_from(PVec<IGuavaType>) = 0;
        virtual Optional<IOperatorProvider*> GetOperatorProvider() = 0;
    };
}

#endif //GUAVA_IGUAVATYPE_H
