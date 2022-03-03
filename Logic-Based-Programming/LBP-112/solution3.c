# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int searchElement(int [], int, int);

int main() {
    int arr[99],n,key,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&key);
    printf("%d",searchElement(arr,n,key));
    return 0;
}

int searchElement(int arr[], int n, int key){
    int i,j,temp,index=-1;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]==key){
            index=i;
            break;
        }
    }
    return index;
}
