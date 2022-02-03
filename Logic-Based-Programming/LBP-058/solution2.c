# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int reform(char[],char[]);

int main() {
    char left[30],right[30];
    scanf("%s %s",left,right);
    reform(left,right);
    return 0;
}

int reform(char str1[],char str2[]){
    int i;
    printf("%c",toupper(str1[0]));
    for (i=1;str1[i];i++)
        printf("%c",str1[i]);
    printf("%s",str2);
    return 0;
}
