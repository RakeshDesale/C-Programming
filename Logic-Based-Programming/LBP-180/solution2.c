# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int parityCheck(int);

int main() {
    int n;
    scanf("%d",&n);
    printf(parityCheck(n)?"even":"odd");
    return 0;
}

int parityCheck(int n){
    int count = 0;
    while(n!=0){
        if(n%2==1)
            count++;
        n = n/2;
    }
    return count%2==0;
}
