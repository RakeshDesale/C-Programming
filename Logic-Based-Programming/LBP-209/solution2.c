# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumOppDiagonal(int [3][3]);

int main() {
    int arr[3][3], i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    printf("%d",sumOppDiagonal(arr));
    return 0;
}

int sumOppDiagonal(int arr[3][3]){
    int i, sum = 0;
    for(i = 0; i < 3; i++)
        sum = sum + arr[i][3 - i - 1];
    return sum;
}
