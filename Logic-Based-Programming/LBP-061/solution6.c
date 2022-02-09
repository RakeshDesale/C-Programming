# Using Function, ASCII Values and Using Constraints

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int checkBoard(char[]);

int main() {
    char str[20];
    scanf("%s",str);
    if(strlen(str)==2)
        printf((checkBoard(str))?"true":"false");
    else
        exit(0);
    return 0;
}

int checkBoard(char str[]){
    int x,y;
    if(str[0]>=97 && str[0]<=104  && str[1]>=49 && str[1]<=56){
        x=(int)str[0]-96;
        y=(int)str[1];
    }
    else
        exit(0);
    return ((x%2!=y%2)?1:0);
}
