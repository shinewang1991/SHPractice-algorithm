//
//  code62.c
//  AlgorithmPractice
//
//  Created by Shine on 2019/3/21.
//  Copyright © 2019 shine. All rights reserved.
//

#include "code62.h"
int uniquePaths(int m, int n){
    if(m == 1 || n == 1){
        return 1;
    }
    
    int paths[m][n];
    for(int i = m - 1; i >= 0; i--){
        for(int j = n - 1 ; j >= 0; j--){
            if(i == m - 1 || j == n - 1){
                paths[i][j] = 1;
            }
            if(i < m - 1 && j < n - 1){
                paths[i][j] = paths[i+1][j] + paths[i][j+1];
            }
        }
    }
    
    return paths[0][0];
    
}
