/***************************************************************
*   Copyright (C) 2017 All rights reserved.
*
*   文件名称：258_Add_Digits.c
*   创 建 者：hyb
*   创建日期：2017年08月04日
*   描    述：
*
***************************************************************/
#include"leetcode_functions.h"
int addDigits(int num)
{
    int temp = num;
    if(0 == num/10)
    {
        return num;
    }
    else
    {
        num =0;
        while(0 != temp/10)
        {
            num +=temp%10;
            temp = temp/10;
        }
        num = num+temp;
       return  addDigits(num);
    }
}
