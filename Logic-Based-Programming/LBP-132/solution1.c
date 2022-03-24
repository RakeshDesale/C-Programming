# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[99],n,i,j,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++){
        max = arr[i];
        for(j=i+1;j<n;j++){
            if(max<arr[j])
                max = arr[j];
        }
        arr[i] = max;
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
