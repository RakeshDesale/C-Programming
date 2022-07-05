# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int maxEle(int [3][3]);

int main() {
    int arr[3][3], i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    printf("%d",maxEle(arr));
    return 0;
}

int maxEle(int arr[3][3]){
    int i, j, max;
    max = arr[0][0];
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(max < arr[i][j])
                max = arr[i][j];
        }
    }
    return max;
}
