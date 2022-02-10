# Without Using Function

# Optimized Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[20];
    int i,count=0;
    scanf("%s",str);
    for(i=0;str[i];i++){
        if(str[i]>='0' && str[i]<='9')
            count++;
    }
    printf((count==5)?"true":"false");
    return 0;
}
