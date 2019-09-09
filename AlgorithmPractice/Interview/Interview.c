//
//  Interview.c
//  AlgorithmPractice
//
//  Created by Shine on 2019/3/4.
//  Copyright © 2019 shine. All rights reserved.
//

#include "Interview.h"
#include "swap.h"
#include <stdlib.h>
void compressString(char *input,int len){
    int i = 0;
    int count = 1;
    while (input[i]!= '\0' && i <= len-1) {
        if(input[i+1] == input[i]){
            count++;
        }
        else{
            printf("%c%d",input[i],count);
            count = 1;
        }
        i++;
    }
    printf("\n");
}

char* compressString1(char *input, int len){
    char result[len];
    char *p = input;
    int i = 0;
    int count = 1;
    while (p[i] != '\0' && i<=len-1) {
        if(p[i+1] == p[i]){
            count++;
        }
        else{
            if(count >=10 && count < 100){
                int d1 = count % 10;
                int d2 = (count / 10) % 10;
                result[i++] = p[i];
                result[i++] = d2 + '0';
                result[i++] = d1 + '0';
            }
            else{
                result[i++] = p[i];
                result[i++] = count + '0';
            }
            
            count = 1;
        }
    }
    return result;
    
}

bool isPalindrome(int number){
    int reversedNum = 0;
    int n = number;
    int reminder = 0;
    while (n!=0) {
        reminder = n % 10;
        reversedNum = reversedNum * 10 + reminder;
        n/=10;
    }
    if(reversedNum == number){
        return true;
    }
    else{
        return false;
    }
}

bool isPalindromeStr(char *numberStr){
    if(numberStr == NULL){
        return false;
    }

    char *start = numberStr;
    char *end = numberStr;
    while (*end != '0') {
        end++;
    }
    end--;
    while (start<=end) {
        if(*start != *end){
            return false;
        }
        ++start;
        --end;
    }
    return true;
}

int PartionMid(int array[], int left ,int right)
{
    
    int key = array[right];
    int begin = left;
    int end = right;
    
    while (begin < end)
    {
        while (begin < end&&array[begin] <=key)   //注意是<=
        {
            begin++;
        }
        
        while (begin < end&&array[end] >=key)
        {
            end--;
        }
        
        if (begin < end)
        {
            swap(array, begin, end);
        }
    }
    swap(array, begin, right);
    return begin;
    
}

//实现思路： 快排思想，找到中位数，获取中位数的下标，和数组的middle下标比较。递归查找
int FindMid(int array[], int size)
{
    
    int mid = (size-1)/ 2;
    int left = 0;
    int right = size - 1;
    int index = 0;   //中位数下标
    
    index = PartionMid(array, left, right);
    
    while (index != mid)
    {
        if (index < mid)  //去右区间找
        {
            index = PartionMid(array, index+1, right);
        }
        else if (index>mid)//去左区间找
        {
            index = PartionMid(array, left, index-1);
        }
    }
    return array[mid];
    
}

int* unionArray(int *a, int len1, int *b, int len2, int *lengh){
    int len = len1 + len2;
//    int *result = (int *)malloc(sizeof(int) * len);
    int *result = calloc(len, sizeof(int));
    for(int i = 0;i < len1; i++){
        result[i] = a[i];
    }
    int index = len1;
    
    for(int i = 0; i < len2; i++){
        int temp = b[i];
        int insert = 1;
        for(int j = 0; j < len1; j++){
            if(a[j] == temp){
                insert = 0;
                break;
            }
        }
        if(insert){
            result[index++] = temp;
        }
    }
    *lengh = index;
    return result;
}


int getNumberIndex(int *arr, int len, int value){
    int middle = (len - 1)/2;
    int left = 0;
    int right = len-1;
    
    int returnIndex = right;
    int insertIndex = 0;
    while (left<right) {
        int middleValue = arr[middle];
        if(middleValue > value){
            right = middle - 1;
            insertIndex = left+1;
        }
        else if(middleValue < value){
            left = middle + 1;
            insertIndex = left+1;
        }
        else{
            if(middle < returnIndex){
                returnIndex = middle;
                right = middle;
            }
        }
        middle = (left + right)/2;
    }
    if(arr[returnIndex] != value){
        returnIndex = insertIndex;
    }
    return returnIndex;
}


int getNumberOf1(int *arr, int len){
    int numberOf1 = 0;
    int maxValue = 0;
    for(int i = 0; i < len; i++){
        if(arr[i] == 1){
            numberOf1++;
            if(numberOf1 > maxValue){
                maxValue = numberOf1;
            }
        }
        else{
            numberOf1=0;
        }
    }
    return maxValue;
}

//int getMaxValue(int *arr, int len){
//    int numberOf1 = 0;
//    int numberOf0 = 0;
//    for(int i = 0 ;i < len - 1; i++){
//        if(arr[i+1] == arr[i]){
//            if(arr[i] == 1){
//                numberOf1++;
//            }
//            else{
//                numberOf0++;
//            }
//        }
//    }
//}

#pragma mark -求无序数组中位数

int partSort(int arr[], int start, int end) {
    int low = start;
    int high = end;
    
    // 读取关键字
    int key = arr[end];
    while (low < high) {
        // 左边的值比key大的值
        while (low < high && arr[low] <= key) {
            ++low;
        }
        
        // 右边找比key小的值
        while (low < high && arr[high] >= key) {
            --high;
        }
        
        if (low < high) {
            // 找到之后交换左右的值
            int temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
        }
        
    }
    
    int temp = arr[high];
    arr[high] = arr[end];
    arr[end] = temp;
    
    return low;
}

// 查找无序数组的中位数
int findMedian(int arr[], int len) {
    int low = 0;
    int high = len - 1;
    
    int mid = (len - 1) >> 1;
    int div = partSort(arr, low, high);
    
    while (div != mid) {
        if (mid < div) {
            // 左半区查找
            div = partSort(arr, low, div -1);
        }
        else {
            // 右半区查找
            div = partSort(arr, div + 1, high);
        }
    }
    
    // 找到中位数
    return arr[mid];
}


