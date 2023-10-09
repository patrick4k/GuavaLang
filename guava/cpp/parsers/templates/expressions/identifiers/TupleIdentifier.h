//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_TUPLEIDENTIFIER_H
#define GUAVA_TUPLEIDENTIFIER_H

#include "IIdentifier.h"
#include "../../../../guava-common.h"

namespace guavaparser {

    class TupleIdentifier: public IIdentifier {
    public:
        explicit TupleIdentifier(PVec<IIdentifier> identifiers) : m_identifiers(std::move(identifiers)) {}

    private:
        PVec<IIdentifier> m_identifiers{};
    };

} // guavaparser

#endif //GUAVA_TUPLEIDENTIFIER_H
