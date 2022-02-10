# Without Using Function:

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[20];
    int len;
    scanf("%s",str);
    len=strlen(str);
    if(len%2==0)
        printf("%c%c",str[len/2-1],str[len/2]);
    else
        printf("%c",str[len/2]);
    return 0;
}
