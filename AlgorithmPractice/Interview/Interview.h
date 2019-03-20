//
//  Interview.h
//  AlgorithmPractice
//
//  Created by Shine on 2019/3/4.
//  Copyright © 2019 shine. All rights reserved.
//

#ifndef Interview_h
#define Interview_h

#include <stdio.h>
#include <stdbool.h>

#endif /* Interview_h */
//写compress函数, 满足compress("aaa") 输出 "a3",compress("aaabb") 输出 "a3b2",compress("aaabbbaaa") 输出 "a3b3a3";
void compressString(char *input,int len);

//对应leetcode 443解法
char* compressString1(char *input, int len);

//判断一个数是不是回文数
bool isPalindrome(int number);

//判断一个字符串是不是回文数
bool isPalindromeStr(char *numberStr);
