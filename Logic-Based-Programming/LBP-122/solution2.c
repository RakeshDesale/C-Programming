# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void delLastEle(int [], int);

int main() {
    int arr[99],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    delLastEle(arr,n);
    return 0;
}

void delLastEle(int arr[], int n){
    int i;
    n--;
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
