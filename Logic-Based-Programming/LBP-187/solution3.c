# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void last2Char(char []);

int main() {
    char str[100];
    scanf("%s",str);
    last2Char(str);
    return 0;
}

void last2Char(char str[]){
    int n;
    n = strlen(str);
    printf("%c,%c",str[n-1],str[n-2]);
}
