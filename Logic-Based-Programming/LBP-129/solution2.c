# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int duplicateElement(int [], int);

int main() {
    int arr[99],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("%d",duplicateElement(arr,n));
    return 0;
}

int duplicateElement(int arr[], int n){
    int b[999]={0},i,count=0;
    for(i=0;i<n;i++)
        b[arr[i]]++;
    for(i=0;i<999;i++){
        if(b[i]>=2)
            count++;
    }
    return count;
}
