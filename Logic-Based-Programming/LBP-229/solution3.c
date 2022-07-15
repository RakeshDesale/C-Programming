# Using Function

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
    int b[3][3], i, j , temp, k;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            b[i][j] = a[j][i];
    }    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            for(k = j + 1; k < 3; k++){
                if(b[i][j] > b[i][k]){
                    temp = b[i][j];
                    b[i][j] = b[i][k];
                    b[i][k] = temp;
                }
            }
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf("%d ",b[j][i]);
        printf("\n");
    }
}
