//
//  topic63.c
//  AlgorithmPractice
//
//  Created by Shine on 2019/3/11.
//  Copyright © 2019 shine. All rights reserved.
//

#include "topic63.h"
int maxPrice(int numbers[], unsigned int length){
    if(numbers == NULL || length < 2){
        return 0;
    }
    
    int min = numbers[0];
    int maxDiff = numbers[1] - min;
    for(int i = 2; i < length; i++){
        if(numbers[i-1] < min){
            min = numbers[i-1];
        }
        int currentDiff = numbers[i] - min;
        if(currentDiff > maxDiff){
            maxDiff = currentDiff;
        }
    }
    return maxDiff;
}

int maxPrice1(int numbers[], unsigned int length){
    if(numbers == NULL && length < 2){
        return 0;
    }
    
    int maxPrice = 0;
    for(int i = 0 ;i < length - 1; ++i){
        int diff = numbers[i+1] -  numbers[i];
        if(diff > 0){
            maxPrice+=diff;
        }
    }
    return maxPrice;
    
}
