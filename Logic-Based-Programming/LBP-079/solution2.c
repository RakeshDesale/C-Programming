# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swapWords(char []);

int main() {
    char str[50];
    scanf("%[^\n]s",str);
    swapWords(str);
    return 0;
}

void swapWords(char str[]){
    char fw[20]="\0",lw[20]="\0";
    int i=0,j,k=0;
    while(str[i]!=' ')
        fw[k++]=str[i++];
    
    j=strlen(str)-1;
    k=0;
    while(str[j]!=' ')
        lw[k++]=str[j--];
    
    for(k=strlen(lw)-1;lw[k];k--)
        printf("%c",lw[k]);
    
    for(k=j;k>i;k--)
        printf("%c",str[k]);
    printf(" %s",fw);
}
