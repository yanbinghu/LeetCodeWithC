/***************************************************************
*   Copyright (C) 2017 All rights reserved.
*
*   文件名称：002_Add_Two_Numbers.c
*   创 建 者：hyb
*   创建日期：2017年07月31日
*   描    述：
*
***************************************************************/
/**************************************************************
题目：
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8

释义：
给定两个非空链表代表两个非负整数，整数的各位数以逆序存储在链表的每个节点中。将这两个数相加，并返回结果链表。

分析:

题意较清晰，是将用链表形式的两个整数进行相加，并返回链表结果。
需要注意的主要有以下几点
1.加完之后需要给下一位子进位。
2.如果链表只有一位，直接计算结果，提高效率。
3.考虑两个链表长度不一样的场景
/*************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
#include"leetcode_functions.h"
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    unsigned int len = sizeof(struct ListNode);
    struct ListNode* head = NULL;
    struct ListNode* temp = NULL;
    int tempValue = 0;
    int flag = 0;

    if(NULL == l1->next||NULL == l2->next)
    {

        head = (struct ListNode*)malloc(len);
        memset(head,0,len);
        head->val = (l1->val + l2->val)%10;
        flag = (l1->val + l2->val)/10;
        temp = head;
        l1 = l1->next;
        l2 = l2->next;
    }
    else
    {
        while(NULL != l1&& NULL != l2)
        {
            tempValue =  l2->val+l1->val;
            struct ListNode* node = (struct ListNode*)malloc(len);
            memset(node,0,len);
            node->next = NULL;
            node->val = (tempValue+flag)%10;
            if(NULL == head)
            {
                head = node;
                temp = head;
            }
            {
                temp->next = node;
                temp = temp->next;

            }
            flag = (tempValue+flag)/10;
            l1 = l1->next;
            l2 = l2->next;
        }

    }

    if(NULL != l1)
    {
        while(NULL != l1)
        {
            struct ListNode* node = (struct ListNode*)malloc(len);
            memset(node,0,len);
            node->next = NULL;
            node->val = (l1->val+flag)%10;
            temp->next = node;
            temp = temp->next;
            flag = (l1->val+flag)/10;
            l1=l1->next;
        }
    }
    else if(NULL != l2)
    {
        while(NULL != l2)
        {
            struct ListNode* node = (struct ListNode*)malloc(len);
            memset(node,0,len);
            node->next = NULL;
            node->val = (l2->val+flag)%10;
            temp->next = node;
            temp = temp->next;
            flag =(l2->val+flag)/10;
            l2=l2->next;
        }
    }

    else{}
    if(flag != 0)
    {
        temp->next = (struct ListNode*)malloc(len);
        memset(temp->next,0,len);
        temp->next->val = flag;
    }
    return head;
}
