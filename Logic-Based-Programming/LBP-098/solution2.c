# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int onlyDigit(char []);

int main() {
    char str[20];
    scanf("%s",str);
    printf((onlyDigit(str))?"Yes":"No");
    return 0;
}

int onlyDigit(char str[]){
    int i,count=0;
    for(i=0;str[i];i++){
        if(str[i]>='0' && str[i]<='9')
            count++;
    }
    return (count==strlen(str));
}
