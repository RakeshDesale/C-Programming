# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int findWord(char [], char *, char []);

int main() {
    char str[100],*p,st[] = "break,case,continue,default,defer,else,for,func,goto,if,map,range,return,struct,type,var";
    scanf("%s",str);
    p = strtok(st,",");
    printf(findWord(str,p,st)?"true":"false");
    return 0;
}

int findWord(char str[], char *p, char st[]){
    int flag = 0;
    while(p!=NULL){
        if(strcmp(p,str)==0){
            flag = 1;
            break;
        }
        p = strtok(NULL,",");
    }
    return flag;
}
