# Another Approach Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int arrDiff(int, int);

int main() {
    int a[100],b[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n;i++)
        printf("%d ",arrDiff(a[i],b[i]));
    return 0;
}

int arrDiff(int a, int b){
    return(a - b);
}
