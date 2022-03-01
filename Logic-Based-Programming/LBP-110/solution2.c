# Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sortArrAsc(int [], int);

int main() {
    int arr[99],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    sortArrAsc(arr,n);
    return 0;
}

void sortArrAsc(int arr[], int n){
    int i,j,temp=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);    
}
