# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[100];
    int i;
    scanf("%s",str);
    for(i=0;str[i];i++){
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9'))
            printf("%c",str[i]);
    }
    return 0;
}
