#!/bin/bash
#删除覆盖率相关文件
find . -name "*.info" -o -name "*.gcov" -o -name "*.gcno" -o -name "*.gcda" |xargs rm -rf {} \; 
rm -rf ./gcov/*
make clean;make all;./main
lcov -c -o main.info -d .
#生成html
genhtml main.info -o ./gcov
make clean;
find . -name "*.info" -o -name "*.gcov" -o -name "*.gcno" -o -name "*.gcda" |xargs rm -rf {} \; 
