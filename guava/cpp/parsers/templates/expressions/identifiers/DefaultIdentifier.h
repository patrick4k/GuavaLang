//
// Created by Patrick on 10/8/2023.
//

#ifndef GUAVA_DEFAULTIDENTIFIER_H
#define GUAVA_DEFAULTIDENTIFIER_H

#include "IIdentifier.h"
#include "../../../../guava-common.h"

namespace guavaparser {

    class DefaultIdentifier: IIdentifier {
    public:
        explicit DefaultIdentifier(String name) : m_name(std::move(name)) {}

        [[nodiscard]] String getName() const {
            return m_name;
        }
    private:
        String m_name;
    };

} // guavaparser


#endif //GUAVA_DEFAULTIDENTIFIER_H
