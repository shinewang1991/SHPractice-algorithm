//
//  selectionSort.c
//  AlgorithmPractice
//
//  Created by shine on 2018/8/18.
//  Copyright © 2018 shine. All rights reserved.
//

#include "selectionSort.h"
#include "swap.h"

void selectionSort(int arr[], int len){
    for(int i = 0 ; i < len - 1; i++){
        int min = i;
        for(int j = i + 1; j < len; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min != i){
            swap(arr, i, min);
        }
    }
}
