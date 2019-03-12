//
//  topic50.c
//  AlgorithmPractice
//
//  Created by Shine on 2019/2/27.
//  Copyright © 2019 shine. All rights reserved.
//

#include "topic50.h"
char findFirstNotRepeatingChar(char * pString){
    int tableSize = 256;
    int table[tableSize];
    char *p = pString;
    for(int i = 0; i < tableSize; i++){
        table[i] = 0;
    }
    
    while (*p != '\0') {
        table[*(p++)]++;
    }
    
    p = pString;
    while (*p != '\0') {
        if(table[*p] == 1){
            return *p;
        }
        p++;
    }
    
    return '\0';
}
