# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[99],n,i,sum=0,rev,d,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        temp = arr[i];
        rev=0;
        while(arr[i] != 0){
            d = arr[i]%10;
            rev = rev*10+d;
            arr[i] = arr[i]/10;
        }
        if(temp==rev)
            sum = sum+temp;
    }
    printf("%d",sum);
    return 0;
}
