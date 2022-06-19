# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int nearestWholeNumber(int);

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",nearestWholeNumber(n));
    return 0;
}

int nearestWholeNumber(int n){
    while(1){
        if(n % 10 == 0){
            return n;
        }
        else
            n++;
    }    
}
