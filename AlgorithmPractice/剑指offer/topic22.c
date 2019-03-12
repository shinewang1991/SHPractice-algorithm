//
//  topic22.c
//  AlgorithmPractice
//
//  Created by Shine on 2019/2/19.
//  Copyright © 2019 shine. All rights reserved.
//

#include "topic22.h"
LinkList findKthToTail(LinkList pListHead, unsigned int k){
    if(pListHead == NULL || k == 0){
        return NULL;
    }
    
    LinkList pHead = pListHead;
    LinkList pBehind = pListHead;
    for(int i = 0 ;i < k-1 ; ++i){
        if(pHead->next != NULL){
            pHead = pHead->next;
        }
        else{
            return NULL;
        }
    }
    while (pHead->next != NULL) {
        pHead = pHead->next;
        pBehind = pBehind->next;
    }
    return pBehind;
}
