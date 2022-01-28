# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,sum=0;
    scanf("%d", &n);
    if(n>0){
        for(i=1;i<n;i++){
            if(n%i==0)
                sum=sum+i;
        }
        printf((sum==n)?"true":"false");
    }
    else
        exit(0);
    return 0;
}
