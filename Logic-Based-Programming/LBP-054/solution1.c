# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int wordCount(char[]);

int main() {
    char str[30];
    scanf("%[^\n]s",str);
    printf("%d",wordCount(str));
    return 0;
}

int wordCount(char str[]){
    int i,count=1;
    for(i=0;str[i];i++){
        if(str[i]==' ' && str[i+1]!=' ')
            count++;
    }
    return count;
}
