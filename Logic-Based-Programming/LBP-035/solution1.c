# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int numMsg,d,sum=0;
    scanf("%d",&numMsg);
    while(numMsg!=0){
        d=numMsg%10;
        if(d==0 || d==1 || d==2 || d==3 || d==5 || d==7)
            continue;
        else
            sum=sum+d;
        numMsg=numMsg/10;
    }
    printf("%d",sum);
    return 0;
}
