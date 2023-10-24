//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_TEMPLATEDIDENTIFIER_H
#define GUAVA_TEMPLATEDIDENTIFIER_H


#include "IIdentifier.h"
#include "../../../../guava-common.h"

namespace guavaparser {

    class TemplatedIdentifier: public IIdentifier {
    public:
        explicit TemplatedIdentifier(Ptr<IIdentifier> source, PVec<IIdentifier> templateArguments) :
                m_source(std::move(source)),
                m_templateArguments(std::move(templateArguments))
        {
        }

        [[nodiscard]] Ptr<IIdentifier> getSource() const {
            return m_source;
        }

        [[nodiscard]] const PVec<IIdentifier>& getTemplateArguments() const {
            return m_templateArguments;
        }
    private:
        Ptr<IIdentifier> m_source{};
        PVec<IIdentifier> m_templateArguments{};
    };

} // guavaparser

#endif //GUAVA_TEMPLATEDIDENTIFIER_H
