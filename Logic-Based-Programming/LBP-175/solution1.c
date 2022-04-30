# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j,factors;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        factors = 0;
        for(j=1;j<=i;j++){
            if(i%j == 0)
                factors++;
        }
        if(factors == 2)
            printf("%d ",i);
    }
    return 0;
}
