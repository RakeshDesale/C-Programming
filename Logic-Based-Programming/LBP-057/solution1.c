# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int strReversed(char[]);

int main() {
    char str[30];
    scanf("%[^\n]s",str);
    strReversed(str);
    return 0;
}

int strReversed(char str[]){
    int i;
    for(i=strlen(str)-1;i>=0;i--)
        printf("%c",str[i]);
    return 0;
}
