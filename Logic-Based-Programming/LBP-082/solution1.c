# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void nextLetter(char []);

int main() {
    char str[20];
    scanf("%s",str);
    nextLetter(str);
    return 0;
}

void nextLetter(char str[]){
    int i;
    for(i=0;str[i];i++)
        str[i]=str[i]+1;
    printf("%s",str);
}
