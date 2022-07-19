# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swapRows(int [3][3], int, int);

int main() {
    int arr[3][3], m, n, i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    scanf("%d %d", &m, &n);
    swapRows(arr, m, n);
    return 0;
}

void swapRows(int arr[3][3], int m, int n){
    int i, j, temp;
    for(i = 0; i < 3; i++){
        temp = arr[m - 1][i];
        arr[m - 1][i] = arr[n - 1][i];
        arr[n - 1][i] = temp;
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
}
