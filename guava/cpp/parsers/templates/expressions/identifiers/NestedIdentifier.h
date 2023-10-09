//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_NESTEDIDENTIFIER_H
#define GUAVA_NESTEDIDENTIFIER_H

#include "../../../../guava-common.h"
#include "IIdentifier.h"

namespace guavaparser {

    class NestedIdentifier: IIdentifier {
    public:

        explicit NestedIdentifier(Ptr<IIdentifier> source, Ptr<IIdentifier> target) :
        m_source(std::move(source)),
        m_target(std::move(target))
        {
        }

        [[nodiscard]] Ptr<IIdentifier> getSource() const {
            return m_source;
        }

        [[nodiscard]] Ptr<IIdentifier> getTarget() const {
            return m_target;
        }

    private:
        Ptr<IIdentifier> m_source{};
        Ptr<IIdentifier> m_target{};
    };

} // guavaparser

#endif //GUAVA_NESTEDIDENTIFIER_H
