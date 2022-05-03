# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void secretInfo(char []);

int main() {
    char str[100];
    scanf("%s",str);
    secretInfo(str);
    return 0;
}

void secretInfo(char str[]){
    int i;
    for(i=0;str[i];i++){
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9'))
            printf("%c",str[i]);
    }
}
