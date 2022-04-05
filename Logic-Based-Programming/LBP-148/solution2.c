# Optimized Approach

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[100],size,last,i;
    scanf("%d",&size);
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&last);
    if(last>size)
        printf("0");
    else{
        for(i=size-last;i<size;i++)
            printf("%d ",arr[i]);
    }
    return 0;
}
