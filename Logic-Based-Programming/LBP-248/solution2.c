# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPrimeCount(int);

int main() {
    int arr[3][3], i, j, count = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            count = count + isPrimeCount(arr[i][j]);
        }
    }
    printf("%d",count);
    return 0;
}

int isPrimeCount(int n){
    int d,count = 0;
    while(n != 0){
        d = n % 10;
        if(d == 2 || d == 3 || d == 5 || d == 7)
            count++;
        n = n / 10;
    }
    return count;
}
