# Optimized Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int zipCode(char []);

int main() {
    char str[20];
    scanf("%s",str);
    printf((zipCode(str))?"true":"false");
    return 0;
}

int zipCode(char str[]){
    int i,count=0;
    for(i=0;str[i];i++){
        if(str[i]>='0' && str[i]<='9')
            count++;
    }
    return (count==5)?1:0;
}
