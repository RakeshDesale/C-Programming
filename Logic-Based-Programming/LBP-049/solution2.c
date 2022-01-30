# Using For Loop

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPrime(int);

int main() {
    int n,i;
    scanf("%d",&n);
    for(i=n;;i++){
        if(isPrime(i)){
            printf("%d",i);
            break;
        }
    }
    return 0;
}

int isPrime(int n){
    int factors=0,i;
    for(i=1;i<=n;i++){
        if(n%i==0)
            factors++;
    }
    return factors==2;
}
