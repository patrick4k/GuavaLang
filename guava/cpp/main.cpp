//
// Created by Patrick on 9/12/2023.
//

#include <iostream>
#include "Arrays.h"
#include "guava-common.h"

using namespace guavalang;
using namespace guavaparser;
using namespace antlr4;

int main(int argc, char** argv) {
    /* Print Argument of Program */
    std::cout << "Args" << std::endl;
    for (int i = 0; i < argc; ++i)
        std::cout << "\t" << i << ": " << argv[i] << '\n' << std::endl;

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
    std::cout << Cast<String>(reVal) << std::endl;
    return 0;
}
