# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPrime(int);

int main() {
    int arr[3][3],i,j,sum=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            scanf("%d",&arr[i][j]);
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(isPrime(arr[i][j]))
                sum = sum + arr[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}

int isPrime(int n){
    int i,factors=0;
    for(i=1;i<=n;i++){
        if(n%i==0)
            factors++;
    }
    return factors==2;
}
