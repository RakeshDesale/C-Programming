# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int maxChar(char[]);

int main() {
    char s[30];
    scanf("%s",s);
    printf("%c",(char)maxChar(s));
    return 0;
}

int maxChar(char s[]){
    int i,a[256]={0},max;
    for(i=0;s[i];i++)
        a[(int)s[i]]++;
    max=0;
    for(i=0;i<256;i++){
        if(a[i]>a[max])
            max=i;
    }
    return max;
}
