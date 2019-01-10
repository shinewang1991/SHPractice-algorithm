//
//  topic3.c
//  AlgorithmPractice
//
//  Created by Shine on 10/01/2019.
//  Copyright © 2019 shine. All rights reserved.
//

#include "topic3.h"
result findDuplicateNum(int arr[], int len,  int *deplicatedNum){
    if(arr == NULL || len <= 0){
        return 0;
    }
    for(int i = 0;i<len;i++){
        while (arr[i] != i) {
            if(arr[i] == arr[arr[i]]){
                *deplicatedNum = arr[i];
                return 1;
            }
            
            else{
                int temp = arr[i];
                arr[i] = arr[temp];
                arr[temp] = temp;
            }
        }
    }
    
    return 0;
}
