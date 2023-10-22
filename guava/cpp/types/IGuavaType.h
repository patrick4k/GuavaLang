//
// Created by Patrick on 10/22/2023.
//

#ifndef GUAVA_IGUAVATYPE_H
#define GUAVA_IGUAVATYPE_H

#include "../guava-common.h"
#include "IVariable.h"
#include "IType.h"
#include <functional>

namespace guavalang::types {
    class IGuavaType: public IType {
    public:
        /* Misc */
        using FromStringFunction = std::function<IVariable*(String)>;
        virtual Optional<FromStringFunction> from_string() = 0;

        using RangeOperationFunction = std::function<IVariable*(IVariable*, IVariable*, Optional<IVariable*>)>;
        virtual Optional<RangeOperationFunction> range_operation(IGuavaType* start, IGuavaType* end, Optional<IGuavaType*> iteration) = 0;

        /* Unary */
        using UnaryFunction = std::function<IVariable*(IVariable*)>;

        // -rhs
        virtual Optional<UnaryFunction> unary_op_min(IGuavaType* rhs) = 0;

        // !rhs
        virtual Optional<UnaryFunction> unary_op_not(IGuavaType* rhs) = 0;

        // lhs++
        virtual Optional<UnaryFunction> unary_op_plusplus(IGuavaType* lhs) = 0;

        // lhs--
        virtual Optional<UnaryFunction> unary_op_minmin(IGuavaType* lhs) = 0;

        // lhs?
        virtual Optional<UnaryFunction> unary_op_question(IGuavaType* lhs) = 0;

        /* Binary */
        using BinaryFunction = std::function<IVariable*(IVariable*, IVariable*)>;

        // lhs[rhs]
        virtual Optional<BinaryFunction> unary_op_bracket(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs ^ rhs
        virtual Optional<BinaryFunction> unary_op_pow(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs ^^ rhs
        virtual Optional<BinaryFunction> unary_op_powpow(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs * rhs
        virtual Optional<BinaryFunction> unary_op_mult(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs ** rhs
        virtual Optional<BinaryFunction> unary_op_multmult(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs / rhs
        virtual Optional<BinaryFunction> unary_op_div(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs // rhs
        virtual Optional<BinaryFunction> unary_op_divdiv(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs % rhs
        virtual Optional<BinaryFunction> unary_op_mod(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs %% rhs
        virtual Optional<BinaryFunction> unary_op_modmod(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs + rhs
        virtual Optional<BinaryFunction> unary_op_plus(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs - rhs
        virtual Optional<BinaryFunction> unary_op_min(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs | rhs
        virtual Optional<BinaryFunction> unary_op_or(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs || rhs
        virtual Optional<BinaryFunction> unary_op_oror(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs & rhs
        virtual Optional<BinaryFunction> unary_op_and(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs && rhs
        virtual Optional<BinaryFunction> unary_op_andand(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs == rhs
        virtual Optional<BinaryFunction> unary_op_eqeq(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs != rhs
        virtual Optional<BinaryFunction> unary_op_neq(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs < rhs
        virtual Optional<BinaryFunction> unary_op_lt(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs > rhs
        virtual Optional<BinaryFunction> unary_op_gt(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs <= rhs
        virtual Optional<BinaryFunction> unary_op_lteq(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs >= rhs
        virtual Optional<BinaryFunction> unary_op_gteq(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs << rhs
        virtual Optional<BinaryFunction> unary_op_streamin(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs >> rhs
        virtual Optional<BinaryFunction> unary_op_streamout(IGuavaType* lhs, IGuavaType* rhs) = 0;

    };
}

#endif //GUAVA_IGUAVATYPE_H
