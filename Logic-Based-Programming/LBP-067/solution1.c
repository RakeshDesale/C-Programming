# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int wordIdentical(char[]);

int main() {
    char str[20];
    scanf("%s",str);
    printf((wordIdentical(str))?"true":"false");
    return 0;
}

int wordIdentical(char str[]){
    int i;
    for(i=0;str[i];i++){
        if(str[i]==str[i+1])
            return 1;
    }
    return 0;
}
