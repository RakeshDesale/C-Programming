# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void insertElement(int [], int, int);

int main() {
    int arr[99],n,ele,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&ele);
    insertElement(arr,ele,n);
    return 0;
}

void insertElement(int arr[], int ele, int n){
    int i;
    arr[n] = ele;
    n++;
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
