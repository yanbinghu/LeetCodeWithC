/***************************************************************
*   Copyright (C) 2017 All rights reserved.
*
*   文件名称：461_hanming_distance.c
*   创 建 者：hyb
*   创建日期：2017年08月01日
*   描    述：
*
***************************************************************/
#include "leetcode_functions.h"
int hammingDistance(int x,int y)
{
    int result = 0;
    /*get the temp result*/
    int temp = x^y;
    /*calc the 1 of temp result*/
    while (temp != 0)
    {
        if (temp % 2 == 1)
        {
            result++;
        }
        temp = temp >>1;
    }
    printf(" the hamming distance is %d\n",result);
   return result;
}
