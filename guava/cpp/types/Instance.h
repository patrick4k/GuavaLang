//
// Created by Patrick on 10/23/2023.
//

#ifndef GUAVA_INSTANCE_H
#define GUAVA_INSTANCE_H

#include "IGuavaType.h"
#include "IDataProvider.h"
#include "IOperatorProvider.h"

namespace guavalang::types {
    class Instance {
    public:
        Instance(Ptr<IGuavaType> type, Ptr<IDataProvider> dataProvider) : m_type(std::move(type)), m_dataProvider(std::move(dataProvider)) {}

        [[nodiscard]] const Ptr<IGuavaType> &getType() const {
            return m_type;
        }

        [[nodiscard]] const Ptr<IDataProvider> &getDataProvider() const {
            return m_dataProvider;
        }

    private:
        Ptr<IGuavaType> m_type;
        Ptr<IDataProvider> m_dataProvider;
    };
}

#endif //GUAVA_INSTANCE_H
