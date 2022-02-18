# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void nonRepeatChar(char []);

int main() {
    char str[30];
    scanf("%s",str);
    nonRepeatChar(str);
    return 0;
}

void nonRepeatChar(char str[]){
    int i,j,flag;
    for(i=0;str[i];i++){
        flag=1;
        for(j=0;str[j];j++){
            if(i!=j && str[i]==str[j]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            printf("%c",str[i]);
            break;
        }
    }
}
