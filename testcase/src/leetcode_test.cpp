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
       target = 17;
     result = twoSum(nums,numsSize,target);

       ASSERT_EQ(0,*result);
       ASSERT_EQ(3,*(result+1));
       result= twoSum(NULL,numsSize,target);
       ASSERT_EQ(0,*result);
}

TEST(add_two_numbers_test,addTwoNumbers001)
{

    struct ListNode l1 = {1,NULL};
    struct ListNode l2 = {2,NULL};
    struct ListNode* result = NULL;
    result = addTwoNumbers(&l1,&l2);
    ASSERT_EQ(3,result->val);
    free(result);
}

TEST(add_two_numbers_test,addTwoNumbers002)
{
    /*1 +9 = 10*/
    struct ListNode l1 = {1,NULL};
    struct ListNode l2 = {9,NULL};
    struct ListNode* result = NULL;
    result = addTwoNumbers(&l1,&l2);
    ASSERT_EQ(0,result->val);
    ASSERT_EQ(1,result->next->val);
    free(result);
}
