# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[3][3], b[10], i, j, temp, k=0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            b[k++] = arr[i][j];
    }
    for(i = 0; i < k; i++){
        for(j = i + 1; j < k; j++){
            if(b[i] > b[j]){
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    k = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            arr[i][j] = b[k++];
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}
