//
// Created by Patrick on 10/22/2023.
//

#ifndef GUAVA_GUAVA_TEST_COMMON_H
#define GUAVA_GUAVA_TEST_COMMON_H

#define PASS 0
#define FAIL 1

#define TESTOUT std::cout << "TEST: "
#define ENDL std::endl

#define START_TEST() \
    if (false) { \
    } else

#define ADD_TEST(test_name) \
    if (test_name() == FAIL) { \
        TESTOUT << "FAILED ON test_name" << ENDL; \
        return FAIL; \
    }

#define END_TEST() \
    else { \
        return PASS; \
    } \
    return FAIL;

#endif //GUAVA_GUAVA_TEST_COMMON_H
