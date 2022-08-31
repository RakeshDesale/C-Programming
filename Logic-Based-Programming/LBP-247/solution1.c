# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[3][3], i, j, k, factors, sum = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            factors = 0;
            for(k = 1; k <= arr[i][j]; k++){
                if(arr[i][j] % k == 0)
                    factors++;
            }
            if(factors == 2)
                sum = sum + arr[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}
