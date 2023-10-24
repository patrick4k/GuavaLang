# -*- mode:cmake -*-
include(GenerateParser.cmake)
add_executable(guava cpp/main.cpp)
set(guava_SRC cpp/parsers/GuavaScriptVisitor.cpp cpp/parsers/GuavaScriptVisitor.h cpp/parsers/parser-common.h cpp/guava-common.h cpp/guava-types.h cpp/guava-statics.h cpp/util/util-common.h cpp/util/string-utility.cpp cpp/util/string-utility.h cpp/guavabytes/IGuavaByteInstruction.h cpp/guavabytes/GuavaByteCode.cpp cpp/guavabytes/GuavaByteCode.h cpp/parsers/generated-common.h cpp/parsers/GuavaPredicateParser.cpp cpp/parsers/GuavaPredicateParser.h cpp/error/error-common.h cpp/parsers/ast/declaration/Function.h cpp/parsers/ast/declaration/IDeclaration.h cpp/parsers/ast/statement/IStatement.h cpp/parsers/ast/parameters/Parameter.h cpp/parsers/ast/Script.h cpp/parsers/ast/expressions/identifiers/IIdentifier.h cpp/parsers/ast/expressions/identifiers/SimpleIdentifier.h cpp/parsers/ast/expressions/identifiers/DefaultIdentifier.h cpp/parsers/ast/ast-common.h cpp/parsers/ast/expressions/identifiers/TupleIdentifier.h cpp/parsers/ast/expressions/identifiers/NestedIdentifier.h cpp/parsers/ast/expressions/identifiers/RuntimeTemplatedIdentifier.h cpp/parsers/ast/expressions/IExpression.h cpp/parsers/ast/expressions/identifiers/TemplatedIdentifier.h cpp/parsers/ast/assignment/Reassignment.h cpp/parsers/ast/assignment/IAssignment.h cpp/parsers/ast/assignment/InlineFunctionAssingment.h cpp/parsers/ast/assignment/DeclarativeAssignment.h cpp/parsers/ast/matrix/TTuple.h cpp/parsers/ast/matrix/TMatrix.h cpp/parsers/ast/matrix/ExpressionTupleAndMatrix.h cpp/parsers/ast/matrix/StatementTupleAndMatrix.h cpp/parsers/ast/special-assignment/ISpecialAssignment.h cpp/parsers/ast/special-assignment/MultiAssignment.h cpp/parsers/ast/expressions/lambda/Lambda.h cpp/parsers/ast/expressions/operations/IOperation.h cpp/parsers/ast/expressions/operations/DotOperation.h cpp/parsers/ast/expressions/operations/IndexOperation.h cpp/parsers/ast/expressions/operations/BinaryOperation.h cpp/parsers/ast/expressions/misc-terms/IndexKeyword.h cpp/parsers/ast/expressions/misc-terms/FunctionCallExpression.h cpp/parsers/ast/expressions/misc-terms/RangeExpression.h cpp/parsers/ast/expressions/misc-terms/LiteralExpression.h cpp/parsers/ast/expressions/operations/UnaryOperation.h cpp/parsers/ast/expressions/misc-terms/AssignmentExpression.h cpp/parsers/ast/expressions/misc-terms/TupleExpression.h cpp/parsers/ast/expressions/misc-terms/MatrixExpression.h cpp/util/vec-util.h cpp/parsers/ast/sentence/ISentence.h cpp/parsers/ast/sentence/CompoundSentence.h cpp/parsers/ast/statement/BodyStatementFollowUp.h cpp/parsers/ast/statement/BodyStatement.h cpp/parsers/ast/statement/ScopeStatement.h cpp/parsers/ast/statement/KeywordStatement.h cpp/parsers/ast/expressions/expression-export.h cpp/parsers/ast/assignment/assignment-export.h cpp/parsers/ast/declaration/declaration-export.h cpp/parsers/ast/matrix/matrix-export.h cpp/parsers/ast/parameters/parameter-export.h cpp/parsers/ast/sentence/sentence-export.h cpp/parsers/ast/special-assignment/special-assignment-export.h cpp/parsers/ast/statement/statement-export.h cpp/generated-include.h cpp/parsers/ast/GuavaAny.h cpp/parsers/ast/IAstNode.h cpp/parsers/parser-util.h cpp/parsers/ast/parameters/Parameters.h cpp/parsers/ast/expressions/misc-terms/TypeInstantiation.h cpp/util/dynamic-library-loader/IDynamicLinker.h cpp/util/dynamic-library-loader/dynamic-linker-export.h cpp/util/dynamic-library-loader/Library.h cpp/types/IOperatorProvider.h cpp/types/IPropertyProvider.h cpp/types/IGuavaType.h cpp/types/BaseOperatorProvider.h cpp/types/IDataProvider.h cpp/types/ByteDataProvider.h cpp/types/TemplateDataProvider.h cpp/types/Instance.h cpp/types/Type.h cpp/types/ITypeMember.h cpp/util/dynamic-library-loader/MacDynamicLinker.h cpp/types/TemplateOperatorProvider.h cpp/types/BatchOperatorProvider.h)

if(WIN32)
    list(APPEND guava_SRC cpp/util/dynamic-library-loader/WindowsDynamicLinker.h)
endif()

if(__APPLE__)
    list(APPEND guava_SRC cpp/util/dynamic-library-loader/MacDynamicLinker.h)
endif()

#[[ Generate Source List --------------------------------------------------------------------------------------- ]]
include_directories(
        ${PROJECT_SOURCE_DIR}/antlr4cpp-runtime/src
        ${PROJECT_SOURCE_DIR}/antlr4cpp-runtime/src/misc
        ${PROJECT_SOURCE_DIR}/antlr4cpp-runtime/src/atn
        ${PROJECT_SOURCE_DIR}/antlr4cpp-runtime/src/dfa
        ${PROJECT_SOURCE_DIR}/antlr4cpp-runtime/src/tree
        ${PROJECT_SOURCE_DIR}/antlr4cpp-runtime/src/support
        ${PROJECT_SOURCE_DIR}/guava/generated
)

#[[ Set Compiler Flags ----------------------------------------------------------------------------------------- ]]
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

#[[ Add Generated Files ------------------------------------------------------------------------------------------ ]]
GenerateLexer(CommonLexer)
GenerateParser(GuavaParser)
add_dependencies(GuavaParser CommonLexer)

#[[ Add Source Files + Link -------------------------------------------------------------------------------------- ]]
target_sources(guava PRIVATE ${guava_SRC})

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  target_compile_options(guava PRIVATE "/MT$<$<CONFIG:Debug>:d>")
endif()

target_link_libraries(guava antlr4_static)

install(TARGETS guava
        DESTINATION "share"
        COMPONENT dev
        )

#[[ CTest Section ---------------------------------------------------------------------------------------------- ]]
include(CTest)
macro(NewExeTest test_name additional_src)
    add_executable(${test_name} ${guava_SRC} ${additional_src})
    target_link_libraries(${test_name} antlr4_static)
    add_test(NAME ${test_name} COMMAND ${test_name})
endmacro()

set(dynamic_link_src test/dynamic_link_test/main.cpp test/dynamic_link_test/shared/overloaded_link_shared.h test/guava-test-common.h)
NewExeTest(dynamic_link_test ${dynamic_link_src})

set(double_type_test_src test/double_type_test/main.cpp test/guava-test-common.h)
NewExeTest(double_type_test ${double_type_test_src})
