# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPrime(int);

int main() {
    int rl,rr,i,sum=0;
    scanf("%d %d", &rl, &rr);
    for (i=rl;i<=rr;i++){
        if(isPrime(i))
            sum=sum+i;        
    }
    printf("%d",sum);
    return 0;
}

int isPrime(int n){
    int i,factors=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            factors++;
        }
    }
    return (factors==2)?1:0;
}
