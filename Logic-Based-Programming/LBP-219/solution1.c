# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[3][3], i, j, oddcount = 0, evencount = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(arr[i][j] % 2 == 0 && arr[i][j] != 0)
                evencount++;
            else if(arr[i][j] % 2 != 0 && arr[i][j] != 0)
                oddcount++;
        }
    }
    printf("%d\n%d",oddcount,evencount);
    return 0;
}
