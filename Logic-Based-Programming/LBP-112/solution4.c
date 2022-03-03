# Using Function and Binary Search

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int searchElement(int [], int, int);

int main() {
    int arr[99],n,key,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&key);
    printf("%d",searchElement(arr,n,key));
    return 0;
}

int searchElement(int arr[], int n, int key){
    int i,j,temp,index=-1,low,mid,high;
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
    return index;
}
