# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void alternateEvenOdd(int [], int);

int main() {
    int n,arr[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    alternateEvenOdd(arr,n);
    return 0;
}

void alternateEvenOdd(int arr[], int n){
    int i,j,k,temp,even[50],odd[50];
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    j = 0,k = 0;
    for(i=0;i<n;i++){
        if(arr[i]%2 == 0)
            even[j++] = arr[i];
        else
            odd[k++] = arr[i];
    }
    for(i=0;i<n/2;i++)
        printf("%d %d ",even[i],odd[i]);
}
