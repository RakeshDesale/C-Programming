# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[20];
    int i,count1=0,count2=0;
    scanf("%s",str);
    for(i=0;str[i];i++){
        if(str[i]=='x')
            count1++;
        else if(str[i]=='o')
            count2++;
    }
    if((count1==count2)||(count1==0 && count2==0))
        printf("true");
    else
        printf("false");
    return 0;
}
