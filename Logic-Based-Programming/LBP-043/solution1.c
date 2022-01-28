# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,d,sumodd=0,sumeven=0,prod=0;
    scanf("%d",&n);
    while(n!=0){
        d=n%10;
        if(d%2==0)
            sumeven=sumeven+d;
        else
            sumodd=sumodd+d;
        n=n/10;
    }
    prod=sumeven*sumodd;
    printf("%d",prod);
    return 0;
}
