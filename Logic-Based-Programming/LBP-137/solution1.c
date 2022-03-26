# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[99],n,i,d,rev=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        rev=0;
        while(arr[i]!=0){
            d = arr[i]%10;
            rev = rev*10+d;
            arr[i] = arr[i]/10;
        }
        printf("%d ",rev);
    }
    return 0;
}
