# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int b,e,m,res;
    scanf("%d %d %d",&b,&e,&m);
    res = pow(b,e);
    printf("%d",res%m);
    return 0;
}
