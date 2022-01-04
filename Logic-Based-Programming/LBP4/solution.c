# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int salecount;
    scanf("%d",&salecount);
    if(salecount>=30 && salecount<=100){
        if (salecount>=30 && salecount<=50)
            printf("D");
        else if (salecount>=51 && salecount<=60)
            printf("C");
        else if (salecount>=61 && salecount<=80)
            printf("B");
        else
            printf("A");
    }
    else
        printf("invalid");
    return 0;
}
