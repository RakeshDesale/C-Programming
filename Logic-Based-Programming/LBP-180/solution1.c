# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,count = 0;
    scanf("%d",&n);
    while(n!=0){
        if(n%2==1)
            count++;
        n = n/2;
    }
    printf((count%2==0)?"even":"odd");
    return 0;
}
