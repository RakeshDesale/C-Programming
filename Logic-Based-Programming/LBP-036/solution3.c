# Using Inbuilt Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char str[20];
    int i;
    scanf("%s",str);
    for(i=0;str[i];i++){
        if(isupper(str[i])){
            printf("%c",str[i]);
            break;
        }            
    }
    return 0;
}
