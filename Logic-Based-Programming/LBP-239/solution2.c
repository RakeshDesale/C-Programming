# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printDiagonalEle(int [3][3]);

int main() {
    int arr[3][3], i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    printDiagonalEle(arr);
    return 0;
}

void printDiagonalEle(int arr[3][3]){
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i == j)
                printf("%d ",arr[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
}
