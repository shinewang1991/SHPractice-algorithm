//
//  topic14.c
//  AlgorithmPractice
//
//  Created by Shine on 15/01/2019.
//  Copyright © 2019 shine. All rights reserved.
//

#include "topic14.h"
#include <math.h>
int maxProductAfterCuttingSolution1(int num){
    if(num == 0){
        return 0;
    }
    else if(num<=2){
        return 1;
    }
    else if(num == 3){
        return 2;
    }
    else{
        int products[num+1];
        products[0] = 0;
        products[1] = 1;
        products[2] = 2;
        products[3] = 3;
        
        int max = 0;
        for(int i = 4;i<=num;i++){
            max = 0;
            for(int j = 1; j<=i/2; j++){
                int result = products[j] * products[i-j];
                if(max<result){
                    max = result;
                }
            }
            products[i] = max;
        }
        
        max = products[num];
        return max;
    }
}

int maxProductAfterCuttingSolution2(int num){
    if(num == 0){
        return 0;
    }
    else if(num <= 2){
        return 1;
    }
    else if(num == 3){
        return 2;
    }
    else{
        int numberOf3 = num/3;
        if(num - numberOf3*3 == 1){
            numberOf3-=1;
        }
        int numberOf2 = (num - numberOf3*3)/2;
        return (int)(pow(3,numberOf3))*(int)(pow(2,numberOf2));
    }
}
