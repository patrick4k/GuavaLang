//
// Created by Patrick on 9/13/2023.
//

#ifndef GUAVA_GUAVABYTECODE_H
#define GUAVA_GUAVABYTECODE_H

#include <vector>
#include "IGuavaByteInstruction.h"

namespace guavalang
{
    class GuavaByteCode
    {
    public:
        GuavaByteCode() = default;
        ~GuavaByteCode() = default;

        void AddInstruction(IGuavaByteInstruction* instruction)
        {
            instructions.push_back(instruction);
        }

    private:
        std::vector<IGuavaByteInstruction*> instructions;
    };
}

#endif //GUAVA_GUAVABYTECODE_H
