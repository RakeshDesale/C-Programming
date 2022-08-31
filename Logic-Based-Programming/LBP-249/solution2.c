# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int rev(int);

int main() {
    int arr[3][3], i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            arr[i][j] = rev(arr[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int rev(int n){
    int r = 0,d;
    while(n != 0){
        d = n % 10;
        r = r * 10 + d;
        n = n / 10;
    }
    return r;
}
