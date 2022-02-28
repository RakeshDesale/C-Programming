# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int oddSum(int [], int);

int main() {
    int arr[99],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("%d",oddSum(arr,n));
    return 0;
}

int oddSum(int arr[], int n){
    int i,sum=0;
    for(i=0;i<n;i++){
        if(arr[i]%2!=0)
            sum = sum+arr[i];
    }
    return sum;
}
