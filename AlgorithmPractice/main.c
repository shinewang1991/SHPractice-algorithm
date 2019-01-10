//
//  main.c
//  CDemo
//
//  Created by shine on 2018/8/14.
//  Copyright (c) 2018 ___ORGANIZATIONNAME___. All rights reserved.
//

#include <stdio.h>
#include "bubbleSort.h"
#include "selectionSort.h"
#include "insertionSort.h"
#include "quickSort.h"
#include "shellSort.h"
#include "mergeSort.h"

#include "binarySearch.h"

#include "binaryTree.h"

#include "LinkList.h"

#include "toOffer.h"    //剑指offer题目

void searchFuc(void);
void sort(void);
void travalsalTree(void);
void linkListFun(void);
void toOfferPractice(void);

int main(){
//    searchFuc();
//    travalsalTree();
//    linkListFun();
    toOfferPractice();
    return 0;
}

void sort(){
    //    int unsortArray[] = {5,2,7,4,1,0,9,8,6,3};
    int unsortArray[] = {5,2,7,4,1,9,8,6,3,0};
    int len = sizeof(unsortArray) / sizeof(*unsortArray);
    //    bubbleSort2(unsortArray, len);
    //    selectionSort(unsortArray, len);
    //    insertionSort(unsortArray, len);
    //    quickSort(unsortArray, len);
    //    shellSort(unsortArray, len);
    mergeSort(unsortArray, len);
    for(int i = 0 ; i < len ; i++){
        printf("%d\n",unsortArray[i]);
    }
}

void searchFuc(){
//    int arr[] = {5,2,7,4,1,9,8,6,3,0};
    int arr[] = {0,1,2,3,4,5,6,7,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    binarySearch(arr, len, 2);
}

void linkListFun(){
    LinkList lp;
//    lp = createLinkList();
    lp = createLinkList2();
    printLinkList(lp);
//    findKth(lp, 1);
//    findLinklistElement(lp, 5);
//    insertLinkList(lp, 3, 4);
    deleteLinkList(lp, 1);
    printLinkList(lp);
}

void travalsalTree(){
    BiTree tree = NULL;
    printf("请前序输入二叉树\n");
    createBiTree(&tree);
    printf("前序遍历结果是\n");
    preOrderTravalsal(tree);
    printf("\n");
    printf("中序遍历结果是\n");
    inOrderTravalsal(tree);
    printf("\n");
    printf("后序遍历结果是\n");
    postOrderTravalsal(tree);
    printf("层次遍历结果是\n");
    levelOrderTravalsal(tree);
}

void toOfferPractice(){
    
    //题目3
    int arr[] = {0,1,2,3,3,4,5,6,7,7};
    int len = sizeof(arr)/sizeof(*arr);
    int deplicatedNum;
    result result = findDuplicateNum(arr, len,&deplicatedNum);
    if(result == 1){
        printf("找到了%d\n",deplicatedNum);
    }
    else{
        printf("没找到");
    }
    
    //题目5
//    char str[] = "Hello World";
//    replaceStr(str);
//    printf("%s",str);
    
    //题目6
//    LinkList l;
//    l = createLinkList();
//    printLinkList(l);
//    recursionPrintList(l);
    
    //题目24
//    LinkList l;
//    l = createLinkList();
//    printLinkList(l);
//    l = reverseLinkList(l);
//    printLinkList(l);
    
}

