# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void HelloBye(char [], int);

int main() {
    char name[20];
    int num;
    scanf("%s \n%d", name, &num);
    HelloBye(name,num);
    return 0;
}

void HelloBye(char name[], int num){
    if (num==1)
        printf("Hello %s",name);
    else
        printf("Bye %s",name);
}
