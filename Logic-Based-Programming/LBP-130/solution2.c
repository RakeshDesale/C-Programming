# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void nonRepeatElement(int [],int);

int main() {
    int arr[99],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    nonRepeatElement(arr,n);
    return 0;
}

void nonRepeatElement(int arr[], int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j])
                break;
        }
        if(j==n)
            printf("%d ",arr[i]);
    }
}
