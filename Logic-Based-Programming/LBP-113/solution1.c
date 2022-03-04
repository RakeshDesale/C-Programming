# Solution:

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[99],n,i,j,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                max=arr[i];
                arr[i]=arr[j];
                arr[j]=max;
            }
        }
    }
    printf("%d",arr[0]);
    return 0;
}
