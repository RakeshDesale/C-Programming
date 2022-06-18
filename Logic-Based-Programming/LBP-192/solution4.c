# Without Using Function and Using Inbuilt pow Method

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, i, d, sum, temp;
    scanf("%d",&n);
    for(i = 2; i <= n; i++){
        sum = 0;
        temp = i;
        while(temp != 0){
            d = temp % 10;
            sum = sum + (int)pow(d, 3);
            temp = temp / 10;
        }
        if(i == sum)
            printf("%d ",i);
    }
    return 0;
}
