//
//  topic56.h
//  AlgorithmPractice
//
//  Created by Shine on 2019/4/14.
//  Copyright © 2019 shine. All rights reserved.
//

#ifndef topic56_h
#define topic56_h

#include <stdio.h>
#include <stdbool.h>

#endif /* topic56_h */

//数组中数字出现的次数(一个整形数组里除了一个数字之外，其他数字都出现了两次。请找出这一个只出现一次的数字)
int findOneNumAppearOnce(int *arr, int lenth);

//数组中数字出现的次数(一个整形数组里除了两个数字之外，其他数字都出现了两次。请找出这两个只出现一次的数字)
void findNumsAppearOnce(int *arr, int lenth, int *num1, int *num2);

//找出一个数第几位是1
unsigned int findFirstBitIs1(int num);

//判断一个数字第indexOfBit位是不是1
bool isBit1(int num, unsigned int indexOfBit);
