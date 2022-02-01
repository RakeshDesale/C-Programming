# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[30];
    int i,count=1;
    scanf("%[^\n]s",str);
    for(i=0;str[i];i++){
        if(str[i]==' ' && str[i+1]!= ' ')
            count++;
    }
    printf("%d",count);
    return 0;
}
