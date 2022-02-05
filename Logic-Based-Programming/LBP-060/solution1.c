# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[30];
    int i,a[256]={0},max;
    scanf("%s",s);
    for(i=0;s[i];i++)
        a[(int)s[i]]++;
    max=0;
    for(i=0;i<256;i++){
        if(a[i]>a[max])
            max=i;
    }
    printf("%c",max);
    return 0;
}
