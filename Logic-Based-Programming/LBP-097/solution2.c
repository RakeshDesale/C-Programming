# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int consonentCount(char []);

int main() {
    char str[20];
    scanf("%s",str);
    printf("%d",consonentCount(str));
    return 0;
}

int consonentCount(char str[]){
    int i,count=0;
    for(i=0;str[i];i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u')
            count++;
    }
    return count;
}
