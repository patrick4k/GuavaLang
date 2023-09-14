//
// Created by Patrick on 9/13/2023.
//

#ifndef GUAVA_GUAVA_STATICS_H
#define GUAVA_GUAVA_STATICS_H

#include <iostream>
#include "util/StringUtility.h"

constexpr std::ostream* ConsolePtr = &std::cout;
constexpr std::ostream* DebugConsolePtr = ConsolePtr;
#define COUT (*ConsolePtr)
#define ENDL std::endl
#define DCOUT (*DebugConsolePtr)

#endif //GUAVA_GUAVA_STATICS_H
