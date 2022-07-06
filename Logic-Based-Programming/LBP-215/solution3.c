# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void maxEle(int [3][3]);

int main() {
    int arr[3][3], i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    maxEle(arr);
    return 0;
}

void maxEle(int arr[3][3]){
    int i, j, max;
    max = arr[0][0];
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(max < arr[i][j])
                max = arr[i][j];
        }
        printf("%d\n",max);
    }
}
