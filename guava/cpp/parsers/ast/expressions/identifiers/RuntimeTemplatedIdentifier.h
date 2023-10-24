//
// Created by Patrick on 10/9/2023.
//

#ifndef GUAVA_RUNTIMETEMPLATEDIDENTIFIER_H
#define GUAVA_RUNTIMETEMPLATEDIDENTIFIER_H

#include "IIdentifier.h"
#include "../../../../guava-common.h"
#include "../IExpression.h"

namespace guavaparser {

    class RuntimeTemplatedIdentifier: public IIdentifier {
    public:
        explicit RuntimeTemplatedIdentifier(Ptr<IIdentifier> source, PVec<IExpression> templateArguments) :
        m_source(std::move(source)),
        m_templateArguments(std::move(templateArguments))
        {
        }

        [[nodiscard]] Ptr<IIdentifier> getSource() const {
            return m_source;
        }

        [[nodiscard]] const PVec<IExpression>& getTemplateArguments() const {
            return m_templateArguments;
        }
    private:

        Ptr<IIdentifier> m_source{};
        PVec<IExpression> m_templateArguments{};
    };

} // guavaparser

#endif //GUAVA_RUNTIMETEMPLATEDIDENTIFIER_H
