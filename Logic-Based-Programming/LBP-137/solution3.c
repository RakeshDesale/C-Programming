# Using Function and Return Value

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int reverseArrEle(int);

int main() {
    int arr[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        printf("%d ",reverseArrEle(arr[i]));
    return 0;
}

int reverseArrEle(int n){
    int d,rev = 0;
    while(n!=0){
        d = n%10;
        rev = rev*10+d;
        n = n/10;
    }
    return rev;
}
