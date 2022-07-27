# Optimized Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[3][3], i, j, count = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&a[i][j]);
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(a[i][j] == a[j][i])
                count++;
        }
    }
    printf((count == 9) ? "Yes" : "No");
    return 0;
}
