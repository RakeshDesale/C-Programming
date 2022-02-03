# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[30];
    int i;
    scanf("%[^\n]s",str);
    for(i=strlen(str)-1;i>=0;i--)
        printf("%c",str[i]);
    return 0;
}
