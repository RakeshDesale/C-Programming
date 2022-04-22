# Another Approach

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[10][10],n,m,i,j,max;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    max=arr[0][0];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(max<arr[i][j])
                max = arr[i][j];
        }
        printf("%d ",max);
        max = 0;
    }
    return 0;
}
