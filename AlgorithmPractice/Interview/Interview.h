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

//从无序数组当中查找中位数
int FindMid(int array[], int size);

//求两个数组的并集
int* unionArray(int *a, int len1, int *b, int len2, int *lengh);

//给定一个有序数组，给一个数字，找出数字在其中的下标，如果有重复的找第一个，如果没有找到应该插入的位置.
/*
 [1, 3, 3, 3, 5, 7]
 5 ret = 4
 2 ret = 1
 3 ret = 1
 */
int getNumberIndex(int *arr, int len, int value);


//一个数组中只有0和1，找出其中1的连续最大长度
/*
 [0,1,1,0,1,1,0,1,1,1] ret 3
 [0,1,1,0,1] ret 2
 
 */
int getNumberOf1(int *arr, int len);


//找出0和1连续次数相等的最大长度
//int getMaxValue(int *arr, int len);

int findMedian(int arr[], int len);
