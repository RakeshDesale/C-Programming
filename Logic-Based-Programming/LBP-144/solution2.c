# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char arr[100];
    int n,i,sum=0;
    scanf("%s",arr);
    n = strlen(arr);
    for(i=0;i<n;i++)
        sum = sum+(arr[i]-96);
    printf("%.2f",sum/(float)n);
    return 0;
}
