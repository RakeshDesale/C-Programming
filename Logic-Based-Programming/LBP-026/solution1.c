# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int celsius,fahrenheit;
    scanf("%d",&fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("%d",celsius);
    return 0;
}
