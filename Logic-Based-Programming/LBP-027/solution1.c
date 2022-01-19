# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int getSequenceSum(int,int,int);

int main() {
    int i,j,k;
    scanf("%d %d %d", &i, &j, &k);
    printf("%d",getSequenceSum(i,j,k));
    return 0;
}

int getSequenceSum(int i, int j, int k){
    int a,sum=0;
    for (a=i;a<j;a++)
        sum=sum+a;
    for (a=j;a>=k;a--)
        sum=sum+a;
    return sum;
}
