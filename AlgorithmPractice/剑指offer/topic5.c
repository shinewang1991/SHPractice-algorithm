//
//  topic5.c
//  AlgorithmPractice
//
//  Created by Shine on 10/01/2019.
//  Copyright © 2019 shine. All rights reserved.
//

#include "topic5.h"
void replaceStr(char *str){
    int originLen = 0;
    int newLen = 0;
    int numOfBlack = 0;
    while (str[originLen] != '\0') {
        ++originLen;
        if(str[originLen] == ' '){
            ++numOfBlack;
        }
    }
    
    newLen = originLen + numOfBlack * 2;
    int originIndex = originLen;
    int newIndex = newLen;
    while (originIndex >= 0 && newIndex > originIndex) {
        if(str[originIndex] == ' '){
            str[newIndex--] = '0';
            str[newIndex--] = '2';
            str[newIndex--] = '%';
        }
        else{
            str[newIndex--] = str[originIndex];
        }
        --originIndex;
    }
}
