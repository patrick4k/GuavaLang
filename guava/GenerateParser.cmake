#[[
function(GenerateParser)
Will search for ${ParserName}Lexer.g4 and ${ParserName}Parser.g4 in /guava/grammar directory.
If found will generate antlr lexer, parser and visitor files in /guava/generated directory.
]]

function(GenerateParser ParserName)
    set(guava-GENERATED_SRC
            ${PROJECT_SOURCE_DIR}/guava/generated/${ParserName}.cpp
            ${PROJECT_SOURCE_DIR}/guava/generated/${ParserName}BaseListener.cpp
            ${PROJECT_SOURCE_DIR}/guava/generated/${ParserName}BaseVisitor.cpp
            ${PROJECT_SOURCE_DIR}/guava/generated/${ParserName}Listener.cpp
            ${PROJECT_SOURCE_DIR}/guava/generated/${ParserName}Visitor.cpp
            )
    GenerateAntlr(${ParserName})
endfunction(GenerateParser)


function(GenerateLexer LexerName)
    set(guava-GENERATED_SRC
            ${PROJECT_SOURCE_DIR}/guava/generated/${LexerName}.cpp
            )
    GenerateAntlr(${LexerName})
endfunction(GenerateLexer)


function(GenerateAntlr ParserName)
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
    target_sources(guava PRIVATE ${guava-GENERATED_SRC})

endfunction(GenerateAntlr)
