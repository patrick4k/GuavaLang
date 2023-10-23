//
// Created by Patrick Kennedy on 10/23/23.
//

#ifndef GUAVA_TEMPLATEOPERATORPROVIDER_H
#define GUAVA_TEMPLATEOPERATORPROVIDER_H

#include "IGuavaType.h"
#include "IOperatorProvider.h"
#include "Instance.h"

#define CastFunc(function_name) \
virtual Optional<TemplateBinaryFunction> function_name() {\
return NullOpt;\
}\
\
Optional<BinaryFunction> function_name(IGuavaType *lhs, IGuavaType *rhs) override final {\
        if (typeid(*lhs) == typeid(LHS) && typeid(*rhs) == typeid(RHS)) {\
            if (auto funcOpt = function_name()) {         \
                auto func = *funcOpt;               \
                return [func](Instance lhs, Instance rhs) {\
                    auto lhs_data = dynamic_cast<LHS*>(lhs.getDataProvider().get());\
                    auto rhs_data = dynamic_cast<RHS*>(rhs.getDataProvider().get());\
                    return func(lhs_data, rhs_data);\
                };\
            }\
        }\
        return NullOpt;\
}

namespace guavalang::types {

    template<typename LHS, typename RHS>
    class TemplateOperatorProvider: public BaseOperatorProvider {
    protected:
        using TemplateBinaryFunction = std::function<Instance(LHS*, RHS*)>;

    public:
        virtual Optional<TemplateBinaryFunction> binary_op_bracket() {
            return NullOpt;
        }

        Optional<BinaryFunction> binary_op_bracket(IGuavaType *lhs, IGuavaType *rhs) override final {
            if (auto lhs_data_opt = lhs->GetOperatorProvider()) {
                if (auto lhs_data = dynamic_cast<LHS*>(*lhs_data_opt)) {
                    if (auto rhs_data_opt = rhs->GetOperatorProvider()) {
                        if (auto rhs_data = dynamic_cast<RHS*>(*rhs_data_opt)) {
                            if (auto funcOpt = binary_op_bracket()) {
                                auto func = *funcOpt;
                                return [func](Instance lhs, Instance rhs) {
                                    auto lhs_data = dynamic_cast<LHS*>(rhs.getDataProvider().get());
                                    auto rhs_data = dynamic_cast<RHS*>(rhs.getDataProvider().get());
                                    return func(lhs_data, rhs_data);
                                };
                            }
                        }
                    }
                }
            }

            return NullOpt;
        }

        CastFunc(binary_op_pow)

        CastFunc(binary_op_powpow)

        CastFunc(binary_op_mult)

        CastFunc(binary_op_multmult)

        CastFunc(binary_op_div)

        CastFunc(binary_op_divdiv)

        CastFunc(binary_op_mod)

        CastFunc(binary_op_modmod)

        CastFunc(binary_op_plus)

        CastFunc(binary_op_min)

        CastFunc(binary_op_or)

        CastFunc(binary_op_oror)

        CastFunc(binary_op_and)

        CastFunc(binary_op_andand)

        CastFunc(binary_op_eqeq)

        CastFunc(binary_op_neq)

        CastFunc(binary_op_lt)

        CastFunc(binary_op_gt)

        CastFunc(binary_op_lteq)

        CastFunc(binary_op_gteq)

        CastFunc(binary_op_streamin)

        CastFunc(binary_op_streamout)
    };
}

#undef CastFunc

#endif //GUAVA_TEMPLATEOPERATORPROVIDER_H
