#include "googletest.h"
#include "leetcode_functions.h"
#include "leetcode_utils.h"
TEST(add_digits_test,addDigits001)
{
    ASSERT_EQ(2,addDigits(38));
    ASSERT_EQ(6,addDigits(111111));
}
