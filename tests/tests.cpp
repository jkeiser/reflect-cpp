#include "test_array.hpp"
#include "test_as.hpp"
#include "test_as_flatten.hpp"
#include "test_box.hpp"
#include "test_custom_class1.hpp"
#include "test_custom_class2.hpp"
#include "test_custom_class3.hpp"
#include "test_custom_class4.hpp"
#include "test_default_values.hpp"
#include "test_field_variant.hpp"
#include "test_flatten.hpp"
#include "test_literal.hpp"
#include "test_optional_fields.hpp"
#include "test_readme_example.hpp"
#include "test_ref.hpp"
#include "test_replace.hpp"
#include "test_replace_flatten.hpp"
#include "test_replace_with_other_struct.hpp"
#include "test_tagged_union.hpp"
#include "test_timestamp.hpp"
#include "test_unique_ptr.hpp"
#include "test_unique_ptr2.hpp"
#include "test_variant.hpp"

int main() {
    test_readme_example();
    test_default_values();
    test_optional_fields();
    test_unique_ptr();
    test_unique_ptr2();
    test_literal();
    test_variant();
    test_tagged_union();
    test_field_variant();
    test_ref();
    test_box();
    test_array();
    test_timestamp();
    test_flatten();

    test_custom_class1();
    test_custom_class2();
    test_custom_class3();
    test_custom_class4();

    test_replace();
    test_replace_flatten();
    test_replace_with_other_struct();
    test_as();
    test_as_flatten();

    return 0;
}
