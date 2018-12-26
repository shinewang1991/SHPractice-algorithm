//
//  insertionSort.c
//  AlgorithmPractice
//
//  Created by Shine on 19/08/2018.
//  Copyright © 2018 shine. All rights reserved.
//

#include "insertionSort.h"

void insertionSort(int arr[], int len){
    int temp,i,j;
    for(i = 1; i < len; i++){
        temp = arr[i];  //摸下一张牌
        for(j = i; j >= 0 && arr[j-1] > temp ; j--){
                arr[j] = arr[j-1];   //移出来空位
        }
        arr[j] = temp;   //新牌落位
    }
}
