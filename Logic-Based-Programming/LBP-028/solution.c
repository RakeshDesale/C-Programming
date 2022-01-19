# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fib(int);
int numberOfWays(int);

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",numberOfWays(n));
    return 0;
}

int numberOfWays(int n){
    return fib(n+1);
}

int fib(int n){
    if (n==0 || n==1)
        return n;
    else
        return fib(n-1)+fib(n-2);
}
