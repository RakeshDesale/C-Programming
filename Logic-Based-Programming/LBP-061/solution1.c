# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[2];
    int x,y;
    scanf("%s",str);
    x=str[0]-96;
    y=str[1];
    if(x%2!=y%2)
        printf("true");
    else
        printf("false");
    return 0;
}
