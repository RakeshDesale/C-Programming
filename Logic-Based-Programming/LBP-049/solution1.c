# Using While Loop

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPrime(int);

int main() {
    int n;
    scanf("%d",&n);
    while(1){
        if(isPrime(n)){
            printf("%d",n);
            break;
        }
        n++;
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
