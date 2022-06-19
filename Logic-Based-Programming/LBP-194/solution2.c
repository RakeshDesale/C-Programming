# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char updatePassword(char);

int main() {
    char str[100];
    int i;
    scanf("%s",str);
    for(i=0;str[i];i++){
        printf("%c",updatePassword(str[i]));
    }
    return 0;
}

char updatePassword(char ch){
    if(ch >= 'A' && ch <= 'Z')
        return (ch + 32);
    else
        return (ch - 32);
}
