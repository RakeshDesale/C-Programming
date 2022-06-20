# Optimized Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int b,e,m;
    scanf("%d %d %d",&b,&e,&m);
    printf("%d",(int)pow(b,e)%m);
    return 0;
}
