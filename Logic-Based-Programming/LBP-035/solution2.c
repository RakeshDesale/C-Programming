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
        if(d==4||d==6||d==8||d==9)
            sum=sum+d;
        numMsg=numMsg/10;
    }
    printf("%d",sum);
    return 0;
}
