# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[30];
    int i,a[256]={0};
    scanf("%s",str);
    for(i=0;str[i];i++){
        a[str[i]]++;
    }
    for(i=97;i<=122;i++){
        if(a[i]==0)
            printf("%c",i);
    }
    return 0;
}
