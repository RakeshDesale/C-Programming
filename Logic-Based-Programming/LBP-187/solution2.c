# Another Approach

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[100];
    int i,count = 0;
    scanf("%s",str);
    for(i=strlen(str)-1;i>=strlen(str)-2;i--){
        printf("%c",str[i]);
        count++;
        if(count<2)
            printf(",");
        else
            break;
    }
    return 0;
}
