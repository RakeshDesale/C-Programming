# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void reverseArrEle(int [], int n);

int main() {
    int arr[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    reverseArrEle(arr,n);
    return 0;
}

void reverseArrEle(int arr[], int n){
    int i,d,rev;
    for(i=0;i<n;i++){
        rev = 0;
        while(arr[i]!=0){
            d = arr[i]%10;
            rev = rev*10+d;
            arr[i] = arr[i]/10;
        }
        printf("%d ",rev);
    }
}
