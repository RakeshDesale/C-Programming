# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void spaceStr(char []);

int main() {
    char str[20];
    scanf("%s",str);
    spaceStr(str);
    return 0;
}

void spaceStr(char str[]){
    int i;
    for(i=0;str[i];i++)
        printf("%c ",str[i]);
}
