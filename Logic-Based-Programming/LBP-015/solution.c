# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,d,flag=0;
    scanf("%d",&n);
    if(n>=0){
        while(n!=0){
            d=n%10;
            if(d==0){
                flag=1;
                break;
            }
            n=n/10;
        }
        if(flag==1)
            printf("Yes");
        else
            printf("No");
    }
    else
        exit(0);    
    return 0;
}
