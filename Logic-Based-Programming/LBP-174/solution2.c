# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char prodBarcode(char);

int main() {
    char str[20];
    int i;
    scanf("%s",str);
    for(i=0;str[i];i++){
        printf("%d",prodBarcode(str[i]));
    }
    return 0;
}

char prodBarcode(char c){
    return c-97;
}
