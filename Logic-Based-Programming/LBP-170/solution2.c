# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void matrixToArr(int [10][10], int, int);

int main() {
    int m,n,arr[10][10],i,j;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    }
    matrixToArr(arr,m,n);
    return 0;
}

void matrixToArr(int arr[10][10], int m, int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            printf("%d ",arr[i][j]);
    }
}
