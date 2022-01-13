# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,d,key,count=0;
    scanf("%d %d",&n,&key);
    while(n!=0){
        d=n%10;
        if(d==key)
            count++;
        n=n/10;
    }
    printf("%d",count);
    return 0;
}
