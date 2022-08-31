# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[3][3], i, j, d, r, temp;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            temp = arr[i][j];
            r = 0;
            while(temp != 0){
                d = temp % 10;
                r = r * 10 + d;
                temp = temp / 10;
            }
            printf("%d ",r);
        }
        printf("\n");
    }
    return 0;
}
