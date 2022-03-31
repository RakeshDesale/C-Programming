# Another Approach Using Function and Return Value

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int multipleArr(int, int);

int main() {
    int arr[100]={0},m,n,i;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        arr[i] = multipleArr(m,i);
    for(i=1;i<=n;i++)
        printf("%d ",arr[i]);
    return 0;
}

int multipleArr(int m, int i){
    return m*i;
}
