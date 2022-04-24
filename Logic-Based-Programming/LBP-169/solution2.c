# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void arrToMatrix(int [], int);

int main() {
    int n,arr[20],m,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    m = sqrt(n);
    arrToMatrix(arr,m);
    return 0;
}

void arrToMatrix(int arr[], int m){
    int i,j,k = 0;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++)
            printf("%d ",arr[k++]);
        printf("\n");
    }
}
