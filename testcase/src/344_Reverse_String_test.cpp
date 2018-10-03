#include "googletest.h"
#include "leetcode_functions.h"
#include "leetcode_utils.h"
TEST(reverse_string_test,reverseString001)
{
    char s[] = "hello";
    ASSERT_STREQ("olleh",reverseString(s));
    char s1[] = "Delia sai";
    ASSERT_STREQ("ias aileD",reverseString(s1));
}
