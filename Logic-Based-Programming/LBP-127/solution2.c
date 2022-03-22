# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void arrReverse(int [], int);

int main() {
    int arr[99],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    arrReverse(arr,n);
    return 0;
}

void arrReverse(int arr[], int n){
    int i;
    for(i=n-1;i>=0;i--)
        printf("%d ",arr[i]);
}
