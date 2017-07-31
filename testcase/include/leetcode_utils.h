/***************************************************************
*   Copyright (C) 2017 All rights reserved.
*
*   文件名称：leetcode_utils.h
*   创 建 者：hyb
*   创建日期：2017年07月31日
*   描    述：
*
***************************************************************/
#pragma once
#include"leetcode_functions.h"
typedef enum leetcode_return
{
    FALSE =0,
    TRUE =1
}leetcode_return;

leetcode_return  leet_judge_two_numbers_result(struct ListNode * result,int* retArr,int num);
