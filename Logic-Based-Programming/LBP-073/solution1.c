# Solution:

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
    int i,flag=1;
    if(strlen(str)==5){
        for(i=0;str[i];i++){
            if (str[i]==' ' && ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))){
                flag=0;
                break;
            }
            else if(str[i]>='0' && str[i]<='9')
                continue;
            else{
                flag=0;
                break;
            }
        }
        return ((flag==1)?1:0);
    }
    else
        return 0;
}
