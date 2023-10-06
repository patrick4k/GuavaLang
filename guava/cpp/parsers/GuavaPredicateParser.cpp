//
// Created by Patrick on 10/6/2023.
//

#include "GuavaPredicateParser.h"
#include "../error/error-common.h"

bool guavaparser::GuavaPredicateParser::isWithinIndexAccess() {
    if (!this->getFirstParent<IndexExpressionContext*>())
    {
        PARSE_ERROR("Predicate must be within an index access expression");
    }
    return true;
}
