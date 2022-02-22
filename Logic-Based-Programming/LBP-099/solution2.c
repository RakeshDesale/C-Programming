# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void capitalizeFirstLetter(char []);

int main() {
    char str[50];
    scanf("%[^\n]s",str);
    if(strlen(str)==0)
        exit(0);
    else
        capitalizeFirstLetter(str);
    return 0;
}

void capitalizeFirstLetter(char str[]){
    char *p;
    p=strtok(str," ");
    while(p!=NULL){
        printf("%c%s ",p[0]-32,p+1);
        p=strtok(NULL," ");
    }
}
