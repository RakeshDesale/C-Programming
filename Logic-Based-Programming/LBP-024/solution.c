# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x,y,sum=0,i;
    scanf("%d %d",&x,&y);
    for (i=x;i<=y;i++){
        if(i%2==0)
            sum=sum+i;
        else
            continue;
    }
    printf("%d", sum);
    return 0;
}
