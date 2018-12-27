//
//  queue.c
//  AlgorithmPractice
//
//  Created by Shine on 2018/12/27.
//  Copyright © 2018年 shine. All rights reserved.
//

#include "queue.h"
#include <stdlib.h>
//void addQueue(Queue *q, char data){
//    if(((*q)->rear + 1)%MAXSiZE == 0){
//        printf("队列满了");
//        return;
//    }
//    (*q)->rear = ((*q)->rear+1) % MAXSiZE;
//    (*q)->data[(*q)->rear] = data;
//
//}
//
//char deleteQueue(Queue *q, char data){
//    if((*q)->rear == (*q)->front){
//        printf("队列空了");
//        return -1;
//    }
//    else{
//        (*q)->front = ((*q)->front + 1) % MAXSiZE;
//        return (*q)->data[(*q)->front];
//    }
//}
//
//Queue createQueue(){
//    Queue queue = (Queue)malloc(sizeof(QNode));
//    if(queue == NULL){
//        printf("空间不足");
//        return  NULL;
//    }
//
//    queue->front = -1;
//    queue->rear = -1;
//    return queue;
//}
