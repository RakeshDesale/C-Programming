# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[50],*p,res[50]="\0";
    int max;
    scanf("%[^\n]s",str);
    p=strtok(str," ");
    max=0;
    while(p!=NULL){
        if(strlen(p)>max){
            max=strlen(p);
            strcpy(res,p);
        }
        p=strtok(NULL," ");
    }
    printf("%s",res);
    return 0;
}
