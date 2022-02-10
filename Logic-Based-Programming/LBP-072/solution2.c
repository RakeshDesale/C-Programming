# Another Approach

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char* HelloBye(char [], int);

int main() {
    char name[20];
    int num;
    scanf("%s \n%d", name, &num);
    printf("%s %s",HelloBye(name,num),name);
    return 0;
}

char* HelloBye(char name[], int num){
    if (num==1)
        return "Hello";
    else
        return "Bye";
}
