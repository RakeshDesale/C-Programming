# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[20];
    int i,count=0;
    scanf("%s",str);
    for(i=0;str[i];i++){
        if(str[i]=='(') count++;
        else if(str[i]==')') count--;
    }
    printf("%d",count);
    return 0;
}
