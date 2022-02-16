# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void uncensoredStr(char [], char []);

int main() {
    char cs[50],cv[20];
    scanf("%[^\n]s",cs);
    scanf("%s",cv);
    uncensoredStr(cs,cv);
    return 0;
}

void uncensoredStr(char cs[],char cv[]){
    int i,j=0;
    for(i=0;cs[i];i++){
        if(cs[i]=='*')
            printf("%c",cv[j++]);
        else
            printf("%c",cs[i]);
    }
}
