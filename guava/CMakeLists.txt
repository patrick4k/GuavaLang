# -*- mode:cmake -*-

include(GenerateParser.cmake)

include_directories(
        ${PROJECT_SOURCE_DIR}/antlr4cpp-runtime/src
        ${PROJECT_SOURCE_DIR}/antlr4cpp-runtime/src/misc
        ${PROJECT_SOURCE_DIR}/antlr4cpp-runtime/src/atn
        ${PROJECT_SOURCE_DIR}/antlr4cpp-runtime/src/dfa
        ${PROJECT_SOURCE_DIR}/antlr4cpp-runtime/src/tree
        ${PROJECT_SOURCE_DIR}/antlr4cpp-runtime/src/support
    ${PROJECT_SOURCE_DIR}/guava/generated
)

set(guava_SRC cpp/main.cpp
        cpp/parsers/GuavaFileVisitor.cpp cpp/parsers/GuavaFileVisitor.h cpp/parsers/IBytecodeBuilder.h cpp/parsers/parser-common.h cpp/guava-common.h cpp/guava-types.h)

if(NOT CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  set (flags_1 "-Wno-overloaded-virtual")
else()
  set (flags_1 "-MP /wd4251")
endif()

foreach(src_file ${guava_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          COMPILE_FLAGS "${COMPILE_FLAGS} ${flags_1}"
          )
endforeach(src_file ${guava_SRC})

add_executable(guava cpp/guava-statics.h cpp/util/util-common.h cpp/util/StringUtility.cpp cpp/util/StringUtility.h cpp/guavabytes/IGuavaByteInstruction.h cpp/guavabytes/GuavaByteCode.cpp cpp/guavabytes/GuavaByteCode.h cpp/parsers/GuavaStatementVisitor.cpp cpp/parsers/GuavaStatementVisitor.h)
GenerateParser(Guava)
GenerateParser(Statement)

target_sources(guava PRIVATE ${guava_SRC})

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  target_compile_options(guava PRIVATE "/MT$<$<CONFIG:Debug>:d>")
endif()

target_link_libraries(guava antlr4_static)

install(TARGETS guava
        DESTINATION "share" 
        COMPONENT dev 
        )
