# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int m,n,i;
    scanf("%d %d",&m,&n);
    for(i=1;i<=n;i++)
        printf("%d ",m*i);
    return 0;
}
