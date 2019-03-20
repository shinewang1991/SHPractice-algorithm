//
//  topic26.c
//  AlgorithmPractice
//
//  Created by Shine on 2019/3/16.
//  Copyright © 2019 shine. All rights reserved.
//

#include "topic26.h"
bool doesTree1HaveTree2(BiTree biRoot1, BiTree biRoot2);

bool hasSubtree(BiTree biRoot1, BiTree biRoot2){
    bool result = false;
    if(biRoot1 != NULL && biRoot2 != NULL){
        if(biRoot1->data == biRoot2->data){
            result = doesTree1HaveTree2(biRoot1, biRoot2);
        }
        if(!result){
            result = hasSubtree(biRoot1->left, biRoot2);
        }
        if(!result){
            result = hasSubtree(biRoot1->right, biRoot2);
        }
    }
    return result;
}

bool doesTree1HaveTree2(BiTree biRoot1, BiTree biRoot2){
    if(biRoot2 == NULL){
        return true;
    }
    if(biRoot1 == NULL){
        return false;
    }
    if(biRoot1->data != biRoot2->data){
        return false;
    }
    
    return doesTree1HaveTree2(biRoot1->left, biRoot2->left) && doesTree1HaveTree2(biRoot1->right, biRoot2->right);
}
