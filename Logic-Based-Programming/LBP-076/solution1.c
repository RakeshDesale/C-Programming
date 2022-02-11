# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void longestWord(char []);

int main() {
    char str[50];
    scanf("%[^\n]s",str);
    longestWord(str);
    return 0;
}

void longestWord(char str[]){
    char *p,res[50]="\0";
    int max=0;
    p=strtok(str," ");
    while(p!=NULL){
        if(strlen(p)>max){
            max=strlen(p);
            strcpy(res,p);
        }
        p=strtok(NULL," ");
    }
    printf("%s",res);
}
