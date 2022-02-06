# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int repeatChar(char[]);

int main() {
    char str[20];
    scanf("%s",str);
    repeatChar(str);
    return 0;
}

int repeatChar(char str[]){
    int i;
    for(i=0;str[i];i++)
        printf("%c%c",str[i],str[i]);
    return 0;
}
