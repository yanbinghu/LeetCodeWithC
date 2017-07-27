/**************************************************************
*   Copyright (C) 2017 All rights reserved.
*   
*   文件名称：leetcode_test.cpp
*   创 建 者：hyb
*   创建日期：2017年07月26日
*   描    述：
*
***************************************************************/
//leetcode_test.cpp
#include "gtest/gtest.h"
#include "leetcode_functions.h"

TEST(two_sum_test,twoSum001)
{
    int nums[4]={2,7,11,15};
    int target = 9;
    int numsSize = 4;
    int* result = twoSum(nums,numsSize,target);

       ASSERT_EQ(0,*result);
       ASSERT_EQ(1,*(result+1));
}

