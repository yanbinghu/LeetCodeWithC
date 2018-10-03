#include "googletest.h"
#include "leetcode_functions.h"
#include "leetcode_utils.h"
TEST(hamming_distance_test,hammingDistance001)
{
    ASSERT_EQ(2,hammingDistance(1,2));

    ASSERT_EQ(0,hammingDistance(0,0));


    ASSERT_EQ(4,hammingDistance(144,23));
}
