# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[100],n,i,sum=0;
    scanf("%d",&n);
    if (n>=1 && n<=100){
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        for(i=0;i<n-1;i++)
            sum = sum + abs(arr[i]-arr[i+1]);
        printf("%d",sum);
    }
    else
        exit(0);
    return 0;
}
