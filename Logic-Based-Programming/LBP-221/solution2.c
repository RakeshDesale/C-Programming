# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int compareMatrix(int [3][3], int [3][3]);

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
    printf((compareMatrix(a, b))?"Yes":"No");
    return 0;
}

int compareMatrix(int a[3][3], int b[3][3]){
    int i, j, flag = 1;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            if(a[i][j] != b[i][j]){
                flag = 0;
                break;
            }
    }
    return flag;
}
