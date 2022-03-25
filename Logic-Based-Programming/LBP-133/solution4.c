# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void arrSum(int [], int [], int);

int main() {
    int a[99],b[99],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    arrSum(a,b,n);
    return 0;
}

void arrSum(int a[], int b[], int n){
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i]+b[i]);
}
