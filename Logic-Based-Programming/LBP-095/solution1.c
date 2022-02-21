# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void firstLetterOfWord(char []);

int main() {
    char str[50];
    scanf("%[^\n]s",str);
    firstLetterOfWord(str);
    return 0;
}

void firstLetterOfWord(char str[]){
    char *p;
    p=strtok(str," ");
    while(p!=NULL){
        printf("%c",p[0]);
        p=strtok(NULL," ");
    }
}
