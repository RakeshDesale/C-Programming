# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int day,month,year;
    scanf("%d-%d-%d", &day, &month, &year);
    if(day*month==year%10 || day*month==year%100 || day*month==year%1000)
        printf("true");
    else
        printf("false");
    return 0;
}
