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

#include "graph.h"

#include "toOffer.h"    //剑指offer题目

#include "leetCode.h"

#include "Interview/Interview.h"

void searchFuc(void);
void sort(void);
void travalsalTree(void);
void linkListFun(void);
void toOfferPractice(void);
void leetCodePractice(void);
void playGraph(void);
void interviewPractice(void);

int main(){
//    sort();
//    searchFuc();
    travalsalTree();
//    linkListFun();
//    playGraph();
//    toOfferPractice();
//    interviewPractice();
//    leetCodePractice();
    return 0;
}

void sort(){
    //    int unsortArray[] = {5,2,7,4,1,0,9,8,6,3};
    int unsortArray[] = {5,2,7,4,1,9,8,6,3,0};
    int len = sizeof(unsortArray) / sizeof(*unsortArray);
        bubbleSort(unsortArray, len);
    //    selectionSort(unsortArray, len);
    //    insertionSort(unsortArray, len);
    //    quickSort(unsortArray, len);
    //    shellSort(unsortArray, len);
//    mergeSort(unsortArray, len);
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

void playGraph(){
    MGraph graph;
    graph =  buildMGraph();
    DFSTraverse(graph);
    
}

void travalsalTree(){
    BiTree tree = NULL;
    printf("请前序输入二叉树\n");
    createBiTree(&tree);
    printf("前序遍历结果是\n");
    preOrderTravalsal(tree);
    printf("\n");
//    printf("前序非递归遍历结果是\n");
//    preOrderNoTravalsal(tree);
//    printf("\n");
    printf("中序遍历结果是\n");
    inOrderTravalsal(tree);
    printf("\n");
//    printf("非递归中序遍历结果是\n");
//    inOrderNoTravalsal(tree);
//    printf("\n");
    printf("后序遍历结果是\n");
    postOrderTravalsal(tree);
    printf("\n");
//    printf("后序非递归遍历结果是:\n");
//    postOrderNoTravalsal(tree);
//    printf("\n");
//    printf("层次遍历结果是\n");
//    levelOrderTravalsal(tree);
//    printf("\n");
//    printf("Z字形层次遍历结果是:\n");
//    zLevelTravalsal(tree);
//    printf("\n");
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
//    status result = findNum(arr, row, column, 11);
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
    
    //题目9
//    stackQueue queue = createStackQueue();
//    enStackQueue(queue, 'c');
//    enStackQueue(queue, 'b');
//    enStackQueue(queue, 'a');
//    enStackQueue(queue, 'd');
//    qStackType data;
//    deStackQueue(queue, &data);
//    printf("第一个弹出的-%c\n",data);
//    deStackQueue(queue, &data);
//    printf("第二个弹出的-%c\n",data);
//    deStackQueue(queue, &data);
//    printf("第三个弹出的-%c\n",data);
//    deStackQueue(queue, &data);
//    printf("第四个弹出的-%c\n",data);
//    deStackQueue(queue, &data);
    
    
    //题目10
//    printf("第5个斐波拉契数列数为-%lld",Fibonacci(10));
//    printf("青蛙6个台阶的跳法为%d\n",jumpFloorRecursion(6));
    
    //题目14
//    int len = 8;
////    int result = maxProductAfterCuttingSolution1(len);
//    int result = maxProductAfterCuttingSolution2(len);
//    printf("长度为%d的绳子分割若干段后最大乘积为%d",len,result);
    
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
    
    //题目22
//    LinkList l;
//    l = createLinkList();
//    findKthToTail(l, 3);
    
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
    
    //题目26
    BiTree tree1 = NULL;
    BiTree tree2 = NULL;
    char arr[] = {'A','B','.','.','C','D','F','.','.','G','.','.','E','.','.'};
    int len = sizeof(arr)/sizeof(*arr);
    char arr2[] = {'C','D','F','.','.','.','E','.','.'};
//    char arr2[] = {'C','D','.','.','F','.','.'};
    int len2 = sizeof(arr2)/sizeof(*arr2);
    createBiTree2(&tree1, arr, len);
    createBiTree2(&tree2, arr2, len2);
    preOrderTravalsal(tree1);
    printf("\n");
    preOrderTravalsal(tree2);
    printf("\n");
    bool result = hasSubtree(tree1, tree2);
    printf(result?"tree1包含子树tree2":"tree1不包含子树tree2");
    
    
    //题目27
//    BiTree tree = NULL;
//    printf("请前序构建一颗二叉树:\n");
//    createBiTree(&tree);
//    printf("前序遍历结果:\n");
//    preOrderTravalsal(tree);
//    printf("\n");
//    mirrorRecursive(tree);
//    printf("镜像树前序遍历结果:\n");
//    preOrderTravalsal(tree);
    
    //题目28
//    BiTree tree = NULL;
//    printf("请前序构建一颗二叉树:\n");
//    createBiTree(&tree);
//    bool result = isSymmetricBiTree(tree);
//    printf("这棵树%s是对称二叉树",result ? "":"不");
    
    
    //题目50
//    char *testString = "abcbdfge";
//    printf("testString中得一个只出现一次的字符是%c\n",findFirstNotRepeatingChar(testString));
    
    //题目58
    //反转字符串
//    char str[] = "hello";
//    reverseString(str);
//    printf("反转之后的字符串为%s\n",str);
    
//    char str1[] = "i am a student.";
//    reverseSentence(str1);
//    printf("反转之后的句子为%s\n",str1);
    
    //题目63
//    int numbers[] = {9,11,8,5,7,12,16,14};
//    int len = sizeof(numbers)/sizeof(numbers[0]);
//    printf("最大股票收益为%d",maxPrice(numbers, len));
    
    
    //题目65
//    int num1 = 9;
//    int num2 = 17;
//    int sum = add(num1, num2);
//    printf("9+17 equalTo %d",sum);
//
//    newSwap(&num1, &num2);
//    printf("两个数交换后num1 = %d, num2 = %d",num1,num2);
    
}

void interviewPractice(){
//    char *str = "aaabbc";
//    int len = sizeof(str)/sizeof(str[0]);
//    compressString(str, len);
    
    //判断回文数
//    int number = 1234321;
//    printf(isPalindrome(number) ? "%d是回文数\n":"%d不是回文数\n",number);
    
//    char *numberStr = "12321";
//    bool result = isPalindromeStr(numberStr);
//    printf(result?"是回文字符串":"不是回文字符串");
    
    //无序数组查找中位数
    int arr[8] = {3,7,4,6,2,9,5,18};
    int len = sizeof(arr)/sizeof(*arr);
    printf("中位数-----%d",getMidNumber(arr, len));
}

void leetCodePractice(){
    printf("3*7的矩阵路线一共有%d种\n",uniquePaths(3, 7));
}
