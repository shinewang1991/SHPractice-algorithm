//
//  topic9.c
//  AlgorithmPractice
//
//  Created by Shine on 2019/3/15.
//  Copyright © 2019 shine. All rights reserved.
//

#include "topic9.h"
#include <stdlib.h>

#pragma mark - 栈结构
qStatus qStackPush(qStack stack, qStackType data){
    if(stack == NULL){
        return qStatusFailed;
    }
    if(stack->top == qMaxSize-1){   //栈满了
        return qStatusFailed;
    }
    stack->top++;
    stack->data[stack->top] = data;
    return qStatusSuccess;
}

qStatus qStackPop(qStack stack, qStackType *data){
    if(stack->top == -1){  //栈空了
        return qStatusFailed;
    }
    *data = stack->data[stack->top];
    stack->top--;
    return qStatusSuccess;
}

qBoolean isEmpty(qStack stack){
    return stack->top == -1;
}


stackQueue createStackQueue(){
    qStack firstStack = malloc(sizeof(struct qStackNode));
    qStack secondStack = malloc(sizeof(struct qStackNode));
    firstStack->top = secondStack->top = -1;
    
    stackQueue queue = malloc(sizeof(struct stackQueueNode));
    queue->first = firstStack;
    queue->second = secondStack;
    return queue;
}

//用两个栈实现队列
void enStackQueue(stackQueue stackQueue, qStackType data){
    if(stackQueue->first->top == qMaxSize - 1){
        printf("队列满了\n");
        return;
    }
    qStackPush(stackQueue->first, data);
}

qStatus deStackQueue(stackQueue stackQueue, qStackType *data){
    while(!isEmpty(stackQueue->first)){    //第一个栈不为空
        qStackType data;
        qStackPop(stackQueue->first, &data);
        qStackPush(stackQueue->second, data);
    }
    if(isEmpty(stackQueue->second)){
        printf("队列为空了\n");
        return qStatusFailed;
    }
    qStackPop(stackQueue->second, data);
    return qStatusSuccess;
}
