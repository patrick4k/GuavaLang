//
// Created by Patrick on 9/12/2023.
//

#include <functional>
#include "parsers/parser-common.h"
#include "guava-common.h"
#include "parsers/templates/Script.h"
#include "util/dynamic-library-loader/dynamic-linker-export.h"

using namespace guavalang;
using namespace guavaparser;
using namespace antlr4;

int main(int argc, char** argv) {
    DEBUGOUT << "Starting Guava" << ENDL;
    /* Print Argument of Program */
    for (int i = 0; i < argc; ++i)
        DEBUGOUT << "Arg " << i << " = " << argv[i] << ENDL;

    /* Read File and Create Token Stream */
    DEBUGOUT << "Starting to read file" << ENDL;
    ANTLRFileStream input{};
    input.loadFromFile(argv[1]);
    CommonLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    tokens.fill();
    DEBUGOUT << "File read successfully" << ENDL;

    /* Create and Visit Script Tree */
    DEBUGOUT << "Starting script parsing" << ENDL;
    GuavaPredicateParser parser(&tokens);
    auto tree = parser.script();
    GuavaScriptVisitor visitor{};
    if (parser.getNumberOfSyntaxErrors() > 0) {
        DEBUGOUT << "Syntax Errors: " << parser.getNumberOfSyntaxErrors() << ENDL;
        DEBUGOUT << "Exiting..." << ENDL;
        return 1;
    }
    DEBUGOUT << "Script parsed successfully" << ENDL;

    /* Assemble AST */
    DEBUGOUT << "Starting to assemble AST" << ENDL;
    const auto script = std::any_cast<AnyTemplate>(visitor.visitScript(tree)).as<Script>();
    DEBUGOUT << "Assembled AST successfully" << ENDL;
    return 0;
}
