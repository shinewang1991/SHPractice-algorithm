//
//  topic16.c
//  AlgorithmPractice
//
//  Created by Shine on 15/01/2019.
//  Copyright © 2019 shine. All rights reserved.
//

#include "topic16.h"
#include <math.h>
double PowerWithUnsignedExponent(double base, int exponent){
    if(exponent == 0){
        return 1.0;
    }
    
    if(exponent == 1){
        return base;
    }
    
    double result = PowerWithUnsignedExponent(base, exponent>>1);
    result *= result;
    if((exponent&1) == 1){   //exponent是奇数
        result *= base;
    }
    return result;
}

double Power(double base, int exponent){
    if(fabs(base - 0.0) < 0.0000001 && exponent<=0){    //底数为0，指数为负数
        return 0.0;
    }
    
    unsigned int tempExponent = (unsigned int)abs(exponent);
    double result = PowerWithUnsignedExponent(base, tempExponent);
    if(exponent<0){
        result = 1/result;
    }
    return result;
}
