//
// Created by Patrick on 10/22/2023.
//

#ifndef GUAVA_IOPERATORPROVIDER_H
#define GUAVA_IOPERATORPROVIDER_H

#include "../guava-common.h"
#include "IGuavaType.h"
#include "IPropertyProvider.h"
#include "Instance.h"

namespace guavalang::types {

    class Instance;

    class IOperatorProvider: public IPropertyProvider {
    public:
        /* Misc */
        using FromStringFunction = std::function<Instance(String)>;
        virtual Optional<FromStringFunction> from_string() = 0;

        using RangeOperationFunction = std::function<Instance(Instance, Instance, Optional<Instance>)>;
        virtual Optional<RangeOperationFunction> range_operation(IGuavaType* start, IGuavaType* end, Optional<IGuavaType*> iteration) = 0;

        /* Unary */
        using UnaryFunction = std::function<Instance(Instance)>;

        // +-rhs, -+rhs
        virtual Optional<UnaryFunction> unary_op_plusmin(IGuavaType* rhs) = 0;

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
        using BinaryFunction = std::function<Instance(Instance, Instance)>;

        // lhs[rhs]
        virtual Optional<BinaryFunction> binary_op_bracket(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs ^ rhs
        virtual Optional<BinaryFunction> binary_op_pow(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs ^^ rhs
        virtual Optional<BinaryFunction> binary_op_powpow(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs * rhs
        virtual Optional<BinaryFunction> binary_op_mult(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs ** rhs
        virtual Optional<BinaryFunction> binary_op_multmult(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs / rhs
        virtual Optional<BinaryFunction> binary_op_div(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs // rhs
        virtual Optional<BinaryFunction> binary_op_divdiv(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs % rhs
        virtual Optional<BinaryFunction> binary_op_mod(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs %% rhs
        virtual Optional<BinaryFunction> binary_op_modmod(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs + rhs
        virtual Optional<BinaryFunction> binary_op_plus(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs - rhs
        virtual Optional<BinaryFunction> binary_op_min(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs | rhs
        virtual Optional<BinaryFunction> binary_op_or(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs || rhs
        virtual Optional<BinaryFunction> binary_op_oror(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs & rhs
        virtual Optional<BinaryFunction> binary_op_and(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs && rhs
        virtual Optional<BinaryFunction> binary_op_andand(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs == rhs
        virtual Optional<BinaryFunction> binary_op_eqeq(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs != rhs
        virtual Optional<BinaryFunction> binary_op_neq(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs < rhs
        virtual Optional<BinaryFunction> binary_op_lt(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs > rhs
        virtual Optional<BinaryFunction> binary_op_gt(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs <= rhs
        virtual Optional<BinaryFunction> binary_op_lteq(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs >= rhs
        virtual Optional<BinaryFunction> binary_op_gteq(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs << rhs
        virtual Optional<BinaryFunction> binary_op_streamin(IGuavaType* lhs, IGuavaType* rhs) = 0;

        // lhs >> rhs
        virtual Optional<BinaryFunction> binary_op_streamout(IGuavaType* lhs, IGuavaType* rhs) = 0;

    private:
        using GuavaTypeUnaryFunction = std::function<Optional<UnaryFunction>(IOperatorProvider&, IGuavaType*)>;
        using GuavaTypeBinaryFunction = std::function<Optional<BinaryFunction>(IOperatorProvider&, IGuavaType*, IGuavaType*)>;

        Map<GuavaTypeUnaryFunction> m_unary_map {
                {"+-", &IOperatorProvider::unary_op_plusmin},
                {"-+", &IOperatorProvider::unary_op_plusmin},
                {"-", &IOperatorProvider::unary_op_min},
                {"!", &IOperatorProvider::unary_op_not},
                {"++", &IOperatorProvider::unary_op_plusplus},
                {"--", &IOperatorProvider::unary_op_minmin},
                {"?", &IOperatorProvider::unary_op_question}
        };

        Map<GuavaTypeBinaryFunction> m_binary_map {
                {"^", &IOperatorProvider::binary_op_pow},
                {"^^", &IOperatorProvider::binary_op_powpow},
                {"*", &IOperatorProvider::binary_op_mult},
                {"**", &IOperatorProvider::binary_op_multmult},
                {"/", &IOperatorProvider::binary_op_div},
                {"//", &IOperatorProvider::binary_op_divdiv},
                {"%", &IOperatorProvider::binary_op_mod},
                {"%%", &IOperatorProvider::binary_op_modmod},
                {"+", &IOperatorProvider::binary_op_plus},
                {"-", &IOperatorProvider::binary_op_min},
                {"|", &IOperatorProvider::binary_op_or},
                {"||", &IOperatorProvider::binary_op_oror},
                {"&", &IOperatorProvider::binary_op_and},
                {"&&", &IOperatorProvider::binary_op_andand},
                {"==", &IOperatorProvider::binary_op_eqeq},
                {"!=", &IOperatorProvider::binary_op_neq},
                {"<", &IOperatorProvider::binary_op_lt},
                {">", &IOperatorProvider::binary_op_gt},
                {"<=", &IOperatorProvider::binary_op_lteq},
                {">=", &IOperatorProvider::binary_op_gteq},
                {"<<", &IOperatorProvider::binary_op_streamin},
                {">>", &IOperatorProvider::binary_op_streamout}
        };

    private:
        template<typename Fn>
        Optional<Fn> from_op(const String& op, const Map<Fn>& map) {
            const auto it = map.find(op);
            if (it == map.end()) {
                return NullOpt;
            }
            return it->second;
        }


    public:
        Optional<BinaryFunction> binary_op(IGuavaType* lhs, const String& op, IGuavaType* rhs) {
            if (auto fn = from_op(op, m_binary_map)) {
                return (*fn)(*this, lhs, rhs);
            }
            return NullOpt;
        }

        Optional<UnaryFunction> unary_op(const String& op, IGuavaType* rhs) {
            if (auto fn = from_op(op, m_unary_map)) {
                return (*fn)(*this, rhs);
            }
            return NullOpt;
        }
    };
}

#endif //GUAVA_IOPERATORPROVIDER_H
