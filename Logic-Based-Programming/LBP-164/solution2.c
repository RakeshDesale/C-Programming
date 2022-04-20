# Using Function and Void Return Type

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void mulPrevNext(int [], int);

int main() {
    int n, arr[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    mulPrevNext(arr,n);
    return 0;
}

void mulPrevNext(int arr[], int n){
    int i;
    printf("%d ",arr[1]);
    for(i=1;i<n-1;i++)
        printf("%d ",arr[i-1]*arr[i+1]);
    printf("%d",arr[n-2]);
}
