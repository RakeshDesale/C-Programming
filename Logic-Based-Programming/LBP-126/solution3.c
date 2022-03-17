# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void updateElementOnPosition(int [], int, int, int);

int main() {
    int arr[99],n,loc,ele,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&loc);
    scanf("%d",&ele);
    updateElementOnPosition(arr,n,loc,ele);
    return 0;
}

void updateElementOnPosition(int arr[], int n, int loc, int ele){
    int i;
    arr[loc]=ele;
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
