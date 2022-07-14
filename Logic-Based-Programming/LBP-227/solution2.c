# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sortRowEle(int [3][3]);

int main() {
    int arr[3][3], i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    sortRowEle(arr);
    return 0;
}

void sortRowEle(int arr[3][3]){
    int i, j, k, temp;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            for(k = j + 1; k < 3; k++){
                if(arr[i][j] > arr[i][k]){
                    temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
}
