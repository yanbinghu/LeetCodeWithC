/***************************************************************
*   Copyright (C) 2017 All rights reserved.
*
*   文件名称：002_Add_Two_Numbers.c
*   创 建 者：hyb
*   创建日期：2017年07月31日
*   描    述：
*
***************************************************************/
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
