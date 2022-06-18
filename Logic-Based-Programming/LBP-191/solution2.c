# Using Loop

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumOfDigits(int);

int main() {
    int n;
    scanf("%d",&n);
    while(1){
        if(n >= 1 && n <= 26){
            printf("%c",n+64);
            break;
        }
        else
            n = sumOfDigits(n);
    }
    return 0;
}

int sumOfDigits(int n){
    int d, sum = 0;
    while(n != 0){
        d = n%10;
        sum = sum + d;
        n = n / 10;
    }
    return sum;
}
