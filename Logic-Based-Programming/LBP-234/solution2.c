# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void interchangeDiagonal(int [3][3]);

int main() {
    int arr[3][3], i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    interchangeDiagonal(arr);
    return 0;
}

void interchangeDiagonal(int arr[3][3]){
    int i, j, temp;
    for(i = 0; i < 3; i++){
        temp = arr[i][i];
        arr[i][i] = arr[i][3 - i - 1];
        arr[i][3 - i - 1] = temp;
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
}
