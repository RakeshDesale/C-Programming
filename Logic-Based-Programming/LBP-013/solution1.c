# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,count=0;
    scanf("%d",&n);
    if(n>0){
        while(n!=0){
            n=n/10;
            count++;
        }
        printf("%d",count);
    }
    else
        exit(0);
    return 0;
}
