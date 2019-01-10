//
//  topic24.c
//  AlgorithmPractice
//
//  Created by Shine on 10/01/2019.
//  Copyright © 2019 shine. All rights reserved.
//

#include "topic24.h"

LinkList reverseLinkList(LinkList phead){
    LinkList reversedPhead = NULL;
    LinkList preNode = NULL;
    LinkList pNode = phead;
    while (pNode != NULL) {
        LinkList pNext = pNode -> next;
        if(pNext == NULL){
            reversedPhead = pNode;
        }
        pNode->next = preNode;
        preNode = pNode;
        pNode = pNext;
    }
    return reversedPhead;
}
