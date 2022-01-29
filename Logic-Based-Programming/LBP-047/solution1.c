# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int oddEven(int);

int main() {
    int n,res;
    scanf("%d",&n);
    if (n>0){
        res=oddEven(n);
        if(res==1)
            printf("Evenish");
        else
            printf("Oddish");
    }
    else
        exit(0);
    return 0;
}

int oddEven(int n){
    int d,sum=0;
    while(n!=0){
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    if(sum%2==0)
        return 1;
    else
        return 0;
}
