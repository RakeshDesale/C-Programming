# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[20];
    int i,Acount=0,Bcount=0,Ccount=0;
    scanf("%s",str);
    for(i=0;str[i];i++){
        if(str[i]=='A')
            Acount++;
        else if(str[i]=='B')
            Bcount++;
        else
            Ccount++;
    }
    printf("%d %d %d", Acount, Bcount, Ccount);
    return 0;
}
