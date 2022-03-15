# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void delFirstEle(int [], int);

int main() {
    int arr[99],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    delFirstEle(arr,n);
    return 0;
}

void delFirstEle(int arr[], int n){
    int i;
    for(i=0;i<n;i++)
        arr[i] = arr[i+1];
    n--;
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);    
}
