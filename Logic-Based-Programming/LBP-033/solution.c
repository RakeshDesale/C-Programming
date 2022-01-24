# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,d,sum=0;
    scanf("%d",&n);
    if(n>0){
        while(n!=0){
            d=n%10;
            if(d%2!=0)
                sum=sum+d;
            n=n/10;
        }
        printf("%d",sum);
    }
    else
        exit(0);
    return 0;
}
