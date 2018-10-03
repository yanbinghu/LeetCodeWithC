#include "googletest.h"
#include "leetcode_functions.h"
#include "leetcode_utils.h"
TEST(number_complement_test,findComplement001)
{
    ASSERT_EQ(2,findComplement(5));

    ASSERT_EQ(0,findComplement(1));
}
