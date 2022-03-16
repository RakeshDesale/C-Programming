# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[99],n,i,oldele,newele;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&oldele);
    scanf("%d",&newele);
    for(i=0;i<n;i++){
        if(arr[i]==oldele)
            arr[i]=newele;
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
