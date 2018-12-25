//
//  main.c
//  CDemo
//
//  Created by shine on 2018/8/14.
//  Copyright (c) 2018 ___ORGANIZATIONNAME___. All rights reserved.
//

#include <stdio.h>
#include "bubbleSort.h"
#include "selectionSort.h"
#include "insertionSort.h"
#include "quickSort.h"
#include "shellSort.h"

int main(){
//    int unsortArray[] = {5,2,7,4,1,0,9,8,6,3};
    int unsortArray[] = {5,2,7,4,1,9,8,6,3,0};
    int len = sizeof(unsortArray) / sizeof(*unsortArray);
//    bubbleSort2(unsortArray, len);
//    selectionSort(unsortArray, len);
//    insertionSort(unsortArray, len);
//    quickSort(unsortArray, len);
    shellSort(unsortArray, len);
    for(int i = 0 ; i < len ; i++){
        printf("%d\n",unsortArray[i]);
    }
    
    return 0;
}

