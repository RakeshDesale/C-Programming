# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void halfAscDesc(int [], int);

int main() {
    int n,arr[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    halfAscDesc(arr,n);
    return 0;
}

void halfAscDesc(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i=0;i<n/2;i++)
        printf("%d ",arr[i]);
    for(i=n-1;i>=n/2;i--)
        printf("%d ",arr[i]);
}
