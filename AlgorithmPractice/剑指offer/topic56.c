//
//  topic56.c
//  AlgorithmPractice
//
//  Created by Shine on 2019/4/14.
//  Copyright © 2019 shine. All rights reserved.
//

#include "topic56.h"

int findOneNumAppearOnce(int *arr, int lenth){
    if(arr == NULL || lenth <= 0){
        return -1;
    }
    
    int tempNum = 0;
    for(int i = 0; i < lenth; ++i){
        tempNum ^= arr[i];
    }
    return tempNum;
}

void findNumsAppearOnce(int *arr, int lenth, int *num1, int *num2){
    if(arr == NULL || lenth < 1){
        return;
    }
    
    int tempNum = 0;
    for(int i = 0 ;i < lenth ; i++){
        tempNum ^= arr[i];
    }
    
    unsigned int indexOfbitIs1 = findFirstBitIs1(tempNum);
    *num1 = 0;
    *num2 = 0;
    for(int j = 0; j < lenth; j++){
        if(isBit1(arr[j], indexOfbitIs1)){
            *num1^=arr[j];
        }
        else{
            *num2^=arr[j];
        }
    }
}

unsigned int findFirstBitIs1(int num){
    int indexOfBit = 0;
    while ((num&1) == 0 && indexOfBit < 8 * sizeof(int)) {
        num = num >> 1;
        indexOfBit++;
    }
    return indexOfBit;
}


bool isBit1(int num, unsigned int indexOfBit){
    num = num >> indexOfBit;
    return num&1;
}
