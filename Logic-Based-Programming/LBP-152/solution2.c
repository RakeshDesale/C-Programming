# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void oddAfterEven(int [], int);

int main() {
    int arr[100],size,i;
    scanf("%d",&size);
    if(size>=1 && size<=100){
        for(i=0;i<size;i++)
            scanf("%d",&arr[i]);
        oddAfterEven(arr,size);
    }
    else
        exit(0);
    return 0;
}

void oddAfterEven(int arr[], int size){
    int i;
    for(i=0;i<size;i++){
        if(arr[i]%2==0)
            printf("%d ",arr[i]);
    }
    for(i=0;i<size;i++){
        if(arr[i]%2!=0)
            printf("%d ",arr[i]);
    }
}
