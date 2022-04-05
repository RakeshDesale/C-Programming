# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPrime(int);

int main() {
    int arr[100],n,i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        if(isPrime(arr[i]))
            count++;
    }
    printf((count==n)?"true":"false");
    return 0;
}

int isPrime(int n){
    int i,factors=0;
    for(i=1;i<=n;i++){
        if(n%i==0)
            factors++;
    }
    return (factors==2);
}
