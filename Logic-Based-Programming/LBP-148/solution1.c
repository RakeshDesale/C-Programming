# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[100],size,last,i,pos;
    scanf("%d",&size);
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&last);
    if(last>size)
        printf("0");
    else{
        pos=size-last;
        for(i=pos;i<size;i++)
            printf("%d ",arr[i]);
    }
    return 0;
}
