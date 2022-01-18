# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fahrenheitToCelsius(int);

int main() {
    int fahrenheit;
    scanf("%d",&fahrenheit);
    printf("%d",fahrenheitToCelsius(fahrenheit));
    return 0;
}

int fahrenheitToCelsius(int fahrenheit){
    int celsius;
    celsius=(((fahrenheit-32)*5)/9);
    return (celsius);
}
