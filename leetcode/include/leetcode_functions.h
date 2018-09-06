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


/*001,two sum*/
int* twoSum(int* nums, int numsSize, int target);

/*002 add two numbers*/
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);

/*hanmingDistance*/
int hammingDistance(int x,int y);

/*476,number complement*/
int findComplement(int num);
/*344,reverse string*/
char* reverseString(char* s);

/*258*/
int addDigits(int num);
/*237 delete node in a Link lIST*/
void deleteNode(struct ListNoe* node);

/*540  Single Element in a Sorted Array*/
int singleNonDuplicate(int* nums, int numsSize);
#endif
