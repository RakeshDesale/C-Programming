# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int m,n,arr[10][10],i,j;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            printf("%d ",arr[i][j]);
    }
    return 0;
}
