//
//  topic18.c
//  AlgorithmPractice
//
//  Created by Shine on 15/01/2019.
//  Copyright © 2019 shine. All rights reserved.
//

#include "topic18.h"
#include <stdlib.h>

void deleteNode(Node **pListHead, Node *p_ToBeDeleted){
    //如果删除的节点不是尾节点
    if(p_ToBeDeleted->next != NULL){
        Node *p_next = p_ToBeDeleted->next;
        p_ToBeDeleted->data = p_next->data;
        
        //删除p_next;
        if(p_next->next != NULL){
            p_ToBeDeleted->next = p_next->next;
        }
        else{
            p_ToBeDeleted->next = NULL;
        }
        free(p_next);
        p_next = NULL;
    }
    else if(*pListHead == p_ToBeDeleted){   //只有一个节点，也是尾节点
        Node *current = *pListHead;
        *pListHead = NULL;
        p_ToBeDeleted = NULL;
        free(current);
    }
    else { // 有很多节点，删除的是尾节点
        Node *pNext = *pListHead;
        while (pNext!=NULL && pNext->next!=NULL && pNext->next != p_ToBeDeleted) {
            pNext = pNext->next;
        }
        pNext->next = NULL;
        free(p_ToBeDeleted);
        p_ToBeDeleted = NULL;
    }
}
