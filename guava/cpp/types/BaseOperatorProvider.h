//
// Created by Patrick on 10/22/2023.
//

#ifndef GUAVA_BASEOPERATORPROVIDER_H
#define GUAVA_BASEOPERATORPROVIDER_H

#include "IOperatorProvider.h"

namespace guavalang::types {
    class BaseOperatorProvider : public IOperatorProvider {
    public:
        Optional<FromStringFunction> from_string() override {
            return NullOpt;
        }

        Optional<RangeOperationFunction> range_operation(IType *start, IType *end, Optional<IType *> iteration) override {
            return NullOpt;
        }

        Optional<UnaryFunction> unary_op_plusmin(IType */*rhs*/) override {
            return NullOpt;
        }

        Optional<UnaryFunction> unary_op_min(IType */*rhs*/) override {
            return NullOpt;
        }

        Optional<UnaryFunction> unary_op_not(IType */*rhs*/) override {
            return NullOpt;
        }

        Optional<UnaryFunction> unary_op_plusplus(IType */*lhs*/) override {
            return NullOpt;
        }

        Optional<UnaryFunction> unary_op_minmin(IType */*lhs*/) override {
            return NullOpt;
        }

        Optional<UnaryFunction> unary_op_question(IType */*lhs*/) override {
            return NullOpt;
        }

        Optional<BinaryFunction> binary_op_bracket(IType */*lhs*/, IType */*rhs*/) override {
            return NullOpt;
        }

        Optional<BinaryFunction> binary_op_pow(IType */*lhs*/, IType */*rhs*/) override {
            return NullOpt;
        }

        Optional<BinaryFunction> binary_op_powpow(IType */*lhs*/, IType */*rhs*/) override {
            return NullOpt;
        }

        Optional<BinaryFunction> binary_op_mult(IType */*lhs*/, IType */*rhs*/) override {
            return NullOpt;
        }

        Optional<BinaryFunction> binary_op_multmult(IType */*lhs*/, IType */*rhs*/) override {
            return NullOpt;
        }

        Optional<BinaryFunction> binary_op_div(IType */*lhs*/, IType */*rhs*/) override {
            return NullOpt;
        }

        Optional<BinaryFunction> binary_op_divdiv(IType */*lhs*/, IType */*rhs*/) override {
            return NullOpt;
        }

        Optional<BinaryFunction> binary_op_mod(IType */*lhs*/, IType */*rhs*/) override {
            return NullOpt;
        }

        Optional<BinaryFunction> binary_op_modmod(IType */*lhs*/, IType */*rhs*/) override {
            return NullOpt;
        }

        Optional<BinaryFunction> binary_op_plus(IType */*lhs*/, IType */*rhs*/) override {
            return NullOpt;
        }

        Optional<BinaryFunction> binary_op_min(IType */*lhs*/, IType */*rhs*/) override {
            return NullOpt;
        }

        Optional<BinaryFunction> binary_op_or(IType */*lhs*/, IType */*rhs*/) override {
            return NullOpt;
        }

        Optional<BinaryFunction> binary_op_oror(IType */*lhs*/, IType */*rhs*/) override {
            return NullOpt;
        }

        Optional<BinaryFunction> binary_op_and(IType */*lhs*/, IType */*rhs*/) override {
            return NullOpt;
        }

        Optional<BinaryFunction> binary_op_andand(IType */*lhs*/, IType */*rhs*/) override {
            return NullOpt;
        }

        Optional<BinaryFunction> binary_op_eqeq(IType */*lhs*/, IType */*rhs*/) override {
            return NullOpt;
        }

        Optional<BinaryFunction> binary_op_neq(IType */*lhs*/, IType */*rhs*/) override {
            return NullOpt;
        }

        Optional<BinaryFunction> binary_op_lt(IType */*lhs*/, IType */*rhs*/) override {
            return NullOpt;
        }

        Optional<BinaryFunction> binary_op_gt(IType */*lhs*/, IType */*rhs*/) override {
            return NullOpt;
        }

        Optional<BinaryFunction> binary_op_lteq(IType */*lhs*/, IType */*rhs*/) override {
            return NullOpt;
        }

        Optional<BinaryFunction> binary_op_gteq(IType */*lhs*/, IType */*rhs*/) override {
            return NullOpt;
        }

        Optional<BinaryFunction> binary_op_streamin(IType */*lhs*/, IType */*rhs*/) override {
            return NullOpt;
        }

        Optional<BinaryFunction> binary_op_streamout(IType */*lhs*/, IType */*rhs*/) override {
            return NullOpt;
        }
    };
}

#endif //GUAVA_BASEOPERATORPROVIDER_H
