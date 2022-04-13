# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[100],n,i,j,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        for(j=1;j<=arr[i];j++){
            if(j*j==arr[i])
                count++;
        }
    }
    printf("%d",count);
    return 0;
}
