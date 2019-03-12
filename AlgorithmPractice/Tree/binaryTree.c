//
//  binaryTree.c
//  AlgorithmPractice
//
//  Created by Shine on 2018/12/27.
//  Copyright © 2018年 shine. All rights reserved.
//

#include "binaryTree.h"
#include <stdbool.h>
#include <stdlib.h>

#define isArrayQueue 0

#pragma mark -- 队列
typedef BiTree ElementType;
#define MAXSize 10

#if isArrayQueue
//用数组实现的队列
typedef struct QNode{
    ElementType data[MAXSize];
    int rear;
    int front;
    int size;
}QNode,*Queue;

void createQueue(Queue *q){
    *q = malloc(sizeof(QNode));
    (*q) ->rear = -1;
    (*q) ->front = -1;
    (*q) ->size = 0;
}

void addQueue(Queue q, ElementType t){
    if((q->rear + 1)%MAXSize == q->front){
        printf("队列满了");
        return;
    }
    q->rear = (q->rear+1)%100;
    q->data[q->rear] = t;
    q->size++;
}

ElementType deleteQueue(Queue q){
    if(q->rear == q->front){
        printf("队列空了");
        return NULL;
    }
    q->front = (q->front + 1) %MAXSize;
    q->size--;
    return q->data[q->front];
}

bool isQueueEmpty(Queue q){
    return q->size <= 0;
}

#else
//用链表实现队列
struct LinkNode{    //链表
    ElementType data;
    struct LinkNode *next;
};

struct QNode{
    struct LinkNode *front;
    struct LinkNode *rear;
};

typedef struct QNode *Queue;

void createQueue(Queue *q){
    *q = malloc(sizeof(Queue));
    if(*q != NULL){
        (*q)->front = (*q)->rear = malloc(sizeof(struct LinkNode));
        (*q)->front->next = NULL;
    }
    else{
        printf("空间不足");
    }
}

void addQueue(Queue q, ElementType t){
    struct LinkNode *node = malloc(sizeof(struct LinkNode));
    if(node !=NULL){
        node->data = t;
        node->next = NULL;
        q->rear->next = node;
        q->rear = node;
    }
    else{
        printf("空间不足");
    }
    
}

bool isQueueEmpty(Queue q){
    return q->front ==NULL;
}

ElementType deleteQueue(Queue q){
    if(isQueueEmpty(q)){
        return NULL;
    }
    
    struct LinkNode *node;
    ElementType elementType;
    node = q->front;
    if(q->rear == q->front){  //只有一个元素
        q->front = q->rear = NULL;
    }
    else{
        q->front = q->front->next;
    }
    
    elementType = node->data;
    free(node);
    return elementType;
}

#endif

BiStack createStack(){
    BiStack stack = (BiStack)malloc(sizeof(struct stackNode));
    if(stack!=NULL){
        stack->top = -1;
        return stack;
    }
    else{
        return NULL;
    }
}

status push(BiStack stack, BiTree node){
    if(stack->top == maxSize - 1){
        return 0;
    }
    stack->top++;
    stack->data[stack->top] = node;
    return 1;
}

BiTree pop(BiStack stack){
    if(stack->top == -1){
        return NULL;
    }
    BiTree node = stack->data[stack->top];
    stack->top--;
    return node;
}

bool isStackEmpty(BiStack stack){
    return stack->top == -1;
}


void createBiTree(BiTree *T){
    char temp;
    scanf("%c",&temp);
    if(temp == '.'){
        *T = NULL;
    }
    else{
        *T = (BiTree)malloc(sizeof(BiNode));
        (*T)->data = temp;
        createBiTree(&(*T)->left);
        createBiTree(&(*T)->right);
    }
    
}

void preOrderTravalsal(BiTree T){
    if(T!=NULL){
        printf("%c",T->data);
        preOrderTravalsal(T->left);
        preOrderTravalsal(T->right);
    }
}

void inOrderTravalsal(BiTree T){
    if(T!=NULL){
        inOrderTravalsal(T->left);
        printf("%c",T->data);
        inOrderTravalsal(T->right);
    }
}

void postOrderTravalsal(BiTree T){
    if(T!=NULL){
        postOrderTravalsal(T->left);
        postOrderTravalsal(T->right);
        printf("%c",T->data);
    }
}

void levelOrderTravalsal(BiTree T){
    Queue q;
    createQueue(&q);
    addQueue(q, T);
    while (!isQueueEmpty(q)) {
        ElementType t = deleteQueue(q);
        printf("%c",t->data);
        if(t->left){
            addQueue(q, t->left);
        }
        if(t->right){
            addQueue(q, t->right);
        }
    }
}

void preOrderNoTravalsal(BiTree T){
    if(T == NULL){
        return;
    }
    
    BiTree p = T;
    BiStack stack = createStack();
    while (p!=NULL || (stack->top != -1)) {
        if(p!=NULL){
            printf("%c",p->data);
            push(stack, p);
            p = p->left;
        }
        else{
            p = pop(stack);
            p = p -> right;
        }
    }
}

void inOrderNoTravalsal(BiTree T){
    if(T == NULL){
        return;
    }
    BiTree p = T;
    BiStack stack = createStack();
    while (p!=NULL || (stack->top != -1)) {
        if(p!=NULL){
            push(stack, p);
            p = p->left;
        }
        else{
            p = pop(stack);
            printf("%c",p->data);
            p = p->right;
        }
    }
}

void postOrderNoTravalsal(BiTree T){
    if(T == NULL){
        return;
    }
    
    BiTree p = T;
    BiTree lastVisited = NULL;
    BiStack stack = createStack();
    while (p!=NULL) {
        push(stack, p);
        p = p->left;
    }
    
    while (stack->top != -1) {
        p = pop(stack);
        if(p->right == NULL || p->right == lastVisited){
            printf("%c",p->data);
            lastVisited = p;
        }
        else{
            push(stack, p);
            p=p->right;
            while (p!=NULL) {
                push(stack, p);
                p = p->left;
            }
        }
    }
}

void zLevelTravalsal(BiTree T){
    //定义两个stack, 一个放从左往右的节点. 另一个放从右往左的节点
    BiStack stack1 = createStack();
    BiStack stack2 = createStack();
    
    BiTree p = T;
    push(stack1, p);
    while (!isStackEmpty(stack1) || !isStackEmpty(stack2)){
        while(!isStackEmpty(stack1)){
            p = pop(stack1);
            printf("%c",p->data);
            if(p->left != NULL){
                push(stack2, p->left);
            }
            if(p->right != NULL){
                push(stack2, p->right);
            }
        }
        while(!isStackEmpty(stack2)){
            p = pop(stack2);
            printf("%c",p->data);
            if(p->right != NULL){
                push(stack1, p->right);
            }
            if(p->left != NULL){
                push(stack1, p->left);
            }
        }
    }
}
