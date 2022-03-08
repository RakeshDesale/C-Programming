# Different Approach Using Function

# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int maxminDiff(int[], int);

int main() {
    int arr[99],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("%d",maxminDiff(arr,n));
    return 0;
}

int maxminDiff(int arr[], int n){
    int i,j,temp,min=0,max=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    min = arr[0];
    for(i=0;i<n;i++)
        max = arr[i];
    return (abs(max-min));
}
