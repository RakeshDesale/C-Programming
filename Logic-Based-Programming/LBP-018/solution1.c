# Without using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int day;
    char month[10];
    scanf("%s %d",month,&day);
    if (strcmp(month,"july")==0 && day==5)
        printf("1");
    else
        printf("0");
    return 0;
}
