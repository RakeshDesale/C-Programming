# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[3][3], m, n, i, j, temp;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    scanf("%d %d", &m, &n);
    for(i = 0; i < 3; i++){
        temp = arr[m - 1][i];
        arr[m - 1][i] = arr[n - 1][i];
        arr[n - 1][i] = temp;
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}
