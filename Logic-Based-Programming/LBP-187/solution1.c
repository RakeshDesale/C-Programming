# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[100];
    int n;
    scanf("%s",str);
    n = strlen(str);
    printf("%c,%c",str[n-1],str[n-2]);
    return 0;
}
