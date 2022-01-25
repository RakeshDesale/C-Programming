# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define isAlpha(ch) (ch>='a' && ch<='z')
#define isDigit(ch) (ch>='0' && ch<='9')

int isEmail(char []);

int main() {
    char str[30];
    scanf("%s",str);
    if(isEmail(str))
        printf("true");
    else
        printf("false");
    return 0;
}

int isEmail(char s[]){
    int i;
    for(i=0;s[i]&&isAlpha(s[i]);i++);
    if((i==0 && isDigit(s[i]))||(i==0 && s[i]=='_'))
        return 0;
    else if(isDigit(s[i])){
        i++;
        if(s[i]!='_' && strcmp(s+i,"@gmail.com")==0)
            return 1;
        else
            return 0;
    }
    else if(s[i]=='_' && strcmp(s+1+i,"@gmail.com")==0)
        return 1;
    else
        return 0;
}
