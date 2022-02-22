# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[50],*p;
    scanf("%[^\n]s",str);
    if(strlen(str)==0)
        exit(0);
    else{
        p=strtok(str," ");
        while(p!=NULL){
            printf("%c%s ",p[0]-32,p+1);
            p=strtok(NULL," ");
        }
    }
    return 0;
}
