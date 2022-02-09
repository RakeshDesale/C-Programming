# Using ASCII Values and Using Constraints

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[20];
    int x,y,len;
    scanf("%s",str);
    len=strlen(str);
    if(len==2){
        if(str[0]>=97 && str[0]<=104  && str[1]>=49 && str[1]<=56){
            x=str[0]-96;
            y=str[1];
            if(x%2!=y%2)
                printf("true");
            else
                printf("false");
        }
    }
    else
        exit(0);
    return 0;
}
