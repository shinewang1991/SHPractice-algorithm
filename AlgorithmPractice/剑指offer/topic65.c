//
//  topic65.c
//  AlgorithmPractice
//
//  Created by Shine on 15/01/2019.
//  Copyright © 2019 shine. All rights reserved.
//

#include "topic65.h"
int add(int num1,int num2){
    int sum,carry;
    do {
        sum = num1^num2;
        carry = (num1&num2)<<1;
        num1 = sum;
        num2 = carry;
    } while (num2!=0);
    return num1;
}

void newSwap(int *num1,int *num2){
    *num1 = *num1^*num2;
    *num2 = *num1^*num2;
    *num1 = *num1^*num2;
}
