# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void strictGreat(int [], int);

int main() {
    int arr[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    strictGreat(arr,n);
    return 0;
}

void strictGreat(int arr[], int n){
    int i;
    for(i=1;i<n-1;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            printf("%d ",arr[i]);
    }
}
