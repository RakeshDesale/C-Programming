# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPrime(int n){
    int i,factors = 0;
    for(i=1;i<=n;i++){
        if(n%i==0)
            factors++;
    }
    return factors == 2;
}

int main() {
    int n,arr[100],b[100],i,j,temp,count = 0,len=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    j = 0;
    for(i=0;i<n;i++){
        if(arr[i]<0)
            continue;
        else if(isPrime(arr[i])){
            count++;
            b[j++] = arr[i];
            len++;
        }
    }
    if(count>=2)
        printf("%d",abs(b[len-1]-b[0]));
    else
        printf("0");
    return 0;
}
