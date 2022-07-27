# Using Function

# Optimized Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int symmetricMat(int [3][3]);

int main() {
    int a[3][3], i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&a[i][j]);
    }
    printf(symmetricMat(a) ? "Yes" : "No");
    return 0;
}

int symmetricMat(int a[3][3]){
    int i, j, count = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(a[i][j] == a[j][i])
                count++;
        }
    }
    return count == 9;
}
