# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void matrixColSum(int [3][3]);

int main() {
    int arr[3][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            scanf("%d",&arr[i][j]);
    }
    matrixColSum(arr);
    return 0;
}

void matrixColSum(int arr[3][3]){
    int i,j,sum;
    for(i=0;i<3;i++){
        sum=0;
        for(j=0;j<3;j++)
            sum = sum + arr[j][i];
        printf("%d\n",sum);
    }
}
