# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int oppDiagonalProd(int [3][3]);

int main() {
    int arr[3][3], i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    printf("%d",oppDiagonalProd(arr));
    return 0;
}

int oppDiagonalProd(int arr[3][3]){
    int i, prod = 1;
    for(i = 0; i < 3; i++)
        prod = prod * arr[i][3 - i - 1];
    return prod;
}
