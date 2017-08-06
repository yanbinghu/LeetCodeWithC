/****************************************************************   Copyright (C) 2017 All rights reserved.
*
*   文件名称：TestAll.cpp
*   创 建 者：hyb
*   创建日期：2017年07月26日
*   描    述：
*
***************************************************************/
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <iostream>
using namespace std;
int main(int argc,char* argv[])
{
        //testing::GTEST_FLAG(output) = "xml:"; //若要生成xml结果文件
        testing::InitGoogleTest(&argc,argv); //初始化
       if( RUN_ALL_TESTS())                     //跑单元测试
        return 0;
}

