# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[50],*p;
    scanf("%[^\n]s",str);
    p=strtok(str," ");
    while(p!=NULL){
        if(strlen(p)%2==0){
            printf("%s ",p);
        }
        p=strtok(NULL," ");
    }
    return 0;
}
