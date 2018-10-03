#include "googletest.h"
#include "leetcode_functions.h"
#include "leetcode_utils.h"
TEST(singleNonDuplicate_test,singleNonDuplicate001)
{
	int nums[7]={3,3,7,7,10,11,11};
	ASSERT_EQ(10,singleNonDuplicate(nums,7));
	int nums1[5]={1,2,2,3,3};
	ASSERT_EQ(1,singleNonDuplicate(nums1,5));
	ASSERT_EQ(0,singleNonDuplicate(nums1,0));
	int nums2[1]={4};
	ASSERT_EQ(4,singleNonDuplicate(nums2,1));
}
