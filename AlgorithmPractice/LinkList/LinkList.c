//
//  LinkList.c
//  AlgorithmPractice
//
//  Created by Shine on 07/01/2019.
//  Copyright © 2019 shine. All rights reserved.
//

#include "LinkList.h"
#include <stdlib.h>


//头插法建立链表
LinkList createLinkList(){
    Node *L;
    L = (Node *)malloc(sizeof(Node));
    if(L == NULL){
        printf("内存不足");
        return NULL;
    }
    
    L->next = NULL;
    ElementType data;
    printf("请输入单链表的数据：");
    while (scanf("%d",&data)!=EOF) {
        Node *p;
        p = (Node *)malloc(sizeof(Node));
        p->data = data;
        p->next = L->next;
        L->next = p;
    }
    return L;
}


//尾插法建立链表
LinkList createLinkList2(){
    Node *L;
    Node *r;
    L = (Node *)malloc(sizeof(Node));
    if(L == NULL){
        printf("内存不足");
        return NULL;
    }
    L->next = NULL;
    r = L;   //头结点指针不能破坏。所以需要另申请个指针初始指向到头结点。
    ElementType x;
    printf("请输入单链表的数据：");
    while (scanf("%d",&x) != EOF) {
        Node *p;
        p = (Node *)malloc(sizeof(Node));
        p->data = x;
        r->next = p;
        r = p;
    }
    r->next = NULL;
    return L;
}

//按序号查找
LinkList findKth(LinkList L, int x){
    Node *p = L;
    int tempi = 1;
    while (p!=NULL && tempi<x) {
        p = p->next;
        tempi++;
    }
    
    if(tempi == x){
        printf("找到了---%d",p->data);
        return p;
    }
    else{
        printf("没找到");
        return NULL;
    }
}


//按值查找
int findLinklistElement(LinkList L, ElementType x){
    int result = -1;
    Node *p = L;
    while (p!=NULL && p->data!=x) {
        p = p->next;
    }
    
    if(p!=NULL){
        printf("找到了");
        result = 1;
    }
    else{
        printf("没有找到");
    }
    
    return result;
}

LinkList insertLinkList(LinkList L, int i, ElementType x){
    LinkList p;
    LinkList t;
    if(i==1){   //i==1插入到头节点
        p = (Node *)malloc(sizeof(Node));
        p->data = x;
        p->next = L;
        return p;
    }
    
    t = findKth(L, i-1);
    if(t == NULL){
        printf("参数错误");
        return NULL;
    }
    else{
        p = (Node *)malloc(sizeof(Node));
        p->data = x;
        p->next = t->next;
        t->next = p;
        return L;
    }
}

LinkList deleteLinkList(LinkList L, int i){
    LinkList t;     //保存i-1个节点.
    LinkList p;
    if(i == 1){     //删除的是第一个节点
        p = L;
        if(L!=NULL){
            L = L->next;
        }
        else{
            return NULL;
        }
        free(p);
        return L;
    }
    
    t = findKth(L, i-1);
    if(t==NULL){
        printf("第%d个节点不存在",i-1);
        return NULL;
    }
    else if(t->next == NULL){
        printf("第%d个节点不存在",i);
        return NULL;
    }
    else{
        p = t->next;
        t->next = p->next;
        free(p);
        return L;
    }
}

void printLinkList(LinkList lp){
    LinkList node = lp->next;   //头结点不打印
    while (node != NULL) {
        printf("%d-",node->data);
        node = node->next;
    }
    printf("\n");
}
