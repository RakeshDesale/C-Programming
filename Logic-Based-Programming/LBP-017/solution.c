# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,d,rev=0,temp;
    scanf("%d",&n);
    temp=n;
    if(n>0){
        while(n!=0){
            d=n%10;
            rev=rev*10+d;
            n=n/10;
        }
        if(temp==rev)
            printf("Yes");
        else
            printf("No");
    }
    else
        exit(0);
    return 0;
}
