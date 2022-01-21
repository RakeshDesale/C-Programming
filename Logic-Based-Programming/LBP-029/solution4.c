# Another Way Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void isPrime(int);

int main() {
    int n;
    scanf("%d",&n);
    isPrime(n);
    return 0;
}

void isPrime(int n){
    int i,factors=0;
    for (i=1;i<=n;i++){
        if (n%i==0)
            factors++;
    }
    printf((factors==2)?"true":"false");
}
