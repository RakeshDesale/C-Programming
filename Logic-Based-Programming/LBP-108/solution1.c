# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[99],i,n,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        if(arr[i]%10==3)
            sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}
