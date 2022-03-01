# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int arrsum(int [], int);

int main() {
    int arr[99],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("%d",arrsum(arr,n));
    return 0;
}

int arrsum(int arr[], int n){
    int sum=0,i;
    for(i=0;i<n;i++){
        if(arr[i]%10==3)
            sum = sum+arr[i];
    }
    return sum;
}
