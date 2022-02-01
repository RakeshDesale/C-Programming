# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char ip[30],defangedip[30]="\0";
    int i,j=0;
    scanf("%s",ip);
    for(i=0;ip[i];i++){
        if(ip[i]=='.'){
            defangedip[j++]='[';
            defangedip[j++]='.';
            defangedip[j++]=']';
        }
        else
            defangedip[j++]=ip[i];
    }
    printf("%s",defangedip);
    return 0;
}
