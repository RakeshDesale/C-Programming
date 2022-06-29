# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void matrixRowSum(int [3][3]);

int main() {
    int arr[3][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            scanf("%d",&arr[i][j]);
    }
    matrixRowSum(arr);
    return 0;
}

void matrixRowSum(int arr[3][3]){
    int i,j,sum;
    for(i=0;i<3;i++){
        sum=0;
        for(j=0;j<3;j++)
            sum = sum + arr[i][j];
        printf("%d\n",sum);
    }
}
