# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,d,a[20],i=0;
    scanf("%d",&n);
    if(n>=0){
        while(n!=0){
            d=n%2;
            a[i++]=d;
            n=n/2;
        }
        for(i=i-1;i>=0;i--)
            printf("%d",a[i]);
    }
    else
        exit(0);
    return 0;
}
