# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int revDigit(int);

int main() {
    int n,d = 0;
    scanf("%d",&n);
    n = revDigit(n);
    while(n!=0){
        d = n % 10;
        if(d % 2 == 0)
            printf("%d",d + 1);
        else
            printf("%d",d - 1);
        n = n / 10;
    }
    return 0;
}

int revDigit(int n){
    int d,rev = 0;
    while(n != 0){
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }
    return rev;
}
