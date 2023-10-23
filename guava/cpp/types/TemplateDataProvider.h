//
// Created by Patrick on 10/23/2023.
//

#ifndef GUAVA_TEMPLATEDATAPROVIDER_H
#define GUAVA_TEMPLATEDATAPROVIDER_H

#include <algorithm>
#include "IDataProvider.h"

namespace guavalang::types {

    template<typename T>
    class TemplateDataProvider: public IDataProvider {
    public:
        explicit TemplateDataProvider(T data) : m_data(std::move(data)) {}

        T data() const {
            return m_data;
        }

        T* data_ptr() const {
            return &m_data;
        }

        template<typename T2>
        static TemplateDataProvider<T2> from(T2 data) {
            return TemplateDataProvider<T2>(data);
        }

    private:
        T m_data;
    };

}

#endif //GUAVA_TEMPLATEDATAPROVIDER_H
