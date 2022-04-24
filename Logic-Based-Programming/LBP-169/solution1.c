# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,arr[20],m,i,j,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    m = sqrt(n);
    for(i=0;i<m;i++){
        for(j=0;j<m;j++)
            printf("%d ",arr[k++]);
        printf("\n");
    }
    return 0;
}
