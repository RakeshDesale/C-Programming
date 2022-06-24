# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printMatrix(int [5][5], int, int);

int main() {
    int arr[5][5],n,m,i,j;
    scanf("%d",&n);
    scanf("%d",&m);
    if((n>=1 && n<=5) && (m>=1 && m<=5)){
        for(i=0;i<n;i++){
            for(j=0;j<m;j++)
                scanf("%d",&arr[i][j]);
        }
        printMatrix(arr,n,m);
    }
    else
        exit(0);
    return 0;
}

void printMatrix(int arr[5][5], int n, int m){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }    
}
