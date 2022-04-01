# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void countSum(int [], int n);

int main() {
    int arr[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    if(n!=0)
        countSum(arr,n);
    else
        printf(" ");
    return 0;
}

void countSum(int arr[], int n){
    int i,count=0,sum=0;
    for(i=0;i<n;i++){
        if(arr[i]>0)
            count++;
        else if (arr[i]==0)
            continue;
        else
            sum = sum + arr[i];
    }
    printf("%d %d", count, sum);
}
