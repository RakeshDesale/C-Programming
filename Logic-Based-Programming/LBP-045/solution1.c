# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPerfect(int);

int main() {
    int n;
    scanf("%d",&n);
    if(n>0){
        if(isPerfect(n))
            printf("true");
        else
            printf("false");
    }
    else
        exit(0);
    return 0;
}

int isPerfect(int n){
    int i,sum=0;
    for(i=1;i<n;i++){
        if(n%i==0)
            sum=sum+i;
    }
    if(sum==n)
        return 1;
    else
        return 0;
}
