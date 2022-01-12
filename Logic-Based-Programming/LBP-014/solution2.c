# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,d;
    scanf("%d",&n);
    if(n>=0){
        if(n==0)
            printf("%d",n);
        else{
            while(n!=0){
                d=n%10;
                printf("%d",d);
                n=n/10;
            }
        }
    }
    else
        exit(0);
    return 0;
}
