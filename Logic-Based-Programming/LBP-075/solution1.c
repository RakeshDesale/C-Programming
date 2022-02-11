# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int firstVowel(char []);

int main() {
    char str[20];
    scanf("%s",str);
    printf("%d",firstVowel(str));
    return 0;
}

int firstVowel(char str[]){
    int i;
    for(i=0;str[i];i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            break;
        }
    }
    return i;
}
