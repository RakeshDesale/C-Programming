# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumArray(int [],int);

int main() {
    int arr[99],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("%d",sumArray(arr,n));
    return 0;
}

int sumArray(int arr[],int n){
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+arr[i];
    return sum;
}
