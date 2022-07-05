# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[3][3], i, j, max;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    max = arr[0][0];
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(max < arr[i][j])
                max = arr[i][j];
        }
    }
    printf("%d",max);
    return 0;
}
