# Using Sum Variable

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[99],n,i,low,high,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    low=0;
    high=n-1;
    while(low<=high){
        sum = arr[low]+arr[high];
        printf("%d ",sum);
        low++;
        high--;
    }
    return 0;
}
