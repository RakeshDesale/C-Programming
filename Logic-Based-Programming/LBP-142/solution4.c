# Another Approach Using Function and No Return Value

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void multipleArr(int [], int, int);

int main() {
    int arr[100]={0},m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    multipleArr(arr,m,n);
    return 0;
}

void multipleArr(int arr[], int m, int n){
    int i;
    for(i=1;i<=n;i++)
        arr[i] = m*i;
    for(i=1;i<=n;i++)
        printf("%d ",arr[i]);    
}
