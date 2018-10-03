/***************************************************************
*   Copyright (C) 2017 All rights reserved.
*
*   文件名称：leetcode_utils.cpp
*   创 建 者：hyb
*   创建日期：2017年07月31日
*   描    述：辅助测试函数或结构
*
***************************************************************/
#include "leetcode_utils.h"
leetcode_return  leet_judge_two_numbers_result(struct ListNode * result,int* retArr,int num)
{
    int loop = 0;
    if(NULL == result)
    {

        printf("result is null");
        return FALSE;
    }
    for(loop = 0;loop < num;loop++)
    {

        if(result->val != retArr[loop])
        {
            break;
        }
        result = result->next;
        if(NULL == result)
        {
            break;
        }
    }
    if(NULL == result && loop == num-1)
        return TRUE;
    return FALSE;
}

