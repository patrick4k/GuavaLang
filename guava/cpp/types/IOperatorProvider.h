//
// Created by Patrick on 10/22/2023.
//

#ifndef GUAVA_IOPERATORPROVIDER_H
#define GUAVA_IOPERATORPROVIDER_H

#include "IType.h"

namespace guavalang::types {
    class IOperatorProvider: public IPropertyProvider {
    public:
        /* Misc */
        using FromStringFunction = std::function<Instance(String)>;
        virtual Optional<FromStringFunction> from_string() = 0;

        using RangeOperationFunction = std::function<Instance(Instance, Instance, Optional<Instance>)>;
        virtual Optional<RangeOperationFunction> range_operation(IType* start, IType* end, Optional<IType*> iteration) = 0;

        /* Unary */
        using UnaryFunction = std::function<Instance(Instance)>;

        // +-rhs, -+rhs
        virtual Optional<UnaryFunction> unary_op_plusmin(IType* rhs) = 0;

        // -rhs
        virtual Optional<UnaryFunction> unary_op_min(IType* rhs) = 0;

        // !rhs
        virtual Optional<UnaryFunction> unary_op_not(IType* rhs) = 0;

        // lhs++
        virtual Optional<UnaryFunction> unary_op_plusplus(IType* lhs) = 0;

        // lhs--
        virtual Optional<UnaryFunction> unary_op_minmin(IType* lhs) = 0;

        // lhs?
        virtual Optional<UnaryFunction> unary_op_question(IType* lhs) = 0;

        /* Binary */
        using BinaryFunction = std::function<Instance(Instance, Instance)>;

        // lhs[rhs]
        virtual Optional<BinaryFunction> binary_op_bracket(IType* lhs, IType* rhs) = 0;

        // lhs ^ rhs
        virtual Optional<BinaryFunction> binary_op_pow(IType* lhs, IType* rhs) = 0;

        // lhs ^^ rhs
        virtual Optional<BinaryFunction> binary_op_powpow(IType* lhs, IType* rhs) = 0;

        // lhs * rhs
        virtual Optional<BinaryFunction> binary_op_mult(IType* lhs, IType* rhs) = 0;

        // lhs ** rhs
        virtual Optional<BinaryFunction> binary_op_multmult(IType* lhs, IType* rhs) = 0;

        // lhs / rhs
        virtual Optional<BinaryFunction> binary_op_div(IType* lhs, IType* rhs) = 0;

        // lhs // rhs
        virtual Optional<BinaryFunction> binary_op_divdiv(IType* lhs, IType* rhs) = 0;

        // lhs % rhs
        virtual Optional<BinaryFunction> binary_op_mod(IType* lhs, IType* rhs) = 0;

        // lhs %% rhs
        virtual Optional<BinaryFunction> binary_op_modmod(IType* lhs, IType* rhs) = 0;

        // lhs + rhs
        virtual Optional<BinaryFunction> binary_op_plus(IType* lhs, IType* rhs) = 0;

        // lhs - rhs
        virtual Optional<BinaryFunction> binary_op_min(IType* lhs, IType* rhs) = 0;

        // lhs | rhs
        virtual Optional<BinaryFunction> binary_op_or(IType* lhs, IType* rhs) = 0;

        // lhs || rhs
        virtual Optional<BinaryFunction> binary_op_oror(IType* lhs, IType* rhs) = 0;

        // lhs & rhs
        virtual Optional<BinaryFunction> binary_op_and(IType* lhs, IType* rhs) = 0;

        // lhs && rhs
        virtual Optional<BinaryFunction> binary_op_andand(IType* lhs, IType* rhs) = 0;

        // lhs == rhs
        virtual Optional<BinaryFunction> binary_op_eqeq(IType* lhs, IType* rhs) = 0;

        // lhs != rhs
        virtual Optional<BinaryFunction> binary_op_neq(IType* lhs, IType* rhs) = 0;

        // lhs < rhs
        virtual Optional<BinaryFunction> binary_op_lt(IType* lhs, IType* rhs) = 0;

        // lhs > rhs
        virtual Optional<BinaryFunction> binary_op_gt(IType* lhs, IType* rhs) = 0;

        // lhs <= rhs
        virtual Optional<BinaryFunction> binary_op_lteq(IType* lhs, IType* rhs) = 0;

        // lhs >= rhs
        virtual Optional<BinaryFunction> binary_op_gteq(IType* lhs, IType* rhs) = 0;

        // lhs << rhs
        virtual Optional<BinaryFunction> binary_op_streamin(IType* lhs, IType* rhs) = 0;

        // lhs >> rhs
        virtual Optional<BinaryFunction> binary_op_streamout(IType* lhs, IType* rhs) = 0;

    private:
        using GuavaTypeUnaryFunction = std::function<Optional<UnaryFunction>(IOperatorProvider&, IType*)>;
        using GuavaTypeBinaryFunction = std::function<Optional<BinaryFunction>(IOperatorProvider&, IType*, IType*)>;

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
        Optional<BinaryFunction> binary_op(IType* lhs, const String& op, IType* rhs) {
            if (auto fn = from_op(op, m_binary_map)) {
                return (*fn)(*this, lhs, rhs);
            }
            return NullOpt;
        }

        Optional<UnaryFunction> unary_op(const String& op, IType* rhs) {
            if (auto fn = from_op(op, m_unary_map)) {
                return (*fn)(*this, rhs);
            }
            return NullOpt;
        }
    };
}

#endif //GUAVA_IOPERATORPROVIDER_H
