//
// Created by Patrick on 10/23/2023.
//

#ifndef GUAVA_BATCHOPERATORPROVIDER_H
#define GUAVA_BATCHOPERATORPROVIDER_H

#include "../guava-types.h"
#include "IOperatorProvider.h"
#include "BaseOperatorProvider.h"

#define RedefineBinaryOp(function_name) \
Optional<BinaryFunction> function_name(IGuavaType *lhs, IGuavaType *rhs) final {\
Optional<BinaryFunction> result = NullOpt;\
for (auto& provider : m_operatorProviders) {\
if (auto op = provider->function_name(lhs, rhs)) {\
if (result) {\
OVER_CONSTRAINT_ERROR("Ambiguous operator overload")\
}\
result = op;\
}\
}\
return result;\
}                                       \

#define RedefineUnaryOp(function_name) \
Optional<UnaryFunction> function_name(IGuavaType *var) final {\
Optional<UnaryFunction> result = NullOpt;\
for (auto& provider : m_operatorProviders) {\
if (auto op = provider->function_name(var)) {\
if (result) {\
OVER_CONSTRAINT_ERROR("Ambiguous operator overload")\
}\
result = op;\
}\
}\
return result;\
}                                      


namespace guavalang::types {

    template<typename ...Args>
    class BatchOperatorProvider : protected BaseOperatorProvider {
    public:
        BatchOperatorProvider(): m_operatorProviders(PVec < IOperatorProvider > {std::make_shared<Args>()...})
        {
        }

    private:
        Optional<FromStringFunction> from_string() override {
            Optional<FromStringFunction> result = NullOpt;
            for (auto& provider : m_operatorProviders) {
                if (auto op = provider->from_string()) {
                    if (result) {
                        OVER_CONSTRAINT_ERROR("Ambiguous operator overload")
                    }
                    result = op;
                }
            }
        }

        Optional<RangeOperationFunction>
        range_operation(IGuavaType *start, IGuavaType *end, Optional<IGuavaType *> iteration) override {
            Optional<RangeOperationFunction> result = NullOpt;
            for (auto& provider : m_operatorProviders) {
                if (auto op = provider->range_operation(start, end, iteration)) {
                    if (result) {
                        OVER_CONSTRAINT_ERROR("Ambiguous operator overload")
                    }
                    result = op;
                }
            }
        }

        RedefineUnaryOp(unary_op_plusmin)

        RedefineUnaryOp(unary_op_min)

        RedefineUnaryOp(unary_op_not)

        RedefineUnaryOp(unary_op_plusplus)

        RedefineUnaryOp(unary_op_minmin)

        RedefineUnaryOp(unary_op_question)

        RedefineBinaryOp(binary_op_bracket)

        RedefineBinaryOp(binary_op_pow)

        RedefineBinaryOp(binary_op_powpow)

        RedefineBinaryOp(binary_op_mult)

        RedefineBinaryOp(binary_op_multmult)

        RedefineBinaryOp(binary_op_div)

        RedefineBinaryOp(binary_op_divdiv)

        RedefineBinaryOp(binary_op_mod)

        RedefineBinaryOp(binary_op_modmod)

        RedefineBinaryOp(binary_op_plus)

        RedefineBinaryOp(binary_op_min)

        RedefineBinaryOp(binary_op_or)

        RedefineBinaryOp(binary_op_oror)

        RedefineBinaryOp(binary_op_and)

        RedefineBinaryOp(binary_op_andand)

        RedefineBinaryOp(binary_op_eqeq)

        RedefineBinaryOp(binary_op_neq)

        RedefineBinaryOp(binary_op_lt)

        RedefineBinaryOp(binary_op_gt)

        RedefineBinaryOp(binary_op_lteq)

        RedefineBinaryOp(binary_op_gteq)

        RedefineBinaryOp(binary_op_streamin)

        RedefineBinaryOp(binary_op_streamout)

    private:
        PVec<IOperatorProvider> m_operatorProviders{};
    };
}

#undef RedefineBinaryOp
#undef RedefineUnaryOp

#endif //GUAVA_BATCHOPERATORPROVIDER_H
