#include <stdio.h>
#include "NumClass.h"
#define true 1
#define false 0

int length(int n){
    int tmp = n;
    int count = 0;
    while(tmp > 0){
        count++;
        tmp = tmp / 10;
    }
    return count;
}

int palindromeRecursive(int numbers[],int start , int end){
    if(start >= end){
        return true;
    }
    if(numbers[start] != numbers[end]){
        return false;
    }else{
        return palindromeRecursive(numbers , start + 1 , end - 1);
    }
    
}

int isPalindrome(int n){
    int count = length(n);
    int numbers[count];
    for(int i = 0; i < count; i++){
        numbers[i] = n % 10;
        n /= 10;
    }
    int q =  palindromeRecursive(numbers , 0 , count - 1);
    if(q == 1){
        return true;
    }
    return false;
}

int intPow(int a, int b){
    int result = 1;
    while(b > 0){
        result *= a;
        b = b - 1;
    }
    return result;
}

int isArmstrongRecursive(int n, int size){
    if(n > 0){
    return intPow(n % 10 , size) + isArmstrongRecursive(n / 10 , size);
    }
   return false;
}
int isArmstrong(int n){
    int len = length(n);
    int q = isArmstrongRecursive(n , len);
    if(q == n){
        return true;
    }
    return false;
}


