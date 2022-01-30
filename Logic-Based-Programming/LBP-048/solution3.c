# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char length[30];
    int min,sec;
    scanf("%s",length);
    if(length[0]=='0')
        min=length[1]-48;
    else
        min=(length[0]-48)*10+length[1]-48;
    if(length[3]=='0')
        sec=length[4]-48;
    else
        sec=(length[3]-48)*10+length[4]-48;
    printf("%d",min*60+sec);
    return 0;
}
