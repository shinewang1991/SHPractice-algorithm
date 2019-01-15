//
//  topic25.c
//  AlgorithmPractice
//
//  Created by Shine on 10/01/2019.
//  Copyright © 2019 shine. All rights reserved.
//

#include "topic25.h"
Node* mergeLinkList(Node *nodeA,Node *nodeB){
    if(nodeA == NULL){
        return nodeB;
    }
    else if(nodeB == NULL){
        return nodeA;
    }
    
    Node *nodeHead = NULL;
    if(nodeA->data > nodeB->data){
        nodeHead = nodeB;
        nodeHead->next = mergeLinkList(nodeB->next, nodeA);
    }
    else{
        nodeHead = nodeA;
        nodeHead->next = mergeLinkList(nodeA->next, nodeB);
    }
    return nodeHead;
}
