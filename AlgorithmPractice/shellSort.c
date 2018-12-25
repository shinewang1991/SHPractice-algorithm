//
//  shellSort.c
//  AlgorithmPractice
//
//  Created by shine on 2018/8/24.
//  Copyright © 2018 shine. All rights reserved.
//

#include "shellSort.h"

void shellSort(int arr[], int len){
    int gap;
    int temp;
    int i,j;
    for(gap = len>>1; gap >= 1; gap>>=1){
        //insertSort
        for(i = gap; i < len; i++){
            temp = arr[i];
            for(j = i; j >=gap && arr[j-gap] > temp; j-=gap){
                arr[j] = arr[j-gap];
            }
            arr[j] = temp;
        }
    }
}
