//
// Created by Patrick on 9/12/2023.
//

#include "guava-common.h"

using namespace guavalang;
using namespace guavaparser;
using namespace antlr4;

int main(int argc, char** argv) {
    /* Print Argument of Program */
    COUT << "Args";
    for (int i = 0; i < argc; ++i)
        COUT << "\t" << i << ": " << argv[i] << ENDL;

    /* Read File and Create Token Stream */
    auto input = ANTLRFileStream();
    input.loadFromFile(argv[1]);
    GuavaLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    tokens.fill();

    /* Create and Visit Script Tree */
    GuavaParser parser(&tokens);
    auto tree = parser.script();
    auto visitor = std::make_shared<GuavaFileVisitor>();
    Any reVal = visitor->visitScript(tree);
    COUT << Cast<String>(reVal) << ENDL;
    return 0;
}
