# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int celsiusToFahrenheit(int);

int main() {
    int celsius,fahrenheit;
    scanf("%d",&celsius);
    fahrenheit=celsiusToFahrenheit(celsius);
    printf("%d",fahrenheit);
    return 0;
}

int celsiusToFahrenheit(int celsius){
    int fahrenheit;
    fahrenheit=celsius*1.8+32;
    return fahrenheit;
}
