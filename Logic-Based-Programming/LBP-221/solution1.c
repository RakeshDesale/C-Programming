# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[3][3], b[3][3], i, j, flag = 1;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&a[i][j]);
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%d",&b[i][j]);
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            if(a[i][j] != b[i][j]){
                flag = 0;
                break;
            }
    }
    printf((flag == 1)?"Yes":"No");
    return 0;
}
