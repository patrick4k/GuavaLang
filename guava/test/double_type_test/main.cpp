//
// Created by Patrick on 10/23/2023.
//

#include "../guava-test-common.h"
#include "../../cpp/types/Instance.h"
#include "../../cpp/types/TemplateDataProvider.h"
#include "../../cpp/types/BaseOperatorProvider.h"

using namespace guavalang::types;

class DoubleType: public IType {
public:
    DoubleType() = default;

    Optional<InstanceConstructor> constructor_from(PVec<IType> arg_types) override {
        if (arg_types.size() == 2) {

        }
        return NullOpt;
    }
};

class DoubleOperatorProvider: public BaseOperatorProvider {
public:

    static Instance string2double(const String& str) {
        return {NewPtr<DoubleType>(), NewPtr<TemplateDataProvider<double>>(std::stod(str))};
    }

    Optional<FromStringFunction> from_string() override {
        return &string2double;
    }
};


NEW_TEST(simple_operations) {
    Ptr<IOperatorProvider> op_provider = NewPtr<DoubleOperatorProvider>();
    if (auto str2instOption = op_provider->from_string()) {
        auto str2inst = *str2instOption;
        Instance inst = str2inst("3.14");
        const Ptr<IDataProvider>& data_provider = inst.getDataProvider();
        if (auto double_provider = dynamic_cast<TemplateDataProvider<double>*>(data_provider.get())) {
            double value = double_provider->data();
            RESULT(value == 3.14);
        }
        FAIL_MSG(Unable to cast data provider to double)
    }
    FAIL
}

NEW_TEST(math_operations) {
    PASS
}

TEST_RESULT main() {
    ADD_TEST(simple_operations)
    END_TEST()
}
