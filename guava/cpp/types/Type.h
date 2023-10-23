//
// Created by Patrick on 10/23/2023.
//

#ifndef GUAVA_TYPE_H
#define GUAVA_TYPE_H

#include "IType.h"

namespace guavalang::types {

    template<typename TOperatorProvider>
    class Type : public IType {
        Type(): IType(NewPtr<TOperatorProvider>()) {}
    };

}

#endif //GUAVA_TYPE_H
