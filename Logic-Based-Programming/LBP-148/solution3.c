# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void lastNElements(int [], int, int);

int main() {
    int arr[100],size,last,i;
    scanf("%d",&size);
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&last);
    lastNElements(arr,size,last);
    return 0;
}

void lastNElements(int arr[], int size, int last){
    int i;
    if(last>size)
        printf("0");
    else{
        for(i=size-last;i<size;i++)
            printf("%d ",arr[i]);
    }
}
