//
//  topic4.c
//  AlgorithmPractice
//
//  Created by Shine on 10/01/2019.
//  Copyright © 2019 shine. All rights reserved.
//

#include "topic4.h"

status findNum(int arr[4][4],int rows,int colums,int element){
    status result = 0;
    if(arr != NULL && rows>0 && colums>0){
        int row = 0;
        int column = colums-1;
        while (row<rows && colums>0) {
            if(arr[row][column]==element){
                result = 1;
                break;
            }
            else if(arr[row][column] > element){
                column--;
            }
            else{
                row++;
            }
        }
    }
    
    return result;
}
