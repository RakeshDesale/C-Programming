# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[99],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        arr[i] = arr[i+1];
    n--;
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
