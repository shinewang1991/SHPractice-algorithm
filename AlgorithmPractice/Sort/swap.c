//
//  swap.c
//  AlgorithmPractice
//
//  Created by shine on 2018/8/18.
//  Copyright © 2018 shine. All rights reserved.
//

#include "swap.h"

/*
void swap(int a[], int i , int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
*/

//不使用新的变量的两种方式:

/*
void swap(int a[], int i, int j){
    a[i] = a[i]^a[j];
    a[j] = a[i]^a[j];
    a[i] = a[i]^a[j];
}
*/
void swap(int a[], int i, int j){
    a[i] = a[i]+a[j];
    a[j] = a[i]-a[j];
    a[i] = a[i]-a[j];
}
