#[[
macro(GenerateParser)
Will search for ${ParserName}Lexer.g4 and ${ParserName}Parser.g4 in /guava/grammar directory.
If found will generate antlr lexer, parser and visitor files in /guava/generated directory.

executable "guava" is required to exist before macro call
list "guava_SRC" is required to exist before macro call
]]

macro(GenerateParser ParserName)
    set(PARENT_SCOPE)
    set(guava-GENERATED_SRC
            ${PROJECT_SOURCE_DIR}/guava/generated/${ParserName}.cpp
            ${PROJECT_SOURCE_DIR}/guava/generated/${ParserName}BaseListener.cpp
            ${PROJECT_SOURCE_DIR}/guava/generated/${ParserName}BaseVisitor.cpp
            ${PROJECT_SOURCE_DIR}/guava/generated/${ParserName}Listener.cpp
            ${PROJECT_SOURCE_DIR}/guava/generated/${ParserName}Visitor.cpp
            )
    GenerateAntlr(${ParserName})
endmacro(GenerateParser)


macro(GenerateLexer LexerName)
    set(PARENT_SCOPE)
    set(guava-GENERATED_SRC
            ${PROJECT_SOURCE_DIR}/guava/generated/${LexerName}.cpp
            )
    GenerateAntlr(${LexerName})
endmacro(GenerateLexer)


macro(GenerateAntlr ParserName)
    set(PARENT_SCOPE)
    foreach(src_file ${guava-GENERATED_SRC})
        set_source_files_properties(
                ${src_file}
                PROPERTIES
                GENERATED TRUE
        )
    endforeach(src_file ${guava-GENERATED_SRC})

    add_custom_target(${ParserName} DEPENDS ${guava-GENERATED_SRC})
    add_custom_command(OUTPUT ${guava-GENERATED_SRC}
            COMMAND
            ${CMAKE_COMMAND} -E make_directory ${PROJECT_SOURCE_DIR}/guava/generated/
            COMMAND
            "${Java_JAVA_EXECUTABLE}" -jar ${ANTLR_JAR_LOCATION} -Werror -Dlanguage=Cpp -listener -visitor -o ${PROJECT_SOURCE_DIR}/guava/generated/ -package guavaparser ${PROJECT_SOURCE_DIR}/guava/grammar/${ParserName}.g4
            WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
            DEPENDS ${PROJECT_SOURCE_DIR}/guava/grammar/${ParserName}.g4
            )

    foreach(src_file ${guava-GENERATED_SRC})
        set_source_files_properties(
                ${src_file}
                PROPERTIES
                COMPILE_FLAGS "${COMPILE_FLAGS} ${flags_1}"
        )
    endforeach(src_file ${guava-GENERATED_SRC})

    add_dependencies(guava ${ParserName})
    list(APPEND guava_SRC ${guava-GENERATED_SRC})

endmacro(GenerateAntlr)
