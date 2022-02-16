# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char cs[50],cv[20];
    int i,j=0;
    scanf("%[^\n]s",cs);
    scanf("%s",cv);
    for(i=0;cs[i];i++){
        if(cs[i]=='*')
            printf("%c",cv[j++]);
        else
            printf("%c",cs[i]);
    }
    return 0;
}
