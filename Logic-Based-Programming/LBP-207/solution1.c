# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[3][3], i, j, sum = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    for(i = 0; i < 3; i++){
        sum = 0;
        for(j = 0; j < 3; j++)
            sum = sum + arr[j][i];
        printf("%d\n",sum);
    }
    return 0;
}
