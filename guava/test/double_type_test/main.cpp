//
// Created by Patrick on 10/23/2023.
//

#include "../guava-test-common.h"
#include "../../cpp/types/Instance.h"
#include "../../cpp/types/TemplateDataProvider.h"
#include "../../cpp/types/Type.h"
#include "../../cpp/types/BaseOperatorProvider.h"
#include "../../cpp/types/TemplateOperatorProvider.h"

using namespace guavalang::types;

using DoubleDataProvider = TemplateDataProvider<double>;
using StringDataProvider = TemplateDataProvider<String>;

class DoubleType: public Type, public BaseOperatorProvider {
public:
    DoubleType() = default;

    static Instance string2double(const String& str) {
        return { NewPtr<DoubleType>(), NewPtr<DoubleDataProvider>(std::stod(str)) };
    }

    Optional<FromStringFunction> from_string() override {
        return &string2double;
    }

    static Instance doubleTimesDouble(const Instance& a, const Instance& b) {
        auto dp_a = dynamic_cast<DoubleDataProvider*>(a.getDataProvider().get());
        auto dp_b = dynamic_cast<DoubleDataProvider*>(b.getDataProvider().get());
        auto dp_c = NewPtr<DoubleDataProvider>(dp_a->data()*dp_b->data());
        return { a.getType(), dp_c };
    }

    Optional<BinaryFunction> binary_op_mult(IGuavaType *type, IGuavaType *iType) override {
        return &doubleTimesDouble;
    }
};

NEW_TEST(simple_operations) {
    Ptr<Type> double_type = NewPtr<DoubleType>();
    IOperatorProvider* op_provider = *double_type->GetOperatorProvider();
    if (auto str2instOption = op_provider->from_string()) {
        Instance inst = (*str2instOption)("3.14");
        const Ptr<IDataProvider>& data_provider = inst.getDataProvider();
        if (auto double_provider = dynamic_cast<DoubleDataProvider*>(data_provider.get())) {
            double value = double_provider->data();
            RESULT(value == 3.14);
        }
        FAIL_MSG(Unable to cast data provider to double)
    }
    FAIL
}

NEW_TEST(math_operations) {
    Ptr<Type> double_type = NewPtr<DoubleType>();
    IOperatorProvider* op_provider = *double_type->GetOperatorProvider();
    auto str2inst = *op_provider->from_string();
    auto inst_a = str2inst("2.2");
    auto inst_b = str2inst("10");

    Ptr<IGuavaType> d_type = NewPtr<DoubleType>();
    auto multInst = *op_provider->binary_op_mult(double_type.get(), double_type.get());
    auto inst_c = multInst(inst_a, inst_b);
    auto c = dynamic_cast<DoubleDataProvider*>(inst_c.getDataProvider().get());

    RESULT(c->data() == 2.2*10);
}

class StringType:
        public Type,
        public TemplateOperatorProvider<StringDataProvider, DoubleDataProvider> {
public:

    static Instance string2string(String str) {
        return { NewPtr<StringType>(), NewPtr<StringDataProvider>(str) };
    }

    Optional<FromStringFunction> from_string() override {
        return &string2string;
    }

    static Instance stringBracket(StringDataProvider* lhs, DoubleDataProvider* rhs) {
        auto str = lhs->data();
        auto i = static_cast<int>(rhs->data());
        auto c = str.c_str()[i];
        auto retStr = String(1, c);
        return { NewPtr<StringType>(), NewPtr<StringDataProvider>(retStr) };
    }

    Optional<TemplateBinaryFunction> binary_op_bracket() override {
        return &stringBracket;
    }

    Optional<TemplateBinaryFunction> binary_op_mult() override {
        return TemplateOperatorProvider::binary_op_mult();
    }
};

NEW_TEST(string_operations) {
    Ptr<Type> type_str = NewPtr<StringType>();
    Ptr<Type> type_double = NewPtr<DoubleType>();

    auto str_op = *type_str->GetOperatorProvider();
    auto double_op = *type_double->GetOperatorProvider();
    auto str2str = *str_op->from_string();
    auto str2double = *double_op->from_string();

    auto str = str2str("Patrick");
    auto d = str2double("4.2");

    auto strBracketDouble = *str_op->binary_op_bracket(type_str.get(), type_double.get());

    auto i = strBracketDouble(str, d);
    auto i_str = dynamic_cast<StringDataProvider*>(i.getDataProvider().get());

    RESULT(i_str->data() == "i")
}

TEST_RESULT main() {
    ADD_TEST(simple_operations)
    ADD_TEST(math_operations)
    ADD_TEST(string_operations)
    END_TEST()
}
