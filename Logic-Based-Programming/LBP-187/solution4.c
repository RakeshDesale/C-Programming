# Another Approach Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void last2Char(char []);

int main() {
    char str[100];
    scanf("%s",str);
    last2Char(str);
    return 0;
}

void last2Char(char str[]){
    int i, count = 0;
    for(i = strlen(str) - 1; i >= strlen(str) - 2; i--){
        printf("%c",str[i]);
        count++;
        if(count < 2)
            printf(",");
        else
            break;
    }
}
