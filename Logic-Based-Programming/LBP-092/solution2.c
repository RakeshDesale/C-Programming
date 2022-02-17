# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void replaceChar(char [],char);

int main() {
    char str[30],ch;
    scanf("%[^\n]s",str);
    scanf("\n%c",&ch);
    if(strlen(str)==0)
        exit(0);
    else
        replaceChar(str,ch);
    return 0;
}

void replaceChar(char str[],char ch){
    int i,count=1;
    for(i=0;str[i];i++){
        if(str[i]==ch)
            printf("%d",count++);
        else
            printf("%c",str[i]);
    }
}
