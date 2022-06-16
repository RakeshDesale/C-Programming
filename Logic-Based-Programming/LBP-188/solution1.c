# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,d,sum;
    scanf("%d",&n);
    while(1){
        if(n >= 0 && n <= 9){
            printf("%d",n);
            break;
        }
        else{
            sum = 0;
            while(n != 0){
                d = n % 10;
                sum = sum + d;
                n = n / 10;
            }
            n = sum;
        }
    }
    return 0;
}
