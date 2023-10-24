//
// Created by Patrick on 10/23/2023.
//

#include "../guava-test-common.h"
#include "../../cpp/types/Instance.h"
#include "../../cpp/types/TemplateDataProvider.h"
#include "../../cpp/types/Type.h"
#include "../../cpp/types/BaseOperatorProvider.h"
#include "../../cpp/types/TemplateOperatorProvider.h"
#include "../../cpp/types/BatchOperatorProvider.h"

using namespace guavalang::types;

using DoubleDataProvider = TemplateDataProvider<double>;

class DoubleType: public Type<DoubleDataProvider>  {
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
    auto double_type = NewPtr<DoubleType>();
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
    auto double_type = NewPtr<DoubleType>();
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


using StringDataProvider = TemplateDataProvider<String>;
class StringType;
using OpStringDouble = TemplateOperatorProvider<StringType, StringDataProvider, DoubleType, DoubleDataProvider>;

class StringType: public Type<StringDataProvider, OpStringDouble> {
public:
    StringType() = default;

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
};

NEW_TEST(string_operations) {
    Ptr<StringType> type_str = NewPtr<StringType>();
    Ptr<DoubleType> type_double = NewPtr<DoubleType>();

    auto str_op = *type_str->GetOperatorProvider();

    auto double_op = *type_double->GetOperatorProvider();
    auto str2str = *str_op->from_string();
    auto str2double = *double_op->from_string();

    auto str = str2str("Patrick");
    auto d = str2double("4.2");

    auto strBracketDouble = *str_op->binary_op_bracket(str.getType().get(), d.getType().get());

    auto i = strBracketDouble(str, d);
    auto i_str = dynamic_cast<StringDataProvider*>(i.getDataProvider().get());

    RESULT(i_str->data() == "i")
}

using IntDataProvider = TemplateDataProvider<int>;

class IntType;
class IntDoubleOperations: public TemplateOperatorProvider<IntType, IntDataProvider, DoubleType, DoubleDataProvider> {
public:
    static Instance intTimesDouble(IntDataProvider* lhs, DoubleDataProvider* rhs) {
        auto i = lhs->data();
        auto d = rhs->data();
        auto ret = static_cast<int>(i*d);
        return { NewPtr<DoubleType>(), NewPtr<IntDataProvider>(ret) };
    }

    Optional<TemplateBinaryFunction> binary_op_mult() override {
        return &intTimesDouble;
    }

    static Instance intDivDouble(IntDataProvider* lhs, DoubleDataProvider* rhs) {
        auto i = lhs->data();
        auto d = rhs->data();
        auto ret = static_cast<int>(i/d);
        return { NewPtr<DoubleType>(), NewPtr<IntDataProvider>(ret) };
    }

    Optional<TemplateBinaryFunction> binary_op_div() override {
        return &intDivDouble;
    }
};

class IntDoubleOperations2: public TemplateOperatorProvider<IntType, IntDataProvider, DoubleType, DoubleDataProvider> {
public:
    static Instance intDivDouble(IntDataProvider* lhs, DoubleDataProvider* rhs) {
        auto i = lhs->data();
        auto d = rhs->data();
        auto ret = static_cast<int>(i/d);
        return { NewPtr<DoubleType>(), NewPtr<IntDataProvider>(ret) };
    }

    Optional<TemplateBinaryFunction> binary_op_div() override {
        return &intDivDouble;
    }
};


class DoubleIntOperations: public TemplateOperatorProvider<DoubleType, DoubleDataProvider, IntType, IntDataProvider> {
public:

static Instance doubleTimesInt(DoubleDataProvider* lhs, IntDataProvider* rhs) {
        auto d = lhs->data();
        auto i = rhs->data();
        auto ret = d*i;
        return { NewPtr<DoubleType>(), NewPtr<DoubleDataProvider>(ret) };
    }

    Optional<TemplateBinaryFunction> binary_op_mult() override {
        return &doubleTimesInt;
    }
};

class IntType: public Type<IntDataProvider, BatchOperatorProvider<IntDoubleOperations, IntDoubleOperations2, DoubleIntOperations>> {

    static Instance string2int(const String& str) {
        return { NewPtr<IntType>(), NewPtr<IntDataProvider>(std::stoi(str)) };
    }

    Optional<IOperatorProvider::FromStringFunction> from_string() override {
        return &string2int;
    }

};

NEW_TEST(bach_operations) {
    Ptr<IntType> type_int = NewPtr<IntType>();
    Ptr<DoubleType> type_double = NewPtr<DoubleType>();

    auto int_op = *type_int->GetOperatorProvider();

    auto double_op = *type_double->GetOperatorProvider();
    auto str2int = *int_op->from_string();
    auto str2double = *double_op->from_string();

    auto int_ = str2int("2");
    auto d = str2double("4.2");

    auto intMultDouble = int_op->binary_op(int_.getType().get(), "*", d.getType().get());
    auto doubleMultInt = int_op->binary_op(d.getType().get(), "*", int_.getType().get());

    if (!intMultDouble || !doubleMultInt) {
        FAIL_MSG(Unable to get * operator)
    }

    try {
        auto intDivDouble = int_op->binary_op(int_.getType().get(), "/", d.getType().get());
        FAIL_MSG(Should not be able to get / operator)
    } catch (...) {  }

    auto id = (*intMultDouble)(int_, d);
    auto di = (*doubleMultInt)(d, int_);
    auto id_val = dynamic_cast<IntDataProvider*>(id.getDataProvider().get());
    auto di_val = dynamic_cast<DoubleDataProvider*>(di.getDataProvider().get());

    RESULT(id_val->data() == static_cast<int>(2*4.2));
    RESULT(di_val->data() == 2*4.2);
}

TEST_RESULT main() {
    ADD_TEST(simple_operations)
    ADD_TEST(math_operations)
    ADD_TEST(string_operations)
    ADD_TEST(bach_operations)
    END_TEST()
}
