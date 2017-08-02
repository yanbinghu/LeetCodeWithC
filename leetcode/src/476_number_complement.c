/***************************************************************
*   Copyright (C) 2017 All rights reserved.
*
*   文件名称：476_number_complement.c
*   创 建 者：hyb
*   创建日期：2017年08月02日
*   描    述：
*
***************************************************************/
#include"leetcode_functions.h"
int findComplement(int num) {

    int temp = num;
    int i = 0;
    for(i=0;temp!=0;temp/=2,i++)
    {}
    return pow(2,i)-num-1;
}
