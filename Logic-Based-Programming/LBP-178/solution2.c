# Using Function

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int totalWt(int, int, int, int, int);

int main() {
    int W1,W2,W3,L1,L2;
    scanf("%d %d %d %d %d",&W1,&W2,&W3,&L1,&L2);
    printf(totalWt(W1,W2,W3,L1,L2)?"Yes":"No");
    return 0;
}

int totalWt(int W1, int W2, int W3, int L1, int L2){
    return (W1+W2+W3<=L1+L2);
}
