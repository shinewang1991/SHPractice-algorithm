//
//  topic10.c
//  AlgorithmPractice
//
//  Created by Shine on 10/01/2019.
//  Copyright © 2019 shine. All rights reserved.
//

#include "topic10.h"

long long Fibonacci(unsigned int n){
    int arr[] = {0,1};
    if(n<2){
        return arr[n];
    }
    long long numberOne = 0;
    long long numberTwo = 1;
    long long numberN = 0;
    for(int i = 2; i<=n; ++i){
        numberN = numberOne+numberTwo;
        numberOne = numberTwo;
        numberTwo = numberN;
    }
    
    return numberN;
}
