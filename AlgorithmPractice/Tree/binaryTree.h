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
#include <stdbool.h>
typedef struct BiNode{
    char data;
    struct BiNode *left;
    struct BiNode *right;
}BiNode,*BiTree;

#define maxSize 100
typedef int status;
//二叉树节点的栈结构
struct stackNode{
    BiTree data[maxSize];
    int top;
};
typedef struct stackNode *BiStack;

BiStack createStack(void);
status push(BiStack stack, BiTree node);
BiTree pop(BiStack stack);
bool isStackEmpty(BiStack stack);

#endif /* binaryTree_h */

//创建树
void createBiTree(BiTree *T);

//根据已有数组创建树
void createBiTree2(BiTree *T, char arr[], int len);

//前序遍历
void preOrderTravalsal(BiTree T);

//中序遍历
void inOrderTravalsal(BiTree T);

//后序遍历
void postOrderTravalsal(BiTree T);

//层次遍历
void levelOrderTravalsal(BiTree T);

//前序非递归遍历
void preOrderNoTravalsal(BiTree T);

//中序非递归遍历
void inOrderNoTravalsal(BiTree T);

//后续非递归遍历
void postOrderNoTravalsal(BiTree T);

//Z字形层次遍历
void zLevelTravalsal(BiTree T);
