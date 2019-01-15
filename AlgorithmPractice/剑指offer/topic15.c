//
//  topic15.c
//  AlgorithmPractice
//
//  Created by Shine on 15/01/2019.
//  Copyright © 2019 shine. All rights reserved.
//

#include "topic15.h"
int numberOf1(int num){
    int count = 0;
    while (num) {
        ++count;
        num = (num-1)&num;
    }
    return count;
}
