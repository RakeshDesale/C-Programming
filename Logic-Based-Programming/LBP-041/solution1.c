# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,d,prod=1;
    scanf("%d",&n);
    while(n!=0){
        d=n%10;
        prod=prod*d;
        n=n/10;
    }
    printf("%d",prod);
    return 0;
}
