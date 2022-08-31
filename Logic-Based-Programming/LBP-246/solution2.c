# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumOfOddIndexedRowCol(int [3][3]);

int main() {
    int arr[3][3], i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    printf("%d",sumOfOddIndexedRowCol(arr));
    return 0;
}

int sumOfOddIndexedRowCol(int arr[3][3]){
    int i, j, sum = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if((i + j) % 2 != 0)
                sum = sum + arr[i][j];
        }
    }
    return sum;
}
