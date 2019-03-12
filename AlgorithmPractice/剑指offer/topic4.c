//
//  topic4.c
//  AlgorithmPractice
//
//  Created by Shine on 10/01/2019.
//  Copyright © 2019 shine. All rights reserved.
//

#include "topic4.h"
#include <stdbool.h>
status findNum(int *array, int rows, int colums, int num){
    bool found = 0;
    if(array != NULL && rows > 0 && colums > 0){
        int row = 0;
        int colum = colums - 1;
        while (row < rows && colum >= 0) {
            if(array[row * colums + colum] == num){
                found = 1;
                break;
            }
            else if(array[row * colums + colum] > num){
                colum--;
            }
            else{
                row++;
            }
        }
    }
    return found;
}
