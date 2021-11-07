#include <stdio.h>
#include <math.h>
#include "NumClass.h"
#define true 1
#define false 0

int factorialInt(int n){
    int result = 1;
    for(int i = 1; i <= n; i++){
        result *= i;
    }
    return result;
}

int isPrime(int n){
    if(n == 1){
        return 1;
    }
    int i = 2;
    while(i <= (n / 2)){
        if(n % i == 0){
            return false;
        }
        i++;
    }
    return true;
}

int isStrong(int n){
    int sum = 0;
    int tmp = n;
    while(tmp > 0){
        sum += factorialInt(tmp % 10);
        tmp /= 10;
    }
    if(sum == n){
        return true;
    }
    return false;
}
