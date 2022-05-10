# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumOfProd(int [], int);

int main() {
    int n,a[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("%d",sumOfProd(a,n));
    return 0;
}

int sumOfProd(int a[], int n){
    int i,sum=0;
    for(i=0;i<n;i++)
        sum = sum + (a[i]*(a[i]+1));
    return sum;
}
