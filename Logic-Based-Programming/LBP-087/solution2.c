# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int balancedParenthesis(char []);

int main() {
    char str[20];
    scanf("%s",str);
    printf("%d",balancedParenthesis(str));
    return 0;
}

int balancedParenthesis(char str[]){
    int i,count=0;
    for(i=0;str[i];i++){
        if(str[i]=='(') count++;
        else if(str[i]==')')    count--;
    }
    return count;
}
