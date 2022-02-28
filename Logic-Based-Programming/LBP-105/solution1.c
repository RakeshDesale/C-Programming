# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[99],n,i,j,factors,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        factors=0;
        for(j=1;j<=arr[i];j++){
            if(arr[i]%j==0)
                factors++;
        }
        if(factors==2)
            sum = sum + arr[i];
        else
            continue;
    }
    printf("%d",sum);
    return 0;
}
