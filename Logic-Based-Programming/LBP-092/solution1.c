# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[30],ch;
    int i,count=1;
    scanf("%[^\n]s",str);
    scanf("\n%c",&ch);
    if(strlen(str)==0)
        exit(0);
    else{
        for(i=0;str[i];i++){
            if(str[i]==ch)
                printf("%d",count++);
            else
                printf("%c",str[i]);
        }
    }
    return 0;
}
