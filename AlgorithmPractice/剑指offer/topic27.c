//
//  topic27.c
//  AlgorithmPractice
//
//  Created by Shine on 2019/1/19.
//  Copyright © 2019 shine. All rights reserved.
//

#include "topic27.h"
void mirrorRecursive(BiNode *biTree){
    if(biTree == NULL){
        return;
    }
    if(biTree->left == NULL && biTree->right==NULL){
        return;
    }
    BiNode *tempLeft = biTree->left;
    biTree->left = biTree->right;
    biTree->right = tempLeft;
    
    if(biTree->left){
        mirrorRecursive(biTree->left);
    }
    
    if(biTree->right){
        mirrorRecursive(biTree->right);
    }
    
}
