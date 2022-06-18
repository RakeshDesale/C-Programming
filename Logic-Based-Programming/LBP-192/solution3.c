# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,d,sum,temp;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        sum = 0;
        temp = i;
        while(temp != 0){
            d = temp % 10;
            sum = sum + (d * d * d);
            temp = temp / 10;
        }
        if(i == sum)
            printf("%d ",i);
    }
    return 0;
}
