# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[100];
    int dec = 0, len, i, t=0;
    scanf("%s",str);
    len = strlen(str);
    len--;
    for(i=0;str[i];i++){
        if(str[i]>='0' && str[i]<='9')
            t = str[i]-48;
        else if(str[i]>='A' && str[i]<='G')
            t = str[i]-65+10;
        else if(str[i]>='a' && str[i]<='g')
            t = str[i]-97+10;
        dec = dec + t*pow(17,len);
        len--;
    }
    printf("%d",dec);
    return 0;
}
