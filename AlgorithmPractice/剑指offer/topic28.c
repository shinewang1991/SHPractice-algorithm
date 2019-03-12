//
//  topic28.c
//  AlgorithmPractice
//
//  Created by Shine on 2019/1/20.
//  Copyright © 2019 shine. All rights reserved.
//

#include "topic28.h"
bool isSymmetricBiTreeWithTwoNode(BiNode *node1,BiNode *node2){
    if(node1 == NULL && node2 == NULL){
        return true;
    }
    if(node1 == NULL || node2 == NULL){
        return false;
    }
    if(node1->data != node2->data){
        return false;
    }
    
    return isSymmetricBiTreeWithTwoNode(node1->left, node2->right) && isSymmetricBiTreeWithTwoNode(node1->right, node2->left);
}

bool isSymmetricBiTree(BiNode *node){
    return isSymmetricBiTreeWithTwoNode(node, node);
}

