# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumOfDigits(int);

int main() {
    int n1,n2,sum=0,i;
    scanf("%d %d", &n1, &n2);
    for(i=n1;i<=n2;i++){
        sum=sum+sumOfDigits(i);
    }
    printf("%d",sum);
    return 0;
}

int sumOfDigits(int n){
    int sum=0;
    while(n!=0){
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}
