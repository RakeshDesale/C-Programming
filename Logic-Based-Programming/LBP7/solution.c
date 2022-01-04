# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,d;
    scanf("%d",&n);
    if(n>0){
        while(n!=0){
            d=n%10;
            printf("%d ",d);
            n=n/10;
        }        
    }
    return 0;
}
