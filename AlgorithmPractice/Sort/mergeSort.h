//
//  mergeSort.h
//  AlgorithmPractice
//
//  Created by shine on 2018/11/17.
//  Copyright © 2018 shine. All rights reserved.
//

#ifndef mergeSort_h
#define mergeSort_h

#include <stdio.h>

//最后的合并
void merge(int arr[], int temp[], int left, int right, int rightEnd);

//分而治之
void mSort(int arr[], int temp[], int left, int rightEnd);
           
//归并排序
void mergeSort(int arr[], int len);

#endif /* mergeSort_h */
