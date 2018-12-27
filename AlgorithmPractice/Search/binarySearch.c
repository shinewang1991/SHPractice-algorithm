//
//  binarySearch.c
//  AlgorithmPractice
//
//  Created by Shine on 2018/12/26.
//  Copyright © 2018年 shine. All rights reserved.
//

#include "binarySearch.h"
int search(const int arr[], int left, int right, int key){
    if(left < right){
        int mid = (left + right)/2;
        if(key < arr[mid]){
            return search(arr, left, mid-1, key);
        }
        else if(key > arr[mid]){
            return search(arr, mid+1, right, key);
        }
        return mid;
    }
    else{
        return -1;
    }
}

void binarySearch(const int arr[], int lengh, int key){
   int result = search(arr, 0, lengh-1, key);
    if(result != -1){
        printf("找到了***%d",result);
    }
    else{
        printf("没找到");
    }
}
