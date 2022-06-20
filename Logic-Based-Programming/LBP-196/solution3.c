# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int modRes(int, int, int);

int main() {
    int b,e,m;
    scanf("%d %d %d",&b,&e,&m);
    printf("%d",modRes(b,e,m));
    return 0;
}

int modRes(int b, int e, int m){
    return ((int)pow(b,e)%m);
}
