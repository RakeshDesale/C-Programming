# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char left[30],right[30];
    int i;
    scanf("%s %s",left,right);
    printf("%c",toupper(left[0]));
    for(i=1;left[i];i++)
        printf("%c",left[i]);
    printf("%s",right);
    return 0;
}
