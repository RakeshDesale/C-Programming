# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[99],n,loc,ele,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)\
        scanf("%d",&arr[i]);
    scanf("%d",&loc);
    scanf("%d",&ele);
    arr[loc]=ele;
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
