# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int checkBoard(char[]);

int main() {
    char str[2];
    scanf("%s",str);
    printf((checkBoard(str))?"true":"false");
    return 0;
}

int checkBoard(char str[]){
    int x,y;
    x=(int)str[0]-96;
    y=(int)str[1];
    return ((x%2!=y%2)?1:0);
}
