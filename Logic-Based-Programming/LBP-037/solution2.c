# Using ASCII Values

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[20];
    int i;
    scanf("%s",str);
    for(i=0;str[i];i++){
        if(str[i]>=65 && str[i]<=90)
            printf("%c",str[i]+32);
        else if(str[i]>=97 && str[i]<=122)
            printf("%c",str[i]-32);
    }
    return 0;
}
