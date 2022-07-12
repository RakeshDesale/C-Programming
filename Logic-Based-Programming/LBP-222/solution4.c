# Using Function

# Optimized Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void addMatrix(int [3][3], int [3][3]);

int main() {
    int a[3][3], b[3][3], i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&a[i][j]);
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&b[i][j]);
    }
    addMatrix(a, b);
    return 0;
}

void addMatrix(int a[3][3], int b[3][3]){
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0;j < 3; j++)
            printf("%d ",a[i][j] + b[i][j]);
        printf("\n");
    }
}
