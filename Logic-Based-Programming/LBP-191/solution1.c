# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumOfDigits(int);

int main() {
    int n,res = 0;
    scanf("%d",&n);
abc:    res = sumOfDigits(n);
    if(res <= 26)
        printf("%c",res+64);
    else
        goto abc;
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
