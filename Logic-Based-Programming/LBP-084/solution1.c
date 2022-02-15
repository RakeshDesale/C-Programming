# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int strOrder(char []);

int main() {
    char str[20];
    scanf("%s",str);
    if(strlen(str)==0)
        printf("invalid");
    printf((strOrder(str))?"true":"false");
    return 0;
}

int strOrder(char str[]){
    char st[20]="\0",ch;
    int i,j;
    strcpy(st,str);
    for(i=0;str[i];i++){
        for(j=i+1;str[j];j++){
            if(str[i]>str[j]){
                ch=str[i];
                str[i]=str[j];
                str[j]=ch;
            }
        }
    }
    return(strcmp(str,st)==0);
}
