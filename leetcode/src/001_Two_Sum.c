/***************************************************************
*   Copyright (C) 2017 All rights reserved.
*   
*   文件名称：001_two_sum.c
*   创 建 者：hyb
*   创建日期：2017年07月26日
*   描    述：
*
***************************************************************/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include"leetcode_functions.h"
int* twoSum(int* nums, int numsSize, int target) {
    int loop = 0;
    int inloop = 0;
    int* result = NULL;
    result =(int*) malloc(2*sizeof(int));
    memset(result,0,2*sizeof(int));
    printf("numsSize=%d\n",numsSize);
    if(NULL == nums || numsSize==0)
    {
        return result;
    }
    
    for(loop = 0;loop < numsSize;loop++)
    {
        for(inloop = loop+1;inloop <numsSize;inloop++)
        {
            if(*(nums+loop)+*(nums+inloop) == target)
            {
                if(NULL != result)
                {
                    
                    *result = loop;
                    *(result+1) = inloop;
                }
                return result;
            }
        }
    }
    return result;
}
