# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[20];
    int countA=0,countL=0,i;
    scanf("%s",str);
    if(strlen(str)==0)
        exit(0);
    else{
        for(i=0;str[i];i++){
            if(str[i]>='a' && str[i]<='z')
                str[i]=str[i]-32;
            if(str[i]=='A')
                countA++;
            else if(str[i]=='L' && str[i+1]=='L' && str[i+2]=='L')
                countL++;
        }
    }
    printf((countL>=1 || countA>1)?"No":"Yes");
    return 0;
}
