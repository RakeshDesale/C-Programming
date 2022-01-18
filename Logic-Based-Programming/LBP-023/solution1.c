# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,d,sum=0,prod=1,temp,res;
    scanf("%d",&n);
    if (n>=10 && n<=99){
        temp=n;
        while(n!=0){
            d=n%10;
            sum=sum+d;
            prod=prod*d;
            n=n/10;
        }
        res=sum+prod;
        if(temp==res)
            printf("Yes");
        else
            printf("No");
    }
    else
        exit(0);
    return 0;
}
