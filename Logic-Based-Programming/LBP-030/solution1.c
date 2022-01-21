# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[30];
    int i,flag=0,len;
    scanf("%s",s);
    len=strlen(s);
    if(len==0)
        exit(0);
    else{
        for (i=0;i<len;i++){
            if(s[i]!=s[len-i-1]){
                flag=1;
                break;
            }
        }
        if(flag)
            printf("invalid");
        else
            printf("valid");
    }
    return 0;
}
