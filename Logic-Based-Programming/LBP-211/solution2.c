# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int diagonalProd(int [3][3]);

int main() {
    int arr[3][3], i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    printf("%d",diagonalProd(arr));
    return 0;
}

int diagonalProd(int arr[3][3]){
    int i , j, prod = 1;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i == j)
                prod = prod * arr[i][j];
        }
    }
    return prod;
}
