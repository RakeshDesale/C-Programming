# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,k,a,sum=0;
    scanf("%d %d %d",&i, &j, &k);
    for(a=i;a<j;a++)
        sum=sum+a;
    for(a=j;a>=k;a--)
        sum=sum+a;
    printf("%d",sum);
    return 0;
}
