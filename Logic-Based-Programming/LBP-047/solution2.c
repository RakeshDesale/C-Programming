# Optimized Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int oddEven(int);

int main() {
    int n;
    scanf("%d",&n);
    printf(oddEven(n)?"Evenish":"Oddish");
    return 0;
}

int oddEven(int n){
    int sum=0;
    while(n!=0){
        sum=sum+n%10;
        n=n/10;
    }
    return(sum%2==0);
}
