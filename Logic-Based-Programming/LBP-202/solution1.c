# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[5][5],i,j,m,n,sum=0;
    scanf("%d %d",&n,&m);
    if((n>=1 && n<=5) && (m>=1 && m<=5)){
        for(i=0;i<n;i++){
            for(j=0;j<m;j++)
                scanf("%d",&arr[i][j]);
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++)
                sum = sum + arr[i][j];
        }
        printf("%d",sum);
    }
    else
        exit(0);
    return 0;
}
