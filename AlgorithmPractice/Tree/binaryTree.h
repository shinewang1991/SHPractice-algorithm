//
//  binaryTree.h
//  AlgorithmPractice
//
//  Created by Shine on 2018/12/27.
//  Copyright © 2018年 shine. All rights reserved.
//

#ifndef binaryTree_h
#define binaryTree_h

#include <stdio.h>

#endif /* binaryTree_h */
typedef struct BiNode{
    char data;
    struct BiNode *left;
    struct BiNode *right;
}BiNode,*BiTree;

//创建树
void createBiTree(BiTree *T);

//前序遍历
void preOrderTravalsal(BiTree T);

//中序遍历
void inOrderTravalsal(BiTree T);

//后序遍历
void postOrderTravalsal(BiTree T);

//层次遍历
void levelOrderTravalsal(BiTree T);
