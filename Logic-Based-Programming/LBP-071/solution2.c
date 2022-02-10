# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[20],ch;
    int i;
    scanf("%s \n%c",str,&ch);
    for(i=0;str[i];i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            printf("%c",ch);
        else
            printf("%c",str[i]);
    }
    return 0;
}
