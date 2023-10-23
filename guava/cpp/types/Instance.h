//
// Created by Patrick on 10/23/2023.
//

#ifndef GUAVA_INSTANCE_H
#define GUAVA_INSTANCE_H

#include "IType.h"
#include "IDataProvider.h"
#include "IOperatorProvider.h"

namespace guavalang::types {
    class Instance {
    public:
        Instance(Ptr<IType> type, Ptr<IDataProvider> dataProvider) : m_type(std::move(type)), m_dataProvider(std::move(dataProvider)) {}

        [[nodiscard]] const Ptr<IType> &getType() const {
            return m_type;
        }

        [[nodiscard]] const Ptr<IDataProvider> &getDataProvider() const {
            return m_dataProvider;
        }

    private:
        Ptr<IType> m_type;
        Ptr<IDataProvider> m_dataProvider;
    };
}

#endif //GUAVA_INSTANCE_H
