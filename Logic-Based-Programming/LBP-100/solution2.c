# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int reward(char []);

int main() {
    char str[20];
    scanf("%s",str);
    if(strlen(str)==0)
        exit(0);
    else
        printf(reward(str)?"No":"Yes");
    return 0;
}

int reward(char str[]){
    int i,countA=0,countL=0;
    for(i=0;str[i];i++){
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
        if(str[i]=='A')
            countA++;
        else if(str[i]=='L' && str[i+1]=='L' && str[i+2]=='L')
            countL++;
    }
    return (countL>=1 || countA>1);
}
