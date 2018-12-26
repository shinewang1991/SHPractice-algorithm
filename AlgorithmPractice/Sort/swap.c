//
//  swap.c
//  AlgorithmPractice
//
//  Created by shine on 2018/8/18.
//  Copyright © 2018 shine. All rights reserved.
//

#include "swap.h"

void swap(int a[], int i , int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
