# Another Way Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,factors=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        if(n%i==0)
            factors++;
    }
    printf((factors==2)?"true":"false");
    return 0;
}
