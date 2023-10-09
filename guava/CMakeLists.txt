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
        cpp/parsers/GuavaScriptVisitor.cpp cpp/parsers/GuavaScriptVisitor.h cpp/parsers/IBytecodeBuilder.h cpp/parsers/parser-common.h cpp/guava-common.h cpp/guava-types.h)

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

add_executable(guava cpp/guava-statics.h cpp/util/util-common.h cpp/util/string-utility.cpp cpp/util/string-utility.h cpp/guavabytes/IGuavaByteInstruction.h cpp/guavabytes/GuavaByteCode.cpp cpp/guavabytes/GuavaByteCode.h cpp/parsers/generated-common.h cpp/parsers/GuavaPredicateParser.cpp cpp/parsers/GuavaPredicateParser.h cpp/error/error-common.h cpp/parsers/templates/declaration/Function.h cpp/parsers/templates/declaration/IDeclaration.h cpp/parsers/templates/statement/IStatement.h cpp/parsers/templates/IType.h cpp/parsers/templates/parameters/Parameter.h cpp/parsers/templates/Script.h cpp/types/IPrimitive.h cpp/parsers/templates/expressions/identifiers/IIdentifier.h cpp/parsers/templates/expressions/identifiers/SimpleIdentifier.h cpp/parsers/templates/expressions/identifiers/DefaultIdentifier.h cpp/parsers/templates/templates-common.h cpp/parsers/templates/expressions/identifiers/TupleIdentifier.h cpp/parsers/templates/expressions/identifiers/NestedIdentifier.h cpp/parsers/templates/expressions/identifiers/RuntimeTemplatedIdentifier.h cpp/parsers/templates/expressions/IExpression.h cpp/parsers/templates/expressions/identifiers/TemplatedIdentifier.h cpp/parsers/templates/assignment/Reassignment.h cpp/parsers/templates/assignment/IAssignment.h cpp/parsers/templates/assignment/InlineFunctionAssingment.h cpp/parsers/templates/assignment/DeclarativeAssignment.h cpp/parsers/templates/matrix/TTuple.h cpp/parsers/templates/matrix/TMatrix.h cpp/parsers/templates/matrix/ExpressionTupleAndMatrix.h cpp/parsers/templates/matrix/StatementTupleAndMatrix.h cpp/parsers/templates/special-assignment/ISpecialAssignment.h cpp/parsers/templates/special-assignment/MultiAssignment.h cpp/parsers/templates/expressions/lambda/Lambda.h cpp/parsers/templates/expressions/operations/IOperation.h cpp/parsers/templates/expressions/operations/DotOperation.h cpp/parsers/templates/expressions/operations/IndexOperation.h cpp/parsers/templates/expressions/operations/BinaryOperation.h cpp/parsers/templates/expressions/misc-terms/IndexKeyword.h cpp/parsers/templates/expressions/misc-terms/FunctionCallExpression.h cpp/parsers/templates/expressions/misc-terms/RangeExpression.h cpp/parsers/templates/expressions/misc-terms/LiteralExpression.h cpp/parsers/templates/expressions/operations/UnaryPrefixOperation.h cpp/parsers/templates/expressions/operations/UnaryOperation.h cpp/parsers/templates/expressions/misc-terms/AssignmentExpression.h cpp/parsers/templates/expressions/misc-terms/TupleExpression.h cpp/parsers/templates/expressions/misc-terms/MatrixExpression.h)
GenerateLexer(CommonLexer)
#GenerateParser(StatementParser)
GenerateParser(GuavaParser)
add_dependencies(GuavaParser CommonLexer)
#add_dependencies(StatementParser CommonLexer)

target_sources(guava PRIVATE ${guava_SRC})

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  target_compile_options(guava PRIVATE "/MT$<$<CONFIG:Debug>:d>")
endif()

target_link_libraries(guava antlr4_static)

install(TARGETS guava
        DESTINATION "share" 
        COMPONENT dev 
        )
