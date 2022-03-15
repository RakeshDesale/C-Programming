# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void delEleFromPos(int [], int, int);

int main() {
    int arr[99],n,i,pos;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&pos);
    delEleFromPos(arr,pos,n);
    return 0;
}

void delEleFromPos(int arr[], int pos, int n){
    int i;
    for(i=pos;i<n;i++)
        arr[i] = arr[i+1];
    n--;
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);    
}
