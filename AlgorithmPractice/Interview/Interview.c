//
//  Interview.c
//  AlgorithmPractice
//
//  Created by Shine on 2019/3/4.
//  Copyright © 2019 shine. All rights reserved.
//

#include "Interview.h"
#include "swap.h"
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

int partionMid(int arr[], int left, int right){
    int begin = left;
    int end = right;
    int pivot = arr[right];
    while (begin < end) {
        while (begin < end && arr[begin] <= pivot) {
            begin++;
        }
        while (begin < end && arr[end] >= pivot) {
            end--;
            
        }
        if(begin<end){
            swap(arr, begin, end);
        }
    }
    
    swap(arr, begin, right);    //将pivot移到正确的位置
    return begin;
}

int getMidNumber(int arr[],int len){
    int left = 0;
    int right = len-1;
    int pivotIndex = partionMid(arr, 0, right);
    int mid = (right - left)/2;
    while (mid!=pivotIndex) {
        if(pivotIndex < mid){
            pivotIndex = partionMid(arr, pivotIndex+1, right);
        }
        else if(pivotIndex > mid){
            pivotIndex = partionMid(arr, left, pivotIndex-1);
        }
    }
    return arr[mid];
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

//实现思路： 如果下标<mid去左区间找   ，如果下标>mid  去右区间找
int FindMid(int array[], int size)
{
    
    int mid = (size-1)/ 2;
    int left = 0;
    int right = size - 1;
    int index = 0;
    
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
