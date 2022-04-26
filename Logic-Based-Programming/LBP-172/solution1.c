# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, rev = 0, i = 0, len, sumEven = 0, sumOdd = 0, d, arr[100];
    scanf("%d",&n);
    while(n!=0){
        d = n%10;
        rev = rev*10+d;
        n = n/10;
    }
    d=0;
    while(rev!=0){
        d = rev%10;
        arr[i++] = d;
        rev = rev/10;
    }
    len = i;
    for(i=0;i<len;i++){
        if(i%2 == 0)
            sumEven = sumEven + arr[i];
        else
            sumOdd = sumOdd + arr[i];
    }
    printf("%d",sumOdd - sumEven);
    return 0;
}
