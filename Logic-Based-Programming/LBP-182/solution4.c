# Another Approach Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPrime(int);

int main() {
    int n,arr[100],min = 999, max = -1, i, j, temp;
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
    for(i=0;i<n;i++){
        if(isPrime(arr[i])){
            if(min>arr[i])
                min = arr[i];
        }
    }
    for(i=0;i<n;i++){
        if(isPrime(arr[i])){
            if(max<arr[i])
                max = arr[i];
        }
    }
    if(max!=-1 && min!=999)
        printf("%d",max-min);
    else
        printf("0");
    return 0;
}

int isPrime(int n){
    int i,factors = 0;
    for(i=1;i<=n;i++){
        if(n%i == 0)
            factors++;
    }
    return factors == 2;
}
