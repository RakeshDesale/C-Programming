# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void arrRange(int [],int, int);

int main() {
    int arr[100]={0},n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    if(n>m)
        printf("%d",n);
    else
        arrRange(arr,n,m);
    return 0;
}

void arrRange(int arr[], int n, int m){
    int i;
    for(i=n;i<=m;i++){
        arr[i]=i;
        printf("%d ",arr[i]);
    }
}
