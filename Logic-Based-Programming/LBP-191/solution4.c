# Without Using Function and Using Loop

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,d,sum = 0;
    scanf("%d",&n);
    if(n >= 1 && n <= 26){
        printf("%c",n + 64);
    }
    else{
        while(n !=0 ){
            d = n % 10;
            sum = sum + d;
            n = n / 10;
        }
        printf("%c",sum + 64);
    }
    return 0;
}
