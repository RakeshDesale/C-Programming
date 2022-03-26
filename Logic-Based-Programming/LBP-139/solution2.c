# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sortArr(int [], int);

int main() {
    int arr[99],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    sortArr(arr,n);
    return 0;
}

void sortArr(int arr[], int n){
    int i,j,temp;
    for(i=0;i<n/2;i++){
        for(j=i+1;j<n/2;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
