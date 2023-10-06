//
// Created by Patrick on 10/6/2023.
//

#ifndef GUAVA_GUAVAPREDICATEPARSER_H
#define GUAVA_GUAVAPREDICATEPARSER_H


#include "../generated/GuavaParser.h"

namespace guavaparser {
    class GuavaPredicateParser: public GuavaParser {
    public:
        explicit GuavaPredicateParser(antlr4::TokenStream *input) : GuavaParser(input) {

        }

        template<typename TargetParent>
        TargetParent getFirstParent(antlr4::ParserRuleContext* ctx) {
            auto parent = ctx->parent;
            while (parent != nullptr) {
                if (auto target = dynamic_cast<TargetParent>(parent)) {
                    return target;
                }
                parent = parent->parent;
            }
            return nullptr;
        }

        template<typename TargetParent>
        TargetParent getFirstParent() {
            return getFirstParent<TargetParent>(this->_ctx);
        }

        bool isWithinIndexAccess() override;

    };

}

#endif //GUAVA_GUAVAPREDICATEPARSER_H
