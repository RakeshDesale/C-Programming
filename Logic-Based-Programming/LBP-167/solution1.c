# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n,i,fact = 1,count = 0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        fact = fact * i;
    while(fact!=0){
        if(fact%10 == 0)
            count++;
        else
            break;
        fact = fact/10;
    }
    printf("%d",count);
    return 0;
}
