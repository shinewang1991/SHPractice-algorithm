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


//fn = f(n-1)+f(n-2)
int jumpFloor(int n){
    int num1 = 1;   //1个台阶
    int num2 = 2;   //2个台阶
    int num3 = 0;
    for(int i = 3; i <= n; ++i){
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
    }
    return num3;
}

int jumpFloorRecursion(int n){
    if(n <= 2){
        return n;
    }
    else{
        return jumpFloorRecursion(n-1) + jumpFloorRecursion(n-2);
    }
}
