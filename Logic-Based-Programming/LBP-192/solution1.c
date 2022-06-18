# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(int);

int main() {
    int n,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(i == sum(i))
            printf("%d ",i);
    }
    return 0;
}

int sum(int n){
    int d,sum = 0;
    while(n != 0){
        d = n % 10;
        sum = sum + (d * d * d);
        n = n / 10;
    }
    return sum;
}
