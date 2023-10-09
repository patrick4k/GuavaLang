//
// Created by Patrick on 10/8/2023.
//

#ifndef GUAVA_SIMPLEIDENTIFIER_H
#define GUAVA_SIMPLEIDENTIFIER_H

#include "IIdentifier.h"
#include "../../../../guava-common.h"

namespace guavaparser {

    class SimpleIdentifier: IIdentifier {
    public:
        explicit SimpleIdentifier(String name) : m_name(std::move(name)) {}

        [[nodiscard]] String getName() const {
            return m_name;
        }
    private:
        String m_name;
    };

} // guavaparser

#endif //GUAVA_SIMPLEIDENTIFIER_H
