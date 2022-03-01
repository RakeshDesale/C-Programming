# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int factorial(int);
int isStrong(int);

int main() {
    int arr[99],n,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        if(isStrong(arr[i]))
            sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}

int isStrong(int n){
    int sum=0,d,temp=n;
    while(n!=0){
        d=n%10;
        sum=sum+factorial(d);
        n=n/10;
    }
    return temp==sum;
}

int factorial(int n){
    if(n==0)
        return 1;
    
    else
        return n*factorial(n-1);
}
