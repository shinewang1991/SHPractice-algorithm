//
//  topic52.c
//  AlgorithmPractice
//
//  Created by Shine on 2019/3/1.
//  Copyright © 2019 shine. All rights reserved.
//

#include "topic52.h"
unsigned int getLinkListLengh(LinkList pHead);
LinkList findFirstCommonNode(LinkList pHead1, LinkList pHead2){
    if(pHead1 == NULL || pHead2 == NULL){
        return NULL;
    }
    
    unsigned int  lengh1 = getLinkListLengh(pHead1);
    unsigned int lengh2 = getLinkListLengh(pHead2);
    int diff = 0;
    LinkList pLong = pHead1;
    LinkList pShort = pHead2;
    if(lengh1 > lengh2){
        diff = lengh1 - lengh2;
        pLong = pHead1;
        pShort = pHead2;
    }
    else{
        diff = lengh2 - lengh1;
        pLong = pHead2;
        pShort = pHead1;
    }
    
    //先让长的先移动diff
    for(int i = 0 ;i < diff; i++){
        pLong = pLong->next;
    }
    
    //然后再一起移动
    while (pLong != NULL && pShort !=NULL && pLong != pShort) {
        pLong = pLong->next;
        pShort = pShort->next;
    }
    
    LinkList commonNode = pLong;
    return commonNode;
}

unsigned int getLinkListLengh(LinkList pHead){
    unsigned int lengh = 0;
    LinkList pNode = pHead;
    while (pNode!=NULL) {
        pNode = pNode->next;
        lengh++;
    }
    return lengh;
}
