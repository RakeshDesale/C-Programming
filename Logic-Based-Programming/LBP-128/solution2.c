# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void incArrEle(int [], int);

int main() {
    int arr[99],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    incArrEle(arr,n);
    return 0;
}

void incArrEle(int arr[],int n){
    int i;
    for(i=0;i<n;i++)
        printf("%d ",arr[i]+1);
}
