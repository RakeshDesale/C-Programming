# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=1;i<n-1;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            printf("%d ",arr[i]);
    }
    return 0;
}
