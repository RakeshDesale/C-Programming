# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int countZero(int [3][3]);

int main() {
    int arr[3][3], i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    printf(countZero(arr) ? "Yes" : "No");
    return 0;
}

int countZero(int arr[3][3]){
    int i, j, count = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(arr[i][j] == 0)
                count++;
        }
    }
    return count >= 5;
}
