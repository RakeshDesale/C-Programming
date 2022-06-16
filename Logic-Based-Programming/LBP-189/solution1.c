# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,temp,d,rev = 0;
    scanf("%d",&n);
    temp = n;
    while(temp != 0){
        d = temp % 10;
        rev = rev * 10 + d;
        temp = temp / 10;
    }
    printf("%d",abs(n - rev));
    return 0;
}
