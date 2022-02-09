# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void scoreBoard(char []);

int main() {
    char str[20];
    scanf("%s",str);
    scoreBoard(str);
    return 0;
}

void scoreBoard(char str[]){
    int i,Acount=0,Bcount=0,Ccount=0;
    for(i=0;str[i];i++){
        if(str[i]=='A')
            Acount++;
        else if(str[i]=='B')
            Bcount++;
        else
            Ccount++;
    }
    printf("%d %d %d", Acount, Bcount, Ccount);
}
