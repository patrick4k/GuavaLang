//
// Created by Patrick on 10/23/2023.
//

#ifndef GUAVA_IDATAPROVIDER_H
#define GUAVA_IDATAPROVIDER_H

#include "IPropertyProvider.h"

namespace guavalang::types {
    class IDataProvider: public IPropertyProvider {
    public:
        virtual ~IDataProvider() = default;
    };
}

#endif //GUAVA_IDATAPROVIDER_H
