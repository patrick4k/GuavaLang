//
// Created by Patrick on 9/12/2023.
//

#include <iostream>
#include "Arrays.h"
#include "GuavaParserBaseVisitor.h"

int main(int argc, char** argv) {
    GParser::GuavaParserBaseVisitor parser{};
    std::cout << antlrcpp::Arrays::listToString({"Hello", "World"}, "!");
    return 0;
}
