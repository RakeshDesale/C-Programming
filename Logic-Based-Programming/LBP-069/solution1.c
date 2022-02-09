# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void removeVowel(char []);

int main() {
    char str[20];
    scanf("%s",str);
    removeVowel(str);
    return 0;
}

void removeVowel(char str[]){
    int i;
    for(i=0;str[i];i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            continue;
        else
            printf("%c",str[i]);
    }
}
