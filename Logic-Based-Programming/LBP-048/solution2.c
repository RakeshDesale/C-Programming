# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int convert(char s);

int main() {
    char length[30];
    int min,sec;
    scanf("%s",length);
    if(length[0]=='0')
        min=convert(length[1]);
    else
        min=convert(length[0])*10+convert(length[1]);
    if(length[3]=='0')
        sec=convert(length[4]);
    else
        sec=convert(length[3])*10+convert(length[4]);
    printf("%d",min*60+sec);
    return 0;
}

int convert(char s){
    return s-48;
}
