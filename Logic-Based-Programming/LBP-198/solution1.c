# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,d = 0,rev = 0,temp;
    scanf("%d",&n);
    temp = n;
    while(temp != 0){
        d = temp % 10;
        rev = rev * 10 + d;
        temp = temp / 10;
    }
    n = rev;
    while(n!=0){
        d = n % 10;
        if(d % 2 == 0)
            printf("%d",d + 1);
        else
            printf("%d",d - 1);
        n = n / 10;
    }
    return 0;
}
