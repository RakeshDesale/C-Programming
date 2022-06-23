# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumOfRemainder(int, int [], int);

int main() {
    int n,arr[100],k,i;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&k);
    printf("%d",sumOfRemainder(n,arr,k));
    return 0;
}

int sumOfRemainder(int n, int arr[], int k){
    int i,sum = 0;
    for(i = 0;i < n;i++)
        sum = sum + (arr[i] % k);
    return sum;
}
