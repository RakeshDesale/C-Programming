# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int countTrailZero(int);

int main() {
    int n,i,fact = 1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        fact = fact * i;
    printf("%d",countTrailZero(fact));
    return 0;
}

int countTrailZero(int n){
    int count = 0;
    while(n!=0){
        if(n%10 == 0)
            count++;
        else
            break;
        n = n/10;
    }
    return count;
}
