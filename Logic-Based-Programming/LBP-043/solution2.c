# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int discount(int);

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",discount(n));
    return 0;
}

int discount(int n){
    int d,sumeven=0,sumodd=0;
    while(n!=0){
        d=n%10;
        if(d%2==0)
            sumeven=sumeven+d;
        else
            sumodd=sumodd+d;
        n=n/10;
    }
    return sumeven*sumodd;
}
