# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int checkBirthday(char [],int);

int main() {
    int day,val;
    char month[10];
    scanf("%s %d",month, &day);
    val=checkBirthday(month,day);
    printf("%d",val);
    return 0;
}

int checkBirthday(char month[],int day){
    if (strcmp(month,"july")==0 && day==5)
        return 1;
    else
        return 0;
}
