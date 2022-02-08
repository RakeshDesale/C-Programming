# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void shutterWord(char []);
int main() {
    char str[20];
    scanf("%s",str);
    shutterWord(str);
    return 0;
}

void shutterWord(char str[]){
    printf("%c%c...",str[0],str[1]);
    printf("%c%c...",str[0],str[1]);
    printf("%s?",str);
}
