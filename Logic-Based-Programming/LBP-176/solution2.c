# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int gcdVal(int, int);

int main() {
    int num1, num2;
    scanf("%d %d",&num1, &num2);
    printf("%d",gcdVal(num1,num2));
    return 0;
}

int gcdVal(int num1, int num2){
    int i,gcd = 0;
    for(i=1;i<=num1 && i<=num2;i++){
        if(num1%i==0 && num2%i==0)
            gcd = i;
    }
    return gcd;
}
