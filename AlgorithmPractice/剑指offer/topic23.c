//
//  topic23.c
//  AlgorithmPractice
//
//  Created by Shine on 2019/2/19.
//  Copyright © 2019 shine. All rights reserved.
//

#include "topic23.h"
LinkList meetingNode(LinkList pHead){
    if(pHead == NULL){
        return NULL;
    }
    LinkList pSlow = pHead->next;
    if(pSlow == NULL){
        return NULL;
    }
    LinkList pFast = pSlow->next;
    while (pFast != NULL && pSlow != NULL) {
        if(pFast == pSlow){
            return pFast;
        }
        pSlow = pSlow->next;
        pFast = pFast->next;
        if(pFast!=NULL){
            pFast = pFast->next;
        }
    }
    return NULL; 
}

LinkList entryNodeOfLoop(LinkList pHead){
    LinkList meetNode = meetingNode(pHead);
    if(meetNode == NULL){
        return NULL;
    }
    
    //得到环中的节点数目
    int loopCount = 0;
    LinkList pCurrent = meetNode;
    while (pCurrent != meetNode) {
        pCurrent = pCurrent->next;
        loopCount++;
    }
    
    //先移动pFast,次数为环中的节点数
    LinkList pFast = pHead;
    for(int i = 0;i < loopCount;++i){
        pFast = pFast->next;
    }
    
    //再移动pFast和pSlow. 如果相遇，则是环的入口位置.
    LinkList pSLow = pHead;
    while (pFast!=pSLow) {
        pFast = pFast->next;
        pSLow = pSLow->next;
    }
    return pFast;
    
}
