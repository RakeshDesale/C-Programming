# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int eleCount(int [], int, int);

int main() {
    int arr[99],n,i,key;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&key);
    printf("%d",eleCount(arr,key,n));
    return 0;
}

int eleCount(int arr[], int key, int n){
    int i,count=0;
    for(i=0;i<n;i++){
        if(arr[i]==key)
            count++;
    }
    return count;
}
