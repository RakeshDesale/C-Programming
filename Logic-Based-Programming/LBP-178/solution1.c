# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int W1,W2,W3,L1,L2;
    scanf("%d %d %d %d %d",&W1,&W2,&W3,&L1,&L2);
    printf((W1+W2+W3<=L1+L2)?"Yes":"No");
    return 0;
}
