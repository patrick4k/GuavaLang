# -*- mode:cmake -*-
include(GenerateParser.cmake)
add_executable(guava cpp/main.cpp)
set(guava_SRC cpp/parsers/GuavaScriptVisitor.cpp cpp/parsers/GuavaScriptVisitor.h cpp/parsers/parser-common.h cpp/guava-common.h cpp/guava-types.h cpp/guava-statics.h cpp/util/util-common.h cpp/util/string-utility.cpp cpp/util/string-utility.h cpp/guavabytes/IGuavaByteInstruction.h cpp/guavabytes/GuavaByteCode.cpp cpp/guavabytes/GuavaByteCode.h cpp/parsers/generated-common.h cpp/parsers/GuavaPredicateParser.cpp cpp/parsers/GuavaPredicateParser.h cpp/error/error-common.h cpp/parsers/templates/declaration/Function.h cpp/parsers/templates/declaration/IDeclaration.h cpp/parsers/templates/statement/IStatement.h cpp/parsers/templates/parameters/Parameter.h cpp/parsers/templates/Script.h cpp/parsers/templates/expressions/identifiers/IIdentifier.h cpp/parsers/templates/expressions/identifiers/SimpleIdentifier.h cpp/parsers/templates/expressions/identifiers/DefaultIdentifier.h cpp/parsers/templates/templates-common.h cpp/parsers/templates/expressions/identifiers/TupleIdentifier.h cpp/parsers/templates/expressions/identifiers/NestedIdentifier.h cpp/parsers/templates/expressions/identifiers/RuntimeTemplatedIdentifier.h cpp/parsers/templates/expressions/IExpression.h cpp/parsers/templates/expressions/identifiers/TemplatedIdentifier.h cpp/parsers/templates/assignment/Reassignment.h cpp/parsers/templates/assignment/IAssignment.h cpp/parsers/templates/assignment/InlineFunctionAssingment.h cpp/parsers/templates/assignment/DeclarativeAssignment.h cpp/parsers/templates/matrix/TTuple.h cpp/parsers/templates/matrix/TMatrix.h cpp/parsers/templates/matrix/ExpressionTupleAndMatrix.h cpp/parsers/templates/matrix/StatementTupleAndMatrix.h cpp/parsers/templates/special-assignment/ISpecialAssignment.h cpp/parsers/templates/special-assignment/MultiAssignment.h cpp/parsers/templates/expressions/lambda/Lambda.h cpp/parsers/templates/expressions/operations/IOperation.h cpp/parsers/templates/expressions/operations/DotOperation.h cpp/parsers/templates/expressions/operations/IndexOperation.h cpp/parsers/templates/expressions/operations/BinaryOperation.h cpp/parsers/templates/expressions/misc-terms/IndexKeyword.h cpp/parsers/templates/expressions/misc-terms/FunctionCallExpression.h cpp/parsers/templates/expressions/misc-terms/RangeExpression.h cpp/parsers/templates/expressions/misc-terms/LiteralExpression.h cpp/parsers/templates/expressions/operations/UnaryOperation.h cpp/parsers/templates/expressions/misc-terms/AssignmentExpression.h cpp/parsers/templates/expressions/misc-terms/TupleExpression.h cpp/parsers/templates/expressions/misc-terms/MatrixExpression.h cpp/util/vec-util.h cpp/parsers/templates/sentence/ISentence.h cpp/parsers/templates/sentence/CompoundSentence.h cpp/parsers/templates/statement/BodyStatementFollowUp.h cpp/parsers/templates/statement/BodyStatement.h cpp/parsers/templates/statement/ScopeStatement.h cpp/parsers/templates/statement/KeywordStatement.h cpp/parsers/templates/expressions/expression-export.h cpp/parsers/templates/assignment/assignment-export.h cpp/parsers/templates/declaration/declaration-export.h cpp/parsers/templates/matrix/matrix-export.h cpp/parsers/templates/parameters/parameter-export.h cpp/parsers/templates/sentence/sentence-export.h cpp/parsers/templates/special-assignment/special-assignment-export.h cpp/parsers/templates/statement/statement-export.h cpp/generated-include.h cpp/parsers/templates/IAstTemplate.h cpp/parsers/templates/AnyTemplate.h cpp/parsers/parser-util.h cpp/parsers/templates/parameters/Parameters.h cpp/parsers/templates/expressions/misc-terms/TypeInstantiation.h cpp/util/dynamic-library-loader/IDynamicLinker.h cpp/util/dynamic-library-loader/dynamic-linker-export.h cpp/util/dynamic-library-loader/Library.h cpp/types/IOperatorProvider.h cpp/types/IPropertyProvider.h cpp/types/IType.h cpp/types/BaseOperatorProvider.h cpp/types/IDataProvider.h cpp/types/ByteDataProvider.h cpp/types/TemplateDataProvider.h cpp/types/Instance.h cpp/types/Type.h cpp/types/ITypeMember.h)
if(WIN32)
    list(APPEND guava_SRC cpp/util/dynamic-library-loader/WindowsDynamicLinker.cpp cpp/util/dynamic-library-loader/WindowsDynamicLinker.h)
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
