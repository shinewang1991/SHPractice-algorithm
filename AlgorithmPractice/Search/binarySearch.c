//
//  binarySearch.c
//  AlgorithmPractice
//
//  Created by Shine on 2018/12/26.
//  Copyright © 2018年 shine. All rights reserved.
//

#include "binarySearch.h"

//递归版
int search(const int arr[], int left, int right, int key){
    if(left <= right){
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

//非递归版
int search1(const int arr[],int left, int right, int key){
    int l = left;
    int r = right;
    int result = -1;
    int center;
    while (l<=r) {
        center = (l+r)/2;
        if(key > arr[center]){
            l = center + 1;
        }
        else if(key < arr[center]){
            r = center - 1;
        }
        else{
            result = arr[center];
            break;
        }
    }
    
    return result;
}

void binarySearch(const int arr[], int lengh, int key){
   int result = search1(arr, 0, lengh-1, key);
    if(result != -1){
        printf("找到了***%d",result);
    }
    else{
        printf("没找到");
    }
}
