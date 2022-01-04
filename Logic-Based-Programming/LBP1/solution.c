# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n>=0){
        if (n%2!=0){
            printf("odd");
        }
        else{
            printf("even");
        }
    }
    else{
        printf("invalid");
    }
    return 0;
}
