//
//  topic58.c
//  AlgorithmPractice
//
//  Created by Shine on 2019/2/27.
//  Copyright © 2019 shine. All rights reserved.
//

#include "topic58.h"

void reverseSentence(char *str){
    if(str == NULL){
        return;
    }
    char *pBegin = str;
    char *pEnd = str;
    while (*pEnd != '\0') {
        pEnd++;
    }
    pEnd--;
    reverse(pBegin, pEnd);
    
    pEnd = str;
    while (*pBegin != '\0') {
        if(*pBegin == ' '){
            pBegin++;
            pEnd++;
        }
        else if(*pEnd == ' ' || *pEnd == '\0'){
            reverse(pBegin, --pEnd);
            pBegin = ++pEnd;
        }
        else{
            pEnd++;
        }
    }
}

void reverseString(char *str){
    if(str == NULL){
        return;
    }
    char *pBegin = str;
    char *pEnd = str;
    while (*pEnd != '\0') {
        pEnd++;
    }
    pEnd--;
    reverse(pBegin, pEnd);
}
void reverse(char *pBegin, char *pEnd){
    if(pBegin == NULL || pEnd == NULL){
        return;
    }
    while (pBegin < pEnd) {
        char temp = *pBegin;
        *pBegin = *pEnd;
        *pEnd = temp;
        pBegin++;
        pEnd--;
    }
}
