//
// Created by Patrick on 10/22/2023.
//

#ifndef GUAVA_GUAVA_TEST_COMMON_H
#define GUAVA_GUAVA_TEST_COMMON_H

#define TEST_RESULT int
#define PASS 0
#define FAIL 1
#define RESULT(x) (x? PASS: FAIL)

#define TEST_DIR(path) (String(R"(..\..\guava\test\)") + String(#path))
//#define TEST_DIR(path) (String(R"(../../guava/test/)") + String(#path))

#define TESTOUT std::cout << "TEST: "
#define ENDL std::endl

#define ADD_TEST(test_name) \
    TESTOUT << "Starting test \"" << #test_name << "\"" << ENDL; \
    if (test_name() == FAIL) { \
        TESTOUT << "Failed test \"" << #test_name << "\"" << ENDL; \
        return FAIL; \
    } \
    else { \
        TESTOUT << "Passed test \"" << #test_name << "\"" << ENDL << ENDL; \
    }

#define END_TEST() return PASS;

#define NEW_TEST(test_name) TEST_RESULT test_name()

#endif //GUAVA_GUAVA_TEST_COMMON_H
