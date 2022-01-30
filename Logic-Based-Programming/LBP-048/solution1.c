# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int minToSec(char []);
int convert(char s);

int main() {
    char length[20];
    scanf("%s",length);
    printf("%d",minToSec(length));
    return 0;
}

int minToSec(char length[]){
    int min,sec;
    if(length[0]=='0')
        min=convert(length[1]);
    else
        min=convert(length[0])*10+convert(length[1]);
    if(length[3]=='0')
        sec=convert(length[4]);
    else
        sec=convert(length[3])*10+convert(length[4]);
    return min*60+sec;
}

int convert(char s){
    return s-48;
}
