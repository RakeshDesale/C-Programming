# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char nonRepeatChar(char []);

int main() {
    char str[100];
    scanf("%s",str);
    printf("%c",nonRepeatChar(str));
    return 0;
}

char nonRepeatChar(char str[]){
    int i,j,u,count = 0;
    for(i=0;str[i];i++){
        u = 1;
        for(j=0;str[j];j++){
            if(i!=j && str[i]==str[j]){
                u=0;
                break;
            }
        }
        if(u==1){
            count++;
            if(count == 2){
                break;
            }
        }
    }
    return str[i];
}
