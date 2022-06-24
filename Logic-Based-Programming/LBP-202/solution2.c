# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int matrixSum(int [5][5], int, int);

int main() {
    int arr[5][5],i,j,m,n;
    scanf("%d %d",&n,&m);
    if((n>=1 && n<=5) && (m>=1 && m<=5)){
        for(i=0;i<n;i++){
            for(j=0;j<m;j++)
                scanf("%d",&arr[i][j]);
        }
        printf("%d",matrixSum(arr,n,m));
    }
    else
        exit(0);
    return 0;
}

int matrixSum(int arr[5][5], int n, int m){
    int i,j,sum=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            sum = sum + arr[i][j];
    }    
    return sum;
}
