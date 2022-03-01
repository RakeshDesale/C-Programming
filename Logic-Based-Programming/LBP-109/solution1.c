# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[99],n,key,i,index;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&key);
    index=-1;
    for(i=0;i<n;i++){
        if(arr[i]==key){
            index=i;
            break;
        }
    }
    printf("%d",index);
    return 0;
}
