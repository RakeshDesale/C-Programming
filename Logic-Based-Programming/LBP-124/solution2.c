# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void delElement(int [], int, int);

int main() {
    int arr[99],n,i,ele;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&ele);
    delElement(arr,n,ele);
    return 0;
}

void delElement(int arr[], int n, int ele){
    int i,index=-1;
    for(i=0;i<n;i++){
        if(arr[i]==ele){
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
}
