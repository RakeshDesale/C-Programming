# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[20];
    int i,flag=1;
    scanf("%s",str);
    if(strlen(str)==5){
        for(i=0;str[i];i++){
            if (str[i]==' ' && ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))){
                flag=0;
                break;
            }
            else if(str[i]>='0' && str[i]<='9')
                continue;
            else{
                flag=0;
                break;
            }
        }
        printf((flag==1)?"true":"false");
    }
    else
        printf("false");
    return 0;
}
