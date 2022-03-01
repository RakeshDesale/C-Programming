# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int searchElement(int [], int, int);

int main() {
    int arr[99],n,i,key;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&key);
    printf("%d",searchElement(arr, n, key));
    return 0;
}

int searchElement(int arr[], int n, int key){
    int i,index=-1;
    for(i=0;i<n;i++){
        if(arr[i]==key){
            index=i;
            break;
        }
    }
    return index;
}
