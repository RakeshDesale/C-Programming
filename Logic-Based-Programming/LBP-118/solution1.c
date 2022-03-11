# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[99],n,i,count=0,key;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key)
            count++;
    }
    printf("%d",count);
    return 0;
}
