# Using ASCII Values

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[20];
    int count=0,i;
    scanf("%[^\n]s",s);
    for (i=0;i<strlen(s);i++){
        if ((s[i]>=97 && s[i]<=122)||(s[i]>=65 && s[i]<=90)||(s[i]>=48 && s[i]<=57))
            continue;
        else
            count++;
    }
    printf("%d",count);
    return 0;
}
