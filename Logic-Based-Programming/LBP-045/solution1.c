# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isperfect(int);

int main() {
    int n;
    scanf("%d",&n);
    printf((isperfect(n))?"true":"false");
    return 0;
}

int isperfect(int n){
    int i,sum=0;
    for(i=1;i<n;i++){
        if(n%i==0)
            sum=sum+i;
    }
    return (sum==n)?1:0;
}
