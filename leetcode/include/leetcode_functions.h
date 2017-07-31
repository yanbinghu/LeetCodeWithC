/***************************************************************
*   Copyright (C) 2017 All rights reserved.
*
*   文件名称：leetcode_function.h
*   创 建 者：hyb
*   创建日期：2017年07月26日
*   描    述：
*
***************************************************************/
#pragma once
//leetcode_functions.h
#ifndef _LEETCODE_FUNCTIONS_H
#define _LEETCODE_FUNCTIONS_H
#include"common.h"
struct ListNode {
      int val;
      struct ListNode *next;
  };



int* twoSum(int* nums, int numsSize, int target);
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);
#endif
