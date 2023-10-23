//
// Created by Patrick on 10/23/2023.
//

#ifndef GUAVA_BYTEDATAPROVIDER_H
#define GUAVA_BYTEDATAPROVIDER_H

#include "../guava-common.h"
#include "IDataProvider.h"


namespace guavalang::types {
    template<size_t Size>
    class ByteDataProvider : public IDataProvider {
    public:
        explicit ByteDataProvider(Array<Byte, Size> data) : m_data(data) {}
        explicit ByteDataProvider(const Byte* data) : m_data(data) {}

    private:
        Array<Byte, Size> m_data{};
    };
}

#endif //GUAVA_BYTEDATAPROVIDER_H
