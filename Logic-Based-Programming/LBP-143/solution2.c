# Without Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[100]={0},n,m,i;
    scanf("%d %d", &n, &m);
    if(n>m)
        printf("%d",n);
    else{
        for(i=n;i<=m;i++){
            arr[i] = i;
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
