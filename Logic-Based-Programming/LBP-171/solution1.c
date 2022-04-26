# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[100],*p,st[] = "break,case,continue,default,defer,else,for,func,goto,if,map,range,return,struct,type,var";
    int flag = 0;
    scanf("%s",str);
    p = strtok(st,",");
    while(p!=NULL){
        if(strcmp(p,str)==0){
            flag = 1;
            break;
        }
        p = strtok(NULL,",");
    }
    printf((flag==1)?"true":"false");
    return 0;
}
