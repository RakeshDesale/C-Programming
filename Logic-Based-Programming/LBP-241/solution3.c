# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumOfEvenIdexedRow(int [3][3]);

int main() {
    int arr[3][3] , i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    printf("%d",sumOfEvenIdexedRow(arr));
    return 0;
}

int sumOfEvenIdexedRow(int arr[3][3]){
    int i, j, sum = 0;
    for(i = 0; i < 3; i++){
        if(i % 2 == 0){
            for(j = 0; j < 3; j++)
                sum = sum + arr[i][j];
        }
    }
    return sum;
}
