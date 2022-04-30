# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPrime(int);

int main() {
    int n,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(isPrime(i))
            printf("%d ",i);
    }
    return 0;
}

int isPrime(int n){
    int i,factors = 0;
    for(i=1;i<=n;i++){
        if(n%i==0)
            factors++;
    }
    return factors==2;
}
