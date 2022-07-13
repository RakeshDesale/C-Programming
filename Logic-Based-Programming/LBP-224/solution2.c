# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void mulMatrix(int [3][3], int [3][3]);

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
    mulMatrix(a, b);
    return 0;
}

void mulMatrix(int a[3][3], int b[3][3]){
    int c[3][3], i, j, k;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            c[i][j] = 0;
            for(k = 0; k < 3; k++)
            c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }    
}
