# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void evenLengthWord(char []);

int main() {
    char str[50];
    scanf("%[^\n]s",str);
    evenLengthWord(str);
    return 0;
}

void evenLengthWord(char str[]){
    char *p;
    p=strtok(str," ");
    while(p!=NULL){
        if(strlen(p)%2==0){
            printf("%s ",p);
        }
        p=strtok(NULL," ");
    }
}
