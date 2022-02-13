# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int validHex(char []);

int main() {
    char str[50];
    scanf("%s",str);
    printf((validHex(str))?"true":"false");
    return 0;
}

int validHex(char str[]){
    int i, count=0;
    for(i=0;str[i];i++){
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    }
    
    if(str[0]=='#' && strlen(str)==7){
        for(i=1;str[i];i++){
            if((str[i]>='0' && str[i]<='9') || (str[i]>='A' && str[i]<='F'))
                count++;
        }
    }
    return (count==6);
}
