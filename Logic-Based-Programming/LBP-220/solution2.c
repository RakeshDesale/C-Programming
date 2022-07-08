# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int identityMatrix(int [3][3]);

int main() {
    int arr[3][3], i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    printf((identityMatrix(arr))?"Yes":"No");
    return 0;
}

int identityMatrix(int arr[3][3]){
    int i, j, flag = 1;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i == j && arr[i][j] != 1){
                flag = 0;
                break;
            }
            if(i != j && arr[i][j] != 0){
                flag = 0;
                break;
            }
        }
    }
    return flag;
}
