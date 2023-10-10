//
// Created by Patrick Kennedy on 10/10/23.
//

#ifndef GUAVA_ANYTEMPLATE_H
#define GUAVA_ANYTEMPLATE_H

#include "../../guava-common.h"
#include "IAstTemplate.h"

namespace guavaparser {
    class AnyTemplate {
    public:
        explicit AnyTemplate(Ptr<IAstTemplate> ptr) :
        m_ptr(std::move(ptr))
        {
        }

        template<typename T>
        Ptr<T> as() {
            return std::dynamic_pointer_cast<T>(m_ptr);
        }

    private:
        Ptr<IAstTemplate> m_ptr{};
    };
}

#endif //GUAVA_ANYTEMPLATE_H
