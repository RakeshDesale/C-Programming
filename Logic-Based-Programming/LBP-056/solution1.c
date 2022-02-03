# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int swapString(char[], char[]);

int main() {
    char str1[30],str2[30];
    scanf("%s %s",str1,str2);
    swapString(str1,str2);
    return 0;
}

int swapString(char str1[],char str2[]){
    char str3[60];
    strcpy(str3,str1);
    strcpy(str1,str2);
    strcpy(str2,str3);
    printf("%s %s",str1,str2);
    return 0;
}
