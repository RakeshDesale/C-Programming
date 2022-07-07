# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void transposeMatrix(int [3][3]);

int main() {
    int arr[3][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            scanf("%d",&arr[i][j]);
    }
    transposeMatrix(arr);
    return 0;
}

void transposeMatrix(int arr[3][3]){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d ",arr[j][i]);
        printf("\n");
    }
}
