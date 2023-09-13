# -*- mode:cmake -*-
if(NOT UNIX)
  message(WARNING "Unsupported operating system")
endif()

set(STDANYALT "Value")

set(guava-GENERATED_SRC
        ${PROJECT_SOURCE_DIR}/guava/generated/GuavaLexer.cpp
        ${PROJECT_SOURCE_DIR}/guava/generated/GuavaParser.cpp
        ${PROJECT_SOURCE_DIR}/guava/generated/GuavaParserBaseListener.cpp
        ${PROJECT_SOURCE_DIR}/guava/generated/GuavaParserBaseVisitor.cpp
        ${PROJECT_SOURCE_DIR}/guava/generated/GuavaParserListener.cpp
        ${PROJECT_SOURCE_DIR}/guava/generated/GuavaParserVisitor.cpp
        )

foreach(src_file ${guava-GENERATED_SRC})
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          GENERATED TRUE
          )
endforeach(src_file ${guava-GENERATED_SRC})

# Generate common parser
add_custom_target(GenerateParser DEPENDS ${guava-GENERATED_SRC})
add_custom_command(OUTPUT ${guava-GENERATED_SRC}
   COMMAND
   ${CMAKE_COMMAND} -E make_directory ${PROJECT_SOURCE_DIR}/guava/generated/
   COMMAND
   "${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_LOCATION} -Werror -Dlanguage=Cpp -listener -visitor -o ${PROJECT_SOURCE_DIR}/guava/generated/ -package GParser ${PROJECT_SOURCE_DIR}/guava/GuavaLexer.g4 ${PROJECT_SOURCE_DIR}/guava/GuavaParser.g4
   WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
   DEPENDS ${PROJECT_SOURCE_DIR}/guava/GuavaLexer.g4 ${PROJECT_SOURCE_DIR}/guava/GuavaParser.g4
)

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
        ${guava-GENERATED_SRC}
)

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

add_executable(guava
  ${guava_SRC}
  )

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  target_compile_options(guava PRIVATE "/MT$<$<CONFIG:Debug>:d>")
endif()

add_dependencies(guava GenerateParser)

target_link_libraries(guava antlr4_static)

install(TARGETS guava
        DESTINATION "share" 
        COMPONENT dev 
        )

