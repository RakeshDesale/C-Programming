# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void checkPrime(int);

int main() {
    int n;
    scanf("%d",&n);
    if(n>1)
        checkPrime(n);
    else
        exit(0);
    return 0;
}


void checkPrime(int n){
    int i,flag=0;
    for (i=2;i<=n/2;i++){
        if(n%i==0){
            printf("false");
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("true");
}
