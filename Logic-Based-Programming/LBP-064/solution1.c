# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int checkStr(char[]);

int main() {
    char str[20];
    scanf("%s",str);
    printf(checkStr(str)?"true":"false");
    return 0;
}

int checkStr(char str[]){
    int i, count1=0, count2=0;
    for(i=0;str[i];i++){
        if(str[i]=='x')
            count1++;
        else if(str[i]=='o')
            count2++;
    }
    if(count1==count2 || (count1==0 && count2==0))
        return 1;
    else
        return 0;
}
