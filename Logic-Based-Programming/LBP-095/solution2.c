# Without Using Function

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
        printf("%c",p[0]);
        p=strtok(NULL," ");
    }
    return 0;
}
