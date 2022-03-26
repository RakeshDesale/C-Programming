# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void countEvenOdd(int [], int);

int main() {
    int arr[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    countEvenOdd(arr,n);
    return 0;
}

void countEvenOdd(int arr[], int n){
    int i,countEven=0,countOdd=0;
    for(i=0;i<n;i++){
        if(arr[i]%2==0)
            countEven++;
        else
            countOdd++;
    }
    printf("%d\n%d",countEven,countOdd);
}
