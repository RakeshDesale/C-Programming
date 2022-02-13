# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[50],fw[20]="\0",lw[20]="\0";
    int i=0,j,k=0;
    scanf("%[^\n]s",str);
    while(str[i]!=' ')
        fw[k++]=str[i++];

    j=strlen(str)-1;
    k=0;
    while(str[j]!=' '){
        lw[k++]=str[j--];
    }
    
    for(k=strlen(lw)-1;str[k];k--)
        printf("%c",lw[k]);
    
    for(k=j;k>i;k--)
        printf("%c",str[k]);
    
    printf(" %s",fw);
    return 0;
}
