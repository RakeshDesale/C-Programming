# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void arrDiff(int [], int[], int);

int main() {
    int a[100],b[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    arrDiff(a,b,n);
    return 0;
}

void arrDiff(int a[], int b[], int n){
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i] - b[i]);
}
