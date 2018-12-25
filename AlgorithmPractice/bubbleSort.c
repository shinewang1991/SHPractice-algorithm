//
//  bubbleSort.c
//  AlgorithmPractice
//
//  Created by shine on 2018/8/14.
//  Copyright © 2018 shine. All rights reserved.
//

#include <stdbool.h>
#include "bubbleSort.h"
#include "swap.h"

//正序把小的往前排
void bubbleSort(int arr[], int len){
    int num = 0;
    bool flag = true;
    for(int i = 0 ; i < len - 1 && flag; i++){
        flag = false;
        for(int j = len - 1; j >= i + 1 ; j--){
            if(arr[j-1] > arr[j]){
                swap(arr, j-1, j);
                flag = true;
            }
            num++;
        }
    }
    printf("loop %d time\n",num);
}

//逆序把大的往后排
void bubbleSort2(int arr[], int len){
    bool flag = true;
    for(int p = len-1; p>=0 && flag; p--){
        flag = false;
        for(int i = 0; i < p; i++){
            if(arr[i]>arr[i+1]){
                swap(arr, i, i+1);
                flag = true;
            }
        }
    }
}
