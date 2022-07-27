# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void scalarMatMul(int [3][3], int);

int main() {
    int arr[3][3], m, i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    scanf("%d",&m);
    scalarMatMul(arr, m);
    return 0;
}

void scalarMatMul(int arr[3][3], int m){
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf("%d ",arr[i][j] * m);
        printf("\n");
    }
}
