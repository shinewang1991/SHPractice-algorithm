//
//  topic6.c
//  AlgorithmPractice
//
//  Created by Shine on 10/01/2019.
//  Copyright © 2019 shine. All rights reserved.
//

#include "topic6.h"
void recursionPrintList(LinkList node){
    if(node != NULL){
        if(node->next != NULL){
            recursionPrintList(node->next);
        }
        printf("%d",node->data);
    }
}
