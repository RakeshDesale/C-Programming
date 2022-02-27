# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printArray(int);

int main() {
    int n;
    scanf("%d",&n);
    printArray(n);
    return 0;
}

void printArray(int n){
    int arr[99],i;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
