# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPalindrome(int);

int main() {
    int arr[99],n,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        if(isPalindrome(arr[i])){
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
    return 0;
}

int isPalindrome(int n){
    int d,rev=0,temp=n;
    while(n!=0){
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    return (temp==rev);
}
