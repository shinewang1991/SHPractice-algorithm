//
//  LinkList.h
//  AlgorithmPractice
//
//  Created by Shine on 07/01/2019.
//  Copyright © 2019 shine. All rights reserved.
//

#ifndef LinkList_h
#define LinkList_h

#include <stdio.h>

#endif /* LinkList_h */

typedef int ElementType;

typedef struct Node{
    ElementType data;
    struct Node *next;
}Node,*LinkList;


//头插法建立链表
LinkList createLinkList(void);


//尾插法建立链表
LinkList createLinkList2(void);

//链表中按序号查找
LinkList findKth(LinkList L, int x);

//链表中查找元素
int findLinklistElement(LinkList L, ElementType x);

//链表在第i-1个节点后插入节点
LinkList insertLinkList(LinkList L, int i, ElementType x);

//链表删除第i个节点
LinkList deleteLinkList(LinkList L, int i);

void printLinkList(LinkList lp);
