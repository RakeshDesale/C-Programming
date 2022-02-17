# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sortedStr(char []);

int main() {
    char str[30];
    scanf("%s",str);
    sortedStr(str);
    return 0;
}

void sortedStr(char str[]){
    int i,a[256]={0};
    for(i=0;str[i];i++){
        a[str[i]]++;
    }
    for(i=97;i<=122;i++){
        if(a[i]==0)
            printf("%c",i);
    }
}
