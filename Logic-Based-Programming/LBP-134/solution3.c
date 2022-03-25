# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int evenLocSum(int [], int);

int main() {
    int arr[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("%d",evenLocSum(arr,n));
    return 0;
}

int evenLocSum(int arr[], int n){
    int i,sum=0;
    for(i=0;i<n;i++){
        if(i%2==0)
            sum = sum + arr[i];
    }
    return sum;
}
