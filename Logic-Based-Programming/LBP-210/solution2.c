# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumFirstLast(int [3][3]);

int main() {
    int arr[3][3], i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    printf("%d",sumFirstLast(arr));
    return 0;
}

int sumFirstLast(int arr[3][3]){
    return (arr[0][0] + arr[2][2]);
}
