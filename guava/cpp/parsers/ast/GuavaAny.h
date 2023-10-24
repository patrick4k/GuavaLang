//
// Created by Patrick Kennedy on 10/10/23.
//

#ifndef GUAVA_GUAVAANY_H
#define GUAVA_GUAVAANY_H

#include "../../guava-common.h"
#include "IAstNode.h"

namespace guavaparser {
    class GuavaAny {
    public:
        explicit GuavaAny(Ptr<IAstNode> ptr) :
        m_ptr(std::move(ptr))
        {
        }

        template<typename T>
        Ptr<T> as() const {
            return std::dynamic_pointer_cast<T>(m_ptr);
        }

    private:
        Ptr<IAstNode> m_ptr{};
    };
}

#endif //GUAVA_GUAVAANY_H
