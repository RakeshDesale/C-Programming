# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swapCols(int [3][3], int, int);

int main() {
    int arr[3][3], m, n, i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    scanf("%d %d", &m, &n);
    swapCols(arr, m, n);
    return 0;
}

void swapCols(int arr[3][3], int m, int n){
    int i, j, temp;
    for(i = 0; i < 3; i++){
        temp = arr[i][m - 1];
        arr[i][m - 1] = arr[i][n - 1];
        arr[i][n - 1] = temp;
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
}
