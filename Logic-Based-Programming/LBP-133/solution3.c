# Using Third Array

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[99],b[99],c[99],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n;i++)
        c[i] = a[i]+b[i];
    for(i=0;i<n;i++)
        printf("%d ",c[i]);
    return 0;
}
