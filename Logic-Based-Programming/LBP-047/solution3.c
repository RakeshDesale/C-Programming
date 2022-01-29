# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,sum=0;
    scanf("%d",&n);
    if(n>0){
        while(n!=0){
            sum=sum+n%10;
            n=n/10;
        }
        printf((sum%2==0)?"Evenish":"Oddish");
    }
    else
        exit(0);
    return 0;
}
