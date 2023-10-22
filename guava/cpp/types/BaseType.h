//
// Created by Patrick on 10/22/2023.
//

#ifndef GUAVA_BASETYPE_H
#define GUAVA_BASETYPE_H

#include "IGuavaType.h"

namespace guavalang::types {
    class BaseType : public IGuavaType {
    public:
        Optional<FromStringFunction> from_string() override {
            return NullOpt;
        }

        Optional<RangeOperationFunction> range_operation(IGuavaType *start, IGuavaType *end, Optional<IGuavaType *> iteration) override {
            return NullOpt;
        }

        Optional<UnaryFunction> unary_op_plusmin(IGuavaType *rhs) override {
            return NullOpt;
        }

        Optional<UnaryFunction> unary_op_min(IGuavaType *rhs) override {
            return NullOpt;
        }

        Optional<UnaryFunction> unary_op_not(IGuavaType *rhs) override {
            return NullOpt;
        }

        Optional<UnaryFunction> unary_op_plusplus(IGuavaType *lhs) override {
            return NullOpt;
        }

        Optional<UnaryFunction> unary_op_minmin(IGuavaType *lhs) override {
            return NullOpt;
        }

        Optional<UnaryFunction> unary_op_question(IGuavaType *lhs) override {
            return NullOpt;
        }

        Optional<BinaryFunction> unary_op_bracket(IGuavaType *lhs, IGuavaType *rhs) override {
            return NullOpt;
        }

        Optional<BinaryFunction> unary_op_pow(IGuavaType *lhs, IGuavaType *rhs) override {
            return NullOpt;
        }

        Optional<BinaryFunction> unary_op_powpow(IGuavaType *lhs, IGuavaType *rhs) override {
            return NullOpt;
        }

        Optional<BinaryFunction> unary_op_mult(IGuavaType *lhs, IGuavaType *rhs) override {
            return NullOpt;
        }

        Optional<BinaryFunction> unary_op_multmult(IGuavaType *lhs, IGuavaType *rhs) override {
            return NullOpt;
        }

        Optional<BinaryFunction> unary_op_div(IGuavaType *lhs, IGuavaType *rhs) override {
            return NullOpt;
        }

        Optional<BinaryFunction> unary_op_divdiv(IGuavaType *lhs, IGuavaType *rhs) override {
            return NullOpt;
        }

        Optional<BinaryFunction> unary_op_mod(IGuavaType *lhs, IGuavaType *rhs) override {
            return NullOpt;
        }

        Optional<BinaryFunction> unary_op_modmod(IGuavaType *lhs, IGuavaType *rhs) override {
            return NullOpt;
        }

        Optional<BinaryFunction> unary_op_plus(IGuavaType *lhs, IGuavaType *rhs) override {
            return NullOpt;
        }

        Optional<BinaryFunction> unary_op_min(IGuavaType *lhs, IGuavaType *rhs) override {
            return NullOpt;
        }

        Optional<BinaryFunction> unary_op_or(IGuavaType *lhs, IGuavaType *rhs) override {
            return NullOpt;
        }

        Optional<BinaryFunction> unary_op_oror(IGuavaType *lhs, IGuavaType *rhs) override {
            return NullOpt;
        }

        Optional<BinaryFunction> unary_op_and(IGuavaType *lhs, IGuavaType *rhs) override {
            return NullOpt;
        }

        Optional<BinaryFunction> unary_op_andand(IGuavaType *lhs, IGuavaType *rhs) override {
            return NullOpt;
        }

        Optional<BinaryFunction> unary_op_eqeq(IGuavaType *lhs, IGuavaType *rhs) override {
            return NullOpt;
        }

        Optional<BinaryFunction> unary_op_neq(IGuavaType *lhs, IGuavaType *rhs) override {
            return NullOpt;
        }

        Optional<BinaryFunction> unary_op_lt(IGuavaType *lhs, IGuavaType *rhs) override {
            return NullOpt;
        }

        Optional<BinaryFunction> unary_op_gt(IGuavaType *lhs, IGuavaType *rhs) override {
            return NullOpt;
        }

        Optional<BinaryFunction> unary_op_lteq(IGuavaType *lhs, IGuavaType *rhs) override {
            return NullOpt;
        }

        Optional<BinaryFunction> unary_op_gteq(IGuavaType *lhs, IGuavaType *rhs) override {
            return NullOpt;
        }

        Optional<BinaryFunction> unary_op_streamin(IGuavaType *lhs, IGuavaType *rhs) override {
            return NullOpt;
        }

        Optional<BinaryFunction> unary_op_streamout(IGuavaType *lhs, IGuavaType *rhs) override {
            return NullOpt;
        }
    };
}

#endif //GUAVA_BASETYPE_H
