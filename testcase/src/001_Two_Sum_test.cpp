#include "googletest.h"
#include "leetcode_functions.h"
#include "leetcode_utils.h"
TEST(two_sum_test,twoSum001)
{
    int nums[4]={2,7,11,15};
    int target = 9;
    int numsSize = 4;
    int* result = twoSum(nums,numsSize,target);

       ASSERT_EQ(0,*result);
       ASSERT_EQ(1,*(result+1));
       target = 17;
     result = twoSum(nums,numsSize,target);

       ASSERT_EQ(0,*result);
       ASSERT_EQ(3,*(result+1));
       result= twoSum(NULL,numsSize,target);
       ASSERT_EQ(0,*result);
}
