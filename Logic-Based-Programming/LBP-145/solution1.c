# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printEven(int arr[], int n);

int main() {
    int arr[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printEven(arr,n);
    return 0;
}

void printEven(int arr[], int n){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]%2==0)
            printf("%d ",arr[i]);
    }
}
