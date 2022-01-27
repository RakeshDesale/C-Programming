# Using ASCII Values

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[30];
    int count=0,i;
    scanf("%[^\n]s",s);
    if(strlen(s)!=0){
        for(i=0;s[i];i++){
            if((s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122)||(s[i]>=48 && s[i]<=57)||(s[i]==32))
                continue;
            else
                count++;
        }
        printf("%d",count);
    }
    else
        exit(0);
    return 0;
}
