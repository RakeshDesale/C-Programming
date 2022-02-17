# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void alphabetPosition(char []);

int main() {
    char str[50];
    scanf("%[^\n]s",str);
    alphabetPosition(str);
    return 0;
}

void alphabetPosition(char str[]){
    int i;
    for(i=0;str[i];i++){
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    }
    for(i=0;str[i];i++){
        if(str[i]>='a' && str[i]<='z')
            printf("%d ",str[i]-96);
    }
}
