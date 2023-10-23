//
// Created by Patrick on 9/13/2023.
//

#ifndef GUAVA_GUAVA_STATICS_H
#define GUAVA_GUAVA_STATICS_H

#include <iostream>
#include <chrono>
#include "util/string-utility.h"

#define COUT std::cout
#define ENDL std::endl
#define DOUT std::cout
#define DEBUGOUT DOUT << "DEBUG " << RUNTIME << "ms: "
#define DEBUGOUT_HIRES DOUT << "DEBUG " << RUNTIME_HIRES << "ns: "

static auto s_startTime = std::chrono::high_resolution_clock::now();
#define NOW std::chrono::high_resolution_clock::now()
#define RUNTIME std::chrono::duration_cast<std::chrono::milliseconds>(NOW - s_startTime).count()
#define RUNTIME_HIRES std::chrono::duration_cast<std::chrono::nanoseconds>(NOW - s_startTime).count()

#endif //GUAVA_GUAVA_STATICS_H
