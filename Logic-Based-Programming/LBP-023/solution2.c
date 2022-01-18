# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,a,b,c;
    scanf("%d",&n);
    if (n>=10 && n<=99){
        a=n%10;
        b=(n/10)%10;
        //c=(n/10)%100; If it is a 3 digit number
        c=(a+b)+(a*b);
        printf((c==n)?"Yes":"No");
    }
    else
        exit(0);
    return 0;
}
