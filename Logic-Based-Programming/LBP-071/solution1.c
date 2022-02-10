# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void replaceVowel(char [],char);

int main() {
    char str[20],ch;
    scanf("%s \n%c", str, &ch);
    replaceVowel(str,ch);
    return 0;
}

void replaceVowel(char str[],char ch){
    int i;
    for(i=0;str[i];i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            printf("%c",ch);
        else
            printf("%c",str[i]);
    }
}
