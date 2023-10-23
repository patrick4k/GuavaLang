//
// Created by Patrick on 10/23/2023.
//

#ifndef GUAVA_ITYPEMEMBER_H
#define GUAVA_ITYPEMEMBER_H

#include "../guava-types.h"
#include "IType.h"
#include "Instance.h"

namespace guavalang::types {

    class ITypeMember {
    public:
        virtual ~ITypeMember() = default;

    private:
        String m_id;
        Ptr<IType> m_type;
        Optional<Instance> m_initialValue;
    };

}

#endif //GUAVA_ITYPEMEMBER_H
