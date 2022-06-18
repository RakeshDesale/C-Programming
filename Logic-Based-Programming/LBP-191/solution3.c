# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, d, sum = 0;
    scanf("%d",&n);
abc:while(n != 0){
        d = n % 10;
        sum = sum + d;
        n = n / 10;
    }
    if(sum <= 26)
        printf("%c",sum + 64);
    else
        goto abc;
    return 0;
}
