# Without Using Function

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
        if(str[i]!='z')
            str[i]=str[i]+1;
    }
    printf("%s",str);
    return 0;
}
