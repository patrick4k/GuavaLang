//
// Created by Patrick on 10/23/2023.
//

#ifndef GUAVA_TYPE_H
#define GUAVA_TYPE_H

#include "IGuavaType.h"
#include "ITypeMember.h"

namespace guavalang::types {

    class IOperatorProvider;

    class Type : public IGuavaType {
    public:
        Optional<InstanceConstructor> constructor_from(PVec<IGuavaType> arg_types) override {
            return NullOpt;
        }

        Optional<IOperatorProvider*> GetOperatorProvider() override {
            if (auto op_provider = dynamic_cast<IOperatorProvider*>(this)) {
                return op_provider;
            }
            return NullOpt;
        }

    protected:
        Optional<Ptr<IGuavaType>> m_parentType{};
        PVec<ITypeMember> m_members{};
    };
}

#endif //GUAVA_TYPE_H
