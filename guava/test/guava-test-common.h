//
// Created by Patrick on 10/22/2023.
//

#ifndef GUAVA_GUAVA_TEST_COMMON_H
#define GUAVA_GUAVA_TEST_COMMON_H

#define TESTOUT std::cout << "TEST: "
#define ENDL std::endl
#define FAIL_MSG(x) std::cout << "FAIL: " << #x << ENDL; return 1;

#define TEST_RESULT int
#define PASS return 0;
#define FAIL return 1;
#define RESULT(x) if (x) return 0; else { FAIL_MSG(at #x) }

#define TEST_DIR(path) (String(R"(..\..\guava\test\)") + String(#path))
//#define TEST_DIR(path) (String(R"(../../guava/test/)") + String(#path))

#define ADD_TEST(test_name) \
    TESTOUT << "Starting test \"" << #test_name << "\"" << ENDL; \
    if (test_name() == 1) { \
        FAIL_MSG(on #test_name) \
    } \
    else { \
        TESTOUT << "Passed test \"" << #test_name << "\"" << ENDL << ENDL; \
    }

#define END_TEST() PASS

#define NEW_TEST(test_name) TEST_RESULT test_name()

#endif //GUAVA_GUAVA_TEST_COMMON_H
