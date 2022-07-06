# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int minEle(int [3][3]);

int main() {
    int arr[3][3], i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    printf("%d",minEle(arr));
    return 0;
}

int minEle(int arr[3][3]){
    int i, j, min;
    min = arr[0][0];
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(min > arr[i][j])
                min = arr[i][j];
        }
    }
    return min;
}
