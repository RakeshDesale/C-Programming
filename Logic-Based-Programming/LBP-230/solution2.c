# Optimized Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[3][3], i, j, temp, k;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&a[i][j]);
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            for(k = j + 1; k < 3; k++){
                if(a[j][i] < a[k][i]){
                    temp = a[j][i];
                    a[j][i] = a[k][i];
                    a[k][i] = temp;
                }
            }
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
