# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void midChar(char []);

int main() {
    char str[20];
    scanf("%s",str);
    midChar(str);
    return 0;
}

void midChar(char str[]){
    int len = strlen(str);
    if(len%2==0)
        printf("%c%c",str[len/2-1],str[len/2]);
    else
        printf("%c",str[len/2]);
}
