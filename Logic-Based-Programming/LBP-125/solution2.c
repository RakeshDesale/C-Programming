# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void updateElement(int [], int, int, int);

int main() {
    int arr[99],n,oldele,newele,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&oldele);
    scanf("%d",&newele);
    updateElement(arr,n,oldele,newele);
    return 0;
}

void updateElement(int arr[], int n, int oldele, int newele){
    int i;
    for(i=0;i<n;i++){
        if(arr[i] == oldele)
            arr[i] = newele;
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
