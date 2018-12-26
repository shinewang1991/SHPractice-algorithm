//
//  quickSort.c
//  AlgorithmPractice
//
//  Created by shine on 2018/8/23.
//  Copyright © 2018 shine. All rights reserved.
//

#include "quickSort.h"
#include "swap.h"

int getPivot(int arr[], int left, int right){
    int center = (left + right)/2;
    if(arr[left] > arr[center]){
        swap(arr, left, center);
    }
    
    if(arr[left] > arr[right]){
        swap(arr, left, right);
    }
    
    if(arr[center] > arr[right]){
        swap(arr, center, right);
    }
    
    swap(arr, center, right - 1);
    return arr[right - 1];
}

void recursion(int arr[], int left, int right){
    if(right - left < 2){
        return;
    }
    int pivot = getPivot(arr, left, right);  //选取中元
    int i = left;
    int j = right - 1;
    for(;;){
        while (arr[++i] < pivot) {
        }
        while (arr[--j] > pivot) {
        }
        
        if(i < j){
            swap(arr, i, j);
        }
        else{
            break;
        }
    }
    
    swap(arr, i, right-1);
    //子集划分结束，递归去解决子集的问题
    recursion(arr, left, i-1);
    recursion(arr, i+1, right);
}

void quickSort(int arr[], int len){
    recursion(arr, 0, len - 1);
}
