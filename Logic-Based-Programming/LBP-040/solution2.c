# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int revint(int);

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",revint(n));
    return 0;
}

int revint(int n){
    int d,rev=0;
    while(n!=0){
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    return rev;
}
