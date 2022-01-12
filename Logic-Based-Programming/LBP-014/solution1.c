# Using Standard Mathematical Formula

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,d,rev=0;
    scanf("%d",&n);
    if (n>=0){
        if (n==0)
            printf("%d",n);
        else{
            while(n!=0){
                d=n%10;
                rev=rev*10+d;
                n=n/10;
            }
            printf("%d",rev);
        }
    }
    else
        exit(0);
    return 0;
}
