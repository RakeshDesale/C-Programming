# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[20];
    int count=0,i;
    scanf("%[^\n]s",s);
    if (strlen(s)==0)
        exit(0);
    for (i=0;s[i];i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
            continue;
        else
            count++;
    }
    printf("%d",count);
    return 0;
}
