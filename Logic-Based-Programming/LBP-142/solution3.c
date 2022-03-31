# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int multipleArr(int, int);

int main() {
    int m,n,i;
    scanf("%d %d",&m,&n);
    for(i=1;i<=n;i++)
        printf("%d ",multipleArr(m, i));
    return 0;
}

int multipleArr(int m, int i){
    return m*i;
}
