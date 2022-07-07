# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void minEle(int [3][3]);

int main() {
    int arr[3][3], i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    minEle(arr);
    return 0;
}

void minEle(int arr[3][3]){
    int i, j, min;
    for(i = 0; i < 3; i++){
        min = arr[i][0];
        for(j = 0; j < 3; j++){
            if(min > arr[i][j])
                min = arr[i][j];
        }
        printf("%d\n",min);
    }
}
