# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[50];
    int i,count=0;
    scanf("%s",str);
    for(i=0;str[i];i++){
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    }
    if(str[0]=='#' && strlen(str)==7){
        for(i=1;str[i];i++){
            if((str[i]>='A' && str[i]<='F') || (str[i]>='0' && str[i]<='9'))
                count++;
        }
    }
    printf((count==6)?"true":"false");
    return 0;
}
