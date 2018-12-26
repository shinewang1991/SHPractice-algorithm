//
//  mergeSort.c
//  AlgorithmPractice
//
//  Created by shine on 2018/11/17.
//  Copyright © 2018 shine. All rights reserved.
//

#include "mergeSort.h"
#include <stdlib.h>

void merge(int arr[], int temp[], int left, int right, int rightEnd){
    int t, leftEnd;
    t = left;
    leftEnd = right - 1;
    int numberOfEmelemts = rightEnd - left + 1;
    
    while (left <= leftEnd && right <= rightEnd){
        if(arr[left] <= arr[right]){
            temp[t++] = arr[left++];
        }
        else{
            temp[t++] = arr[right++];
        }
    }
    
    while (left <= leftEnd) {
        temp[t++] = arr[left++];
    }
    
    while (right <= rightEnd) {
        temp[t++] = arr[right++];
    }
    
    //最后将临时数组中的数据倒回到原来的数组中
    for(int i = 0; i<numberOfEmelemts; i++,rightEnd--){
        arr[rightEnd] = temp[rightEnd];
    }
    
}

void mSort(int arr[], int temp[], int left, int rightEnd){
    if(left < rightEnd){
        int center = (left + rightEnd)/2;
        mSort(arr, temp, left, center);
        mSort(arr, temp, center+1, rightEnd);
        merge(arr, temp, left, center+1, rightEnd);
    }
    
}


void mergeSort(int arr[], int len){
    int *temp;
    temp = (int *)malloc(len * sizeof(int));
    if(temp != NULL){
        mSort(arr, temp, 0, len-1);
        free(temp);
    }
    else{
        printf("内存不足");
    }
}
