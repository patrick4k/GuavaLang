//
// Created by Patrick on 10/22/2023.
//

#ifndef GUAVA_ITYPE_H
#define GUAVA_ITYPE_H

#include <functional>
#include "../guava-common.h"


namespace guavalang::types {

    class Instance;
    class IOperatorProvider;

    class IType {
    protected:
        using InstanceConstructor = std::function<Instance(Vec<Instance>)>;

    public:
        IType() = default;
        explicit IType(Ptr<IOperatorProvider> operatorProvider) : m_operatorProvider(std::move(operatorProvider)) {}

        virtual Optional<InstanceConstructor> constructor_from(PVec<IType> arg_types) = 0;

    protected:
        Optional<Ptr<IOperatorProvider>> m_operatorProvider;
    };
}

#endif //GUAVA_ITYPE_H
