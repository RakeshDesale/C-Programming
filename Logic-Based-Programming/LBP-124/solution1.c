# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[99],n,ele,i,index=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&ele);
    for(i=0;i<n;i++){
        if(arr[i] == ele){
            index=i;
            break;
        }
    }
    for(i=index;i<n;i++)
        arr[i] = arr[i+1];
    n--;
    if(index!=-1){
        for(i=0;i<n;i++)
            printf("%d ",arr[i]);
    }
    else
        printf("%d",index);
    return 0;
}
