#include "googletest.h"
#include "leetcode_functions.h"
#include "leetcode_utils.h"
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
    /*11 +9 = 20*/
    struct ListNode l1 = {1,NULL};
    struct ListNode l1n1 = {1,NULL};
    l1.next = &l1n1;
    struct ListNode l2 = {9,NULL};
    struct ListNode* result = NULL;
    result = addTwoNumbers(&l1,&l2);
    ASSERT_EQ(0,result->val);
    ASSERT_EQ(2,result->next->val);
    free(result);
}
TEST(add_two_numbers_test,addTwoNumbers003)
{
    /*12 +21 = 33*/
    struct ListNode l1 = {1,NULL};
    struct ListNode l1n1 = {2,NULL};
    l1.next = &l1n1;
    struct ListNode l2 = {2,NULL};
    struct ListNode l2n1 = {1,NULL};
    l2.next = &l2n1;
    struct ListNode* result = NULL;
    result = addTwoNumbers(&l1,&l2);
    int ret[] = {3,3};
    ASSERT_EQ(TRUE,leet_judge_two_numbers_result(result,ret,2));
    free(result);
}
TEST(add_two_numbers_test,addTwoNumbers004)
{
    /*55 +65 = 120*/
    struct ListNode l1 = {5,NULL};
    struct ListNode l1n1 = {5,NULL};
    l1.next = &l1n1;
    struct ListNode l2 = {5,NULL};
    struct ListNode l2n1 = {6,NULL};
    l2.next = &l2n1;
    struct ListNode* result = NULL;
    result = addTwoNumbers(&l1,&l2);
    int ret[] = {0,2,1};
    ASSERT_EQ(TRUE,leet_judge_two_numbers_result(result,ret,3));
    free(result);
}
TEST(add_two_numbers_test,addTwoNumbers005)
{
    /*5 +56 = 61*/
    struct ListNode l1 = {5,NULL};
    struct ListNode l2 = {6,NULL};
    struct ListNode l2n1 = {5,NULL};
    l2.next = &l2n1;
    struct ListNode* result = NULL;
    result = addTwoNumbers(&l1,&l2);
    int ret[] = {1,6};
    ASSERT_EQ(TRUE,leet_judge_two_numbers_result(result,ret,2));
    free(result);
}
