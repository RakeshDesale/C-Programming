# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int rev(int);

int main() {
    int n, i = 0, len, sumEven = 0, sumOdd = 0, d, arr[100];
    scanf("%d",&n);
    n = rev(n);
    while(n!=0){
        d = n%10;
        arr[i++] = d;
        n = n/10;
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

int rev(int n){
    int d,rev = 0;
    while(n!=0){
        d = n%10;
        rev = rev*10+d;
        n = n/10;
    }
    return rev;
}
