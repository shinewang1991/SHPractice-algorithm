//
//  bubbleSort.c
//  AlgorithmPractice
//
//  Created by shine on 2018/8/14.
//  Copyright © 2018 shine. All rights reserved.
//

#include "bubbleSort.h"
#include "swap.h"

void bubbleSort(int a[], int len){
    int num = 0;
    for(int i = 0 ; i < len - 1 ; i++){
        for(int j = len - 1; j >= i + 1 ; j--){
            if(a[j-1] > a[j]){
                swap(a, j-1, j);
            }
            num++;
        }
    }
    printf("loop %d time\n",num);
}
