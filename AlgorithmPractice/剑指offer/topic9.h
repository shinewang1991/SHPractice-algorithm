//
//  topic9.h
//  AlgorithmPractice
//
//  Created by Shine on 2019/3/15.
//  Copyright © 2019 shine. All rights reserved.
//

#ifndef topic9_h
#define topic9_h

#include <stdio.h>
#define qMaxSize 10
typedef char qStackType;
#define qStatusSuccess 1
#define qStatusFailed 0
#define qBooleanTrue 1
#define qBooleanFalse 0
typedef int qStatus;
typedef int qBoolean;


//用两个栈实现队列
struct qStackNode{
    qStackType data[qMaxSize];
    int top;
};

typedef struct qStackNode *qStack;

qStatus qStackPush(qStack stack, qStackType data);
qStatus qStackPop(qStack stack, qStackType *data);
qBoolean isEmpty(qStack stack);


struct stackQueueNode{
    qStack first;
    qStack second;
};
typedef struct stackQueueNode *stackQueue;

stackQueue createStackQueue(void);
void enStackQueue(stackQueue stackQueue, qStackType data);
qStatus deStackQueue(stackQueue stackQueue, qStackType *data);

#endif /* topic9_h */

