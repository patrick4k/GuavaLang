//
// Created by Patrick on 9/12/2023.
//

#include "parsers/parser-common.h"
#include "guava-common.h"
#include "parsers/templates/Script.h"

using namespace guavalang;
using namespace guavaparser;
using namespace antlr4;

int main(int argc, char** argv) {
    /* Print Argument of Program */
    for (int i = 0; i < argc; ++i)
        DEBUGOUT << "Arg " << i << " = " << argv[i] << ENDL;

    /* Read File and Create Token Stream */
    ANTLRFileStream input{};
    input.loadFromFile(argv[1]);
    CommonLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    tokens.fill();

    /* Create and Visit Script Tree */
    GuavaPredicateParser parser(&tokens);
    auto tree = parser.script();
    GuavaScriptVisitor visitor{};
    const auto script = PCast<Script>(visitor.visitScript(tree));
    return 0;
}
