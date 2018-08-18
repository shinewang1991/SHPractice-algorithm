//
//  main.c
//  CDemo
//
//  Created by shine on 2018/8/14.
//  Copyright (c) 2018 ___ORGANIZATIONNAME___. All rights reserved.
//

#include <stdio.h>
#include "bubbleSort.h"

int main(){
    int unsortArray[] = {5,2,7,4,1,0,9,8,6,3};
    int len = sizeof(unsortArray) / sizeof(*unsortArray);
    bubbleSort(unsortArray, len);
    for(int i = 0 ; i < len ; i++){
        printf("%d\n",unsortArray[i]);
    }
    
    return 0;
}

