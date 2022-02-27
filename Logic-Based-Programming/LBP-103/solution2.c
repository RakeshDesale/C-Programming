# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int evenSum(int [], int);

int main() {
    int arr[99],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("%d",evenSum(arr,n));
    return 0;
}

int evenSum(int arr[], int n){
    int i,sum=0;
    for(i=0;i<n;i++){
        if(arr[i]%2==0)
            sum = sum+arr[i];
    }
    return sum;
}
