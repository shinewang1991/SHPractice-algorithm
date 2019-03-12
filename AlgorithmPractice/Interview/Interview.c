//
//  Interview.c
//  AlgorithmPractice
//
//  Created by Shine on 2019/3/4.
//  Copyright © 2019 shine. All rights reserved.
//

#include "Interview.h"
void compressString(char *input,int len){
    int i = 0;
    int count = 1;
    while (input[i]!= '\0' && i <= len-1) {
        if(input[i+1] == input[i]){
            count++;
        }
        else{
            printf("%c%d",input[i],count);
            count = 1;
        }
        i++;
    }
    printf("\n");
}

char* compressString1(char *input, int len){
    char result[len];
    char *p = input;
    int i = 0;
    int count = 1;
    while (p[i] != '\0' && i<=len-1) {
        if(p[i+1] == p[i]){
            count++;
        }
        else{
            if(count >=10 && count < 100){
                int d1 = count % 10;
                int d2 = (count / 10) % 10;
                result[i++] = p[i];
                result[i++] = d2 + '0';
                result[i++] = d1 + '0';
            }
            else{
                result[i++] = p[i];
                result[i++] = count + '0';
            }
            
            count = 1;
        }
    }
    return result;
    
}
