# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char name[20];
    int num;
    scanf("%s \n%d", name, &num);
    if (num==1)
        printf("Hello %s",name);
    else
        printf("Bye %s",name);
    return 0;
}
