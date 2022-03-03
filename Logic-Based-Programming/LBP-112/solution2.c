# Using Binary Search

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[99],n,key,i,j,temp,index=-1,mid,low,high;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&key);
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
    while(low <= high){
        mid = (low+high)/2;
        if(key == arr[mid]){
            index = mid;
            break;
        }
        else if(key > arr[mid])
            low = mid+1;
        else
            high = mid-1;
    }
    printf("%d",index);
    return 0;
}
