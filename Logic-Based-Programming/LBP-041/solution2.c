# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int generateOTP(int);

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",generateOTP(n));
    return 0;
}

int generateOTP(int n){
    int d,prod=1;
    while(n!=0){
        d=n%10;
        prod=prod*d;
        n=n/10;
    }
    return prod;
}
