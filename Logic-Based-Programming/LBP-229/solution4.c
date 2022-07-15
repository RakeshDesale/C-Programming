# Using Function and without Using Second 2D Array

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sortColEle(int [3][3]);

int main() {
    int a[3][3], i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&a[i][j]);
    }
    sortColEle(a);
    return 0;
}

void sortColEle(int a[3][3]){
    int i, j, temp, k;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            for(k = j + 1; k < 3; k++){
                if(a[j][i] > a[k][i]){
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
}
