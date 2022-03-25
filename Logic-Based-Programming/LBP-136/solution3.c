# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void indexSum(int [], int);

int main() {
    int arr[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    indexSum(arr,n);
    return 0;
}

void indexSum(int arr[], int n){
    int low=0,high=n-1;
    while(low<=high){
        printf("%d ",arr[low]+arr[high]);
        low++;
        high--;
    }
}
