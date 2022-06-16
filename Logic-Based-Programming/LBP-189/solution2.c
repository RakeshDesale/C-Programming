# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int reverse(int);

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",abs(n - reverse(n)));
    return 0;
}

int reverse(int n){
    int d,rev = 0;
    while(n != 0){
        d = n%10;
        rev = rev * 10 + d;
        n = n/10;
    }
    return rev;
}
