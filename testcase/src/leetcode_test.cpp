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
TEST(add_two_numbers_test,addTwoNumbers003)
{
    /*1 +9 = 10*/
    struct ListNode l1 = {1,NULL};
    struct ListNode l2 = {9,NULL};
    struct ListNode* result = NULL;
    result = addTwoNumbers(&l1,&l2);
    int ret[] = {0,1};
    ASSERT_EQ(FALSE,leet_judge_two_numbers_result(result,ret,2));
    free(result);
}

TEST(hamming_distance_test,hammingDistance001)
{
    ASSERT_EQ(2,hammingDistance(1,2));

    ASSERT_EQ(0,hammingDistance(0,0));


    ASSERT_EQ(4,hammingDistance(144,23));
}

TEST(number_complement_test,findComplement001)
{
    ASSERT_EQ(2,findComplement(5));

    ASSERT_EQ(0,findComplement(1));
}
TEST(reverse_string_test,reverseString001)
{
    char s[] = "hello";
    ASSERT_STREQ("olleh",reverseString(s));
    char s1[] = "Delia sai";
    ASSERT_STREQ("ias aileD",reverseString(s1));
}
TEST(add_digits_test,addDigits001)
{
    ASSERT_EQ(2,addDigits(38));
    ASSERT_EQ(6,addDigits(111111));
}
