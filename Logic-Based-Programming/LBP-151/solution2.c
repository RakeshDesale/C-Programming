# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumOfDistance(int [], int);

int main() {
    int arr[100],n,i;
    scanf("%d",&n);
    if (n>=1 && n<=100){
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        printf("%d",sumOfDistance(arr,n));
    }
    else
        exit(0);
    return 0;
}

int sumOfDistance(int arr[], int n){
    int i,sum=0;
    for(i=0;i<n-1;i++)
        sum = sum + abs(arr[i]-arr[i+1]);
    return sum;
}
