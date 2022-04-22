# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void maxRevenue(int [10][10], int, int);

int main() {
    int arr[10][10],n,m,i,j;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    maxRevenue(arr,n,m);
    return 0;
}

void maxRevenue(int arr[10][10], int n, int m){
    int i,j,max;
    for(i=0;i<n;i++){
        max=arr[i][0];
        for(j=0;j<m;j++){
            if(max<arr[i][j])
                max = arr[i][j];
        }
        printf("%d ",max);
    }
}
