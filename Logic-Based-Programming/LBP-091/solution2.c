# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[50];
    int i;
    scanf("%[^\n]s",str);
    for(i=0;str[i];i++){
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    }
    for(i=0;str[i];i++){
        if(str[i]>='a' && str[i]<='z')
            printf("%d ",str[i]-96);
    }
    return 0;
}
