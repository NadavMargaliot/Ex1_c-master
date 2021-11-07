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

int isPalindrome(int n){
        int original = n;
        int reversed = 0;
        int mod = 0;
        while(n != 0){
            mod = n % 10;
            reversed = reversed * 10 + mod;
            n /= 10;
        }
        if(original == reversed){
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

int isArmstrong(int n){
        int count = length(n);
        int tmp2 = n;
        int sum = 0;
        while(tmp2 > 0){
            sum +=  intPow((tmp2 % 10) , count);
            tmp2 = tmp2 / 10; 
        }
        if(sum == n){
            return true;
        }else{
            return false;
        }
    }

