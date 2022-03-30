# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void rearrangeArr(int [], int);

int main() {
    int arr[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    rearrangeArr(arr,n);
    return 0;
}

void rearrangeArr(int arr[], int n){
    int i,j,temp,low,high;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    low=0;
    high=n-1;
    while(low<=high){
        printf("%d %d ",arr[low],arr[high]);
        low++;
        high--;
    }
}
