# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[3][3], i, j, d, count1, count2 = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&arr[i][j]);
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            count1 = 0;
            while(arr[i][j] != 0){
                d = arr[i][j] % 10;
                if(d == 2 || d == 3 || d == 5 || d == 7)
                    count1++;
                arr[i][j] = arr[i][j] / 10;
            }
            count2 = count2 + count1;
        }
    }
    printf("%d",count2);
    return 0;
}
