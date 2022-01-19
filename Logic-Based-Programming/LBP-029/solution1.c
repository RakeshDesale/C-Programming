# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,flag=0;
    scanf("%d",&n);
    if(n>1){
        for(i=2;i<=n/2;i++){
            if(n%i==0){
                printf("false");
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("true");
    }
    else
        exit(0);
    return 0;
}

