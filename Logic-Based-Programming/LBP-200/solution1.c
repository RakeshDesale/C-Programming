# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,arr[100],k,i,sum = 0;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&k);
    for(i = 0;i < n;i++)
        sum = sum + (arr[i] % k);
    printf("%d",sum);
    return 0;
}
