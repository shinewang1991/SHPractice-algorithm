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
//    int arr[] = {0,1,2,3,3,4,5,6,7,7};
//    int len = sizeof(arr)/sizeof(*arr);
//    int deplicatedNum;
//    result result = findDuplicateNum(arr, len,&deplicatedNum);
//    if(result == 1){
//        printf("找到了%d\n",deplicatedNum);
//    }
//    else{
//        printf("没找到");
//    }
    
    //题目4
//    int arr[][4] = {
//        {1,2,8,9},
//        {2,4,9,12},
//        {4,7,10,13},
//        {6,8,11,15}
//    };
//    int row = sizeof(arr)/sizeof(arr[0]);
//    int column = sizeof(arr[0])/sizeof(arr[0][0]);
//    status result = findNum(arr, row, column, 3);
//    printf(result == 1 ? "找到了":"没找到");
    
    //题目5
//    char str[] = "Hello World";
//    replaceStr(str);
//    printf("%s",str);
    
    //题目6
//    LinkList l;
//    l = createLinkList();
//    printLinkList(l);
//    recursionPrintList(l);
    
    //题目10
//    printf("第5个斐波拉契数列数为-%lld",Fibonacci(10));
    
    //题目14
    int len = 8;
//    int result = maxProductAfterCuttingSolution1(len);
    int result = maxProductAfterCuttingSolution2(len);
    printf("长度为%d的绳子分割若干段后最大乘积为%d",len,result);
    
    //题目15
//    int num = 9;
//    printf("9的二进制表示中有%d个1",numberOf1(num));
    
    //题目16
//    double base = 2.0;
//    int exponent = -2;
//    printf("%f的%d次方结果为%f",base,exponent,Power(base, exponent));
    
    //题目18
//    Node *linkList = createLinkList2();
//    Node *pToBeDelete = linkList;
//    int i = 0;
//    while (pToBeDelete!=NULL && pToBeDelete->next!=NULL && i<9) {
//        pToBeDelete = pToBeDelete->next;
//        i++;
//    }
//    deleteNode(&linkList, pToBeDelete);
//    printLinkList(linkList);
    
    //题目24
//    LinkList l;
//    l = createLinkList();
//    printLinkList(l);
//    l = reverseLinkList(l);
//    printLinkList(l);
    
    //题目25
//    Node *nodeA = createLinkList2();
//    printLinkList(nodeA);
//    Node *nodeB = createLinkList2();
//    printLinkList(nodeB);
//    Node *mergedNode = mergeLinkList(nodeA, nodeB);
//    printLinkList(mergedNode);
    
    //题目65
//    int num1 = 9;
//    int num2 = 17;
//    int sum = add(num1, num2);
//    printf("9+17 equalTo %d",sum);
//
//    newSwap(&num1, &num2);
//    printf("两个数交换后num1 = %d, num2 = %d",num1,num2);
    
}

